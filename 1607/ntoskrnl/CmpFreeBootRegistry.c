/*
 * XREFs of CmpFreeBootRegistry @ 0x1401B74E0
 * Callers:
 *     HvFreeHive @ 0x1405142C4 (HvFreeHive.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
