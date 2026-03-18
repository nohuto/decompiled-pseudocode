/*
 * XREFs of HvpMapEntryReleaseBinAddress @ 0x14002D400
 * Callers:
 *     HvpMapEntryReleaseBlockAddress @ 0x1401B6CE4 (HvpMapEntryReleaseBlockAddress.c)
 *     HvFreeCell @ 0x1404016EC (HvFreeCell.c)
 *     HvpFindFreeCell @ 0x140401F50 (HvpFindFreeCell.c)
 *     HvIsCellAllocated @ 0x1404399C0 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x14043C940 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x14043D610 (CmpCheckKey.c)
 *     HvpReleaseCellPaged @ 0x14043FD30 (HvpReleaseCellPaged.c)
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
 *     HvpDecrementCellReferenceCount @ 0x14002D424 (HvpDecrementCellReferenceCount.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
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
