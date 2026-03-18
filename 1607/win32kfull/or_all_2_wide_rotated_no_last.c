/*
 * XREFs of or_all_2_wide_rotated_no_last @ 0x1C0106480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall or_all_2_wide_rotated_no_last(int a1, char a2, int a3, unsigned __int8 *a4, _BYTE *a5)
{
  unsigned __int8 *v6; // r11
  __int64 v7; // rdi
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // al
  char result; // al

  v6 = &a4[a1];
  v7 = a3;
  do
  {
    v8 = *a4;
    v9 = *a4++;
    result = v9 >> a2;
    *a5 |= result;
    a5[1] |= v8 << (8 - a2);
    a5 += v7;
  }
  while ( a4 != v6 );
  return result;
}
