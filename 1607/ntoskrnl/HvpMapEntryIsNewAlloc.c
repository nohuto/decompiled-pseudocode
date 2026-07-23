/*
 * XREFs of HvpMapEntryIsNewAlloc @ 0x14000AEB0
 * Callers:
 *     HvpFindFreeCell @ 0x140400E10 (HvpFindFreeCell.c)
 *     HvpFindNextDirtyBlock @ 0x14048031C (HvpFindNextDirtyBlock.c)
 *     CmpTrimHive @ 0x140519464 (CmpTrimHive.c)
 *     HvpFreeAllocatedBins @ 0x140603B18 (HvpFreeAllocatedBins.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryIsNewAlloc(__int64 a1)
{
  return *(_BYTE *)(a1 + 8) & 1;
}
