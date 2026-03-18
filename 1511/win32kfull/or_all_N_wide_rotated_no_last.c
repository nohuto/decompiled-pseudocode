/*
 * XREFs of or_all_N_wide_rotated_no_last @ 0x1C02D2630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall or_all_N_wide_rotated_no_last(int a1, char a2, int a3, unsigned __int8 *a4, _BYTE *a5, int a6, int a7)
{
  _BYTE *v7; // r10
  char v8; // di
  _BYTE *v10; // rbx
  __int64 v11; // rsi
  _BYTE *v12; // r11
  char v13; // r8
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // al
  char result; // al

  v7 = a5;
  v8 = 8 - a2;
  v10 = &a5[a3 * a1];
  v11 = a3 - a7 + 1LL;
  do
  {
    v12 = &v7[a7 - 1];
    v13 = 0;
    do
    {
      v14 = *a4;
      v15 = *a4++;
      result = v13 | (v15 >> a2);
      *v7++ |= result;
      v13 = v14 << v8;
    }
    while ( v7 != v12 );
    *v7 |= v13;
    v7 += v11;
  }
  while ( v7 != v10 );
  return result;
}
