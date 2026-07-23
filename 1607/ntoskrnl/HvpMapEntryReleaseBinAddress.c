/*
 * XREFs of HvpMapEntryReleaseBinAddress @ 0x14002CF80
 * Callers:
 *     HvpMapEntryReleaseBlockAddress @ 0x1401B6BC8 (HvpMapEntryReleaseBlockAddress.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     HvpFindFreeCell @ 0x140400E10 (HvpFindFreeCell.c)
 *     HvIsCellAllocated @ 0x140438890 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x14043B810 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x14043C4E0 (CmpCheckKey.c)
 *     HvpReleaseCellPaged @ 0x14043EC00 (HvpReleaseCellPaged.c)
 *     CmpCheckLeaf @ 0x14043EC90 (CmpCheckLeaf.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14047F024 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpFindNextDirtyBlock @ 0x14048031C (HvpFindNextDirtyBlock.c)
 *     HvCheckHive @ 0x1404F6984 (HvCheckHive.c)
 *     HvpSetRangeProtection @ 0x1404F6D94 (HvpSetRangeProtection.c)
 *     HvpRemoveFreeCellHint @ 0x1404F7A60 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x1404F823C (HvpEnlistFreeCell.c)
 *     HvpAddFreeCellHint @ 0x1404F85E8 (HvpAddFreeCellHint.c)
 *     HvpDropPagedBins @ 0x14054E0E8 (HvpDropPagedBins.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x1406048E8 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x1406065A8 (HvWriteExternal.c)
 * Callees:
 *     HvpDecrementCellReferenceCount @ 0x14002CFA4 (HvpDecrementCellReferenceCount.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 */

__int64 __fastcall HvpMapEntryReleaseBinAddress(__int64 a1, struct _EX_RUNDOWN_REF *a2, _WORD *a3)
{
  __int64 result; // rax

  if ( (*(_BYTE *)a3 & 2) != 0 )
  {
    ExReleaseRundownProtection(a2 + 3);
    *a3 &= ~2u;
  }
  HvpDecrementCellReferenceCount();
  result = 0LL;
  *a3 = 0;
  return result;
}
