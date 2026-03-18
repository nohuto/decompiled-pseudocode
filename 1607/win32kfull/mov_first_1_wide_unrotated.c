/*
 * XREFs of mov_first_1_wide_unrotated @ 0x1C00EE350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall mov_first_1_wide_unrotated(int a1, __int64 a2, int a3, unsigned __int8 *a4, _BYTE *a5)
{
  __int64 v5; // rdx
  unsigned __int8 *v7; // rdx
  __int64 result; // rax

  v5 = a1;
  v7 = &a4[v5];
  do
  {
    result = *a4++;
    *a5 = result;
    a5 += a3;
  }
  while ( a4 != v7 );
  return result;
}
