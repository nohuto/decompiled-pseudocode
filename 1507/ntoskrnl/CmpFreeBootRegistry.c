/*
 * XREFs of CmpFreeBootRegistry @ 0x1401E1138
 * Callers:
 *     HvFreeHive @ 0x1404A06B4 (HvFreeHive.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
