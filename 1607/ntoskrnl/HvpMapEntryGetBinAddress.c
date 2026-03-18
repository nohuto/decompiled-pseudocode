/*
 * XREFs of HvpMapEntryGetBinAddress @ 0x14002D660
 * Callers:
 *     HvFreeCell @ 0x1404016EC (HvFreeCell.c)
 *     HvpFindFreeCell @ 0x140401F50 (HvpFindFreeCell.c)
 *     HvIsCellAllocated @ 0x1404399C0 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x14043C940 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x14043D610 (CmpCheckKey.c)
 *     CmpCheckLeaf @ 0x14043FDC0 (CmpCheckLeaf.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1404802D0 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpFindNextDirtyBlock @ 0x1404815C8 (HvpFindNextDirtyBlock.c)
 *     HvCheckHive @ 0x140513594 (HvCheckHive.c)
 *     HvpSetRangeProtection @ 0x1405139A4 (HvpSetRangeProtection.c)
 *     HvpRemoveFreeCellHint @ 0x140514670 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140514E4C (HvpEnlistFreeCell.c)
 *     HvpAddFreeCellHint @ 0x1405151F8 (HvpAddFreeCellHint.c)
 *     HvpDropPagedBins @ 0x14054DD48 (HvpDropPagedBins.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x140604834 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x1406064F4 (HvWriteExternal.c)
 * Callees:
 *     HvpIncrementCellReferenceCount @ 0x14002D6BC (HvpIncrementCellReferenceCount.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall HvpMapEntryGetBinAddress(__int64 a1, struct _EX_RUNDOWN_REF *a2, _WORD *a3)
{
  unsigned __int64 Count; // rbx
  BOOLEAN v6; // al

  if ( (a2[3].Count & 1) != 0 )
  {
    Count = a2[1].Count;
    v6 = 0;
  }
  else
  {
    v6 = ExAcquireRundownProtection(a2 + 3);
    if ( v6 )
      Count = a2[2].Count;
    else
      Count = a2[1].Count;
  }
  *a3 = *a3 & 0xFFFD | (2 * (v6 & 1)) | 1;
  HvpIncrementCellReferenceCount();
  return Count & 0xFFFFFFFFFFFFFFF0uLL;
}
