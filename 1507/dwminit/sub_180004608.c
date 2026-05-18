/*
 * XREFs of sub_180004608 @ 0x180004608
 * Callers:
 *     sub_180004654 @ 0x180004654 (sub_180004654.c)
 *     sub_1800047D0 @ 0x1800047D0 (sub_1800047D0.c)
 *     sub_1800049A0 @ 0x1800049A0 (sub_1800049A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180004608(unsigned int a1)
{
  int v1; // edx
  __int64 v2; // rdx

  if ( a1 + 805306334 <= 0x1F )
  {
    v1 = -2145124351;
    if ( _bittest(&v1, a1 + 805306334) )
      return (unsigned int)-2144980991;
  }
  if ( a1 + 805305825 <= 0x34 )
  {
    v2 = 0x10000000000041LL;
    if ( _bittest64(&v2, (int)(a1 + 805305825)) )
      return (unsigned int)-2144980991;
  }
  return a1;
}
