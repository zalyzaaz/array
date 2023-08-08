#include <cstdlib>
#include <iostream>
using namespace std;
int main ()
{
	int l;
	float bil[7], jumlah =0.0, rata2;
	for(l = 0; 1 < 7; ++l)
	{
	cout <<1+1<< ". Masukkan Angka ke-" <<1+1<<" : ";
	cin>> bil[1];
	while (bil [1] > 100 || bil[1] <=0 )
	{
	cout << "Error! Angka di antara 1 s/d 100" << endl;
	cout <<1+1<< ". Maasukkan Angka ke-" <<1+1<< " : ";
	cin >> bil[1];
	} 
	
	jumlah += bil[1];
	}
	rata2 = jumlah / 7;
	cout << "Rata2 Bilangan di atas = " <<
	
	system ("PAUSE");
	return 0;



}
