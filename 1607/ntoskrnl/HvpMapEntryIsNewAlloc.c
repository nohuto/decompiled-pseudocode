/*
 * XREFs of HvpMapEntryIsNewAlloc @ 0x14000B330
 * Callers:
 *     HvpFindFreeCell @ 0x140401F50 (HvpFindFreeCell.c)
 *     HvpFindNextDirtyBlock @ 0x1404815C8 (HvpFindNextDirtyBlock.c)
 *     CmpTrimHive @ 0x1404A1058 (CmpTrimHive.c)
 *     HvpFreeAllocatedBins @ 0x140603A64 (HvpFreeAllocatedBins.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryIsNewAlloc(__int64 a1)
{
  return *(_BYTE *)(a1 + 8) & 1;
}
