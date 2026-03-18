/*
 * XREFs of HvpMapEntryGetBinAddress @ 0x14003B3D0
 * Callers:
 *     HvCheckHive @ 0x1403D0558 (HvCheckHive.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1403D169C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     HvpEnlistFreeCell @ 0x1403D9258 (HvpEnlistFreeCell.c)
 *     HvpAddFreeCellHint @ 0x1403D9584 (HvpAddFreeCellHint.c)
 *     HvpFindNextDirtyBlock @ 0x1403ED550 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x1403F7AD4 (HvpSetRangeProtection.c)
 *     HvIsCellAllocated @ 0x1403F94C0 (HvIsCellAllocated.c)
 *     CmpCheckLeaf @ 0x1403F9670 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x140403CF0 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140404270 (CmpCheckKey.c)
 *     HvpRemoveFreeCellHint @ 0x140479A30 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x140479CB0 (HvpFindFreeCell.c)
 *     HvpDropPagedBins @ 0x140521774 (HvpDropPagedBins.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x1405E52D8 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x1405E6F98 (HvWriteExternal.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall HvpMapEntryGetBinAddress(__int64 a1, struct _EX_RUNDOWN_REF *a2, BOOLEAN *a3, _DWORD *a4)
{
  unsigned __int64 Count; // rax
  BOOLEAN v9; // al

  if ( (a2[3].Count & 1) != 0 )
  {
    Count = a2[1].Count;
    *a3 = 0;
  }
  else
  {
    v9 = ExAcquireRundownProtection(a2 + 3);
    *a3 = v9;
    if ( v9 )
    {
      Count = a2[2].Count;
      *a4 = -1;
    }
    else
    {
      Count = a2[1].Count;
    }
  }
  return Count & 0xFFFFFFFFFFFFFFF0uLL;
}
