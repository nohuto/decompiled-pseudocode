/*
 * XREFs of CmpFreeBootRegistry @ 0x1401B73C4
 * Callers:
 *     HvFreeHive @ 0x1404F76B4 (HvFreeHive.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
