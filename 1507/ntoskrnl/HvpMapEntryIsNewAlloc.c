/*
 * XREFs of HvpMapEntryIsNewAlloc @ 0x1400627EC
 * Callers:
 *     HvpFindFreeCell @ 0x14049EF7C (HvpFindFreeCell.c)
 *     HvpFindNextDirtyBlock @ 0x1404A0C4C (HvpFindNextDirtyBlock.c)
 *     CmpTrimHive @ 0x1404EA73C (CmpTrimHive.c)
 *     HvpFreeAllocatedBins @ 0x14065B830 (HvpFreeAllocatedBins.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryIsNewAlloc(__int64 a1)
{
  return *(_BYTE *)(a1 + 8) & 1;
}
