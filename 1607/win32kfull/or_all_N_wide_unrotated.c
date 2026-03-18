/*
 * XREFs of or_all_N_wide_unrotated @ 0x1C02D5730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall or_all_N_wide_unrotated(int a1, __int64 a2, int a3, char *a4, _BYTE *a5, int a6, int a7)
{
  _BYTE *v7; // rdx
  _BYTE *v8; // r10
  int v9; // r8d
  _BYTE *v10; // rcx
  char result; // al

  v7 = a5;
  v8 = &a5[a3 * a1];
  v9 = a3 - a7;
  do
  {
    v10 = &v7[a7];
    do
    {
      result = *a4++;
      *v7++ |= result;
    }
    while ( v7 != v10 );
    v7 += v9;
  }
  while ( v7 != v8 );
  return result;
}
