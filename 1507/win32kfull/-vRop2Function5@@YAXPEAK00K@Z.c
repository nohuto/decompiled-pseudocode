/*
 * XREFs of ?vRop2Function5@@YAXPEAK00K@Z @ 0x1C02D30F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vRop2Function5(char *a1, char *a2, unsigned int *a3, int a4)
{
  signed __int64 v4; // rcx

  if ( a4 )
  {
    v4 = a1 - a2;
    do
    {
      *(_DWORD *)&a2[v4] = ~*(_DWORD *)a2;
      a2 += 4;
      --a4;
    }
    while ( a4 );
  }
}
