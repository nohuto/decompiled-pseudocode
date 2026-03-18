/*
 * XREFs of HvpMapEntryIsNewAlloc @ 0x1400A04B8
 * Callers:
 *     CmpTrimHive @ 0x1403BAC40 (CmpTrimHive.c)
 *     HvpFindNextDirtyBlock @ 0x1403ED550 (HvpFindNextDirtyBlock.c)
 *     HvpFindFreeCell @ 0x140479CB0 (HvpFindFreeCell.c)
 *     HvpFreeAllocatedBins @ 0x1405E48E8 (HvpFreeAllocatedBins.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryIsNewAlloc(__int64 a1)
{
  return *(_BYTE *)(a1 + 8) & 1;
}
