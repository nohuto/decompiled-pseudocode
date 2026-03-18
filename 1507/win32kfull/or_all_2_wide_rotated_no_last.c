/*
 * XREFs of or_all_2_wide_rotated_no_last @ 0x1C00C30E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall or_all_2_wide_rotated_no_last(int a1, char a2, int a3, unsigned __int8 *a4, _BYTE *a5)
{
  _BYTE *result; // rax
  unsigned __int8 *v6; // r10
  __int64 v7; // rdi
  unsigned __int8 v8; // r8

  result = a5;
  v6 = &a4[a1];
  v7 = a3;
  do
  {
    v8 = *a4++;
    *result |= v8 >> a2;
    result[1] |= v8 << (8 - a2);
    result += v7;
  }
  while ( a4 != v6 );
  return result;
}
