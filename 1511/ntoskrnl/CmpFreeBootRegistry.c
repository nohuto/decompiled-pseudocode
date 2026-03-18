/*
 * XREFs of CmpFreeBootRegistry @ 0x1401AB670
 * Callers:
 *     HvFreeHive @ 0x1403D8128 (HvFreeHive.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
