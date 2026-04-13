/*
 * XREFs of sub_180014944 @ 0x180014944
 * Callers:
 *     sub_18000DAA8 @ 0x18000DAA8 (sub_18000DAA8.c)
 *     sub_180019D04 @ 0x180019D04 (sub_180019D04.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180014944(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( a2[3] >= 8uLL )
  {
    if ( a1 )
      *a1 = *a2;
    *a2 = 0LL;
  }
  else if ( a2[2] != -1LL )
  {
    memmove(a1, a2, 2 * (a2[2] + 1LL));
  }
  a1[2] = a2[2];
  result = a2[3];
  a1[3] = result;
  a2[2] = 0LL;
  a2[3] = 7LL;
  *(_WORD *)a2 = 0;
  return result;
}
