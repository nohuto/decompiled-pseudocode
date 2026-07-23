/*
 * XREFs of HvpAdjustHiveFreeDisplay @ 0x14047DC5C
 * Callers:
 *     HvpAddBin @ 0x14047CC64 (HvpAddBin.c)
 *     HvLoadHive @ 0x14047DA4C (HvLoadHive.c)
 *     HvInitializeHive @ 0x14047E8F8 (HvInitializeHive.c)
 *     HvFreeHivePartial @ 0x140480844 (HvFreeHivePartial.c)
 * Callees:
 *     HvpAdjustBitmap @ 0x14047DCD0 (HvpAdjustBitmap.c)
 */

__int64 __fastcall HvpAdjustHiveFreeDisplay(__int64 a1, unsigned int a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 result; // rax

  if ( a2 > 0x7FFFE000 )
    return 3221225804LL;
  v5 = 0LL;
  v6 = 632LL * a3;
  while ( 1 )
  {
    result = HvpAdjustBitmap(a1, a2, v6 + 24 * v5 + a1 + 1432);
    if ( (int)result < 0 )
      break;
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 0x18 )
      return 0LL;
  }
  return result;
}
