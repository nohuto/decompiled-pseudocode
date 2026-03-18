/*
 * XREFs of HvpGetCellMap @ 0x1403F7A80
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400F2C48 (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401AA964 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     CmpTrimHive @ 0x1403BAC40 (CmpTrimHive.c)
 *     HvCheckHive @ 0x1403D0558 (HvCheckHive.c)
 *     CmpReorganizeHive @ 0x1403D0DDC (CmpReorganizeHive.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1403D169C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpAddBin @ 0x1403D5214 (HvpAddBin.c)
 *     HvpFindFreeBin @ 0x1403D5908 (HvpFindFreeBin.c)
 *     HvpGetBinMemAlloc @ 0x1403D59C0 (HvpGetBinMemAlloc.c)
 *     HvFreeHive @ 0x1403D8128 (HvFreeHive.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1403D8960 (HvpRemapAndEnlistHiveBins.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     HvpEnlistFreeCell @ 0x1403D9258 (HvpEnlistFreeCell.c)
 *     HvpAddFreeCellHint @ 0x1403D9584 (HvpAddFreeCellHint.c)
 *     HvpFindNextDirtyBlock @ 0x1403ED550 (HvpFindNextDirtyBlock.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     HvpPointMapEntriesToBuffer @ 0x1403F79BC (HvpPointMapEntriesToBuffer.c)
 *     HvpSetRangeProtection @ 0x1403F7AD4 (HvpSetRangeProtection.c)
 *     HvpRemoveFreeCellHint @ 0x140479A30 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x140479CB0 (HvpFindFreeCell.c)
 *     HvpTruncateBins @ 0x140487FD4 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x140488090 (HvFreeHivePartial.c)
 *     HvpDropPagedBins @ 0x140521774 (HvpDropPagedBins.c)
 *     HvpBuildMapForLoaderHive @ 0x14053265C (HvpBuildMapForLoaderHive.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x1405E52D8 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x1405E6F98 (HvWriteExternal.c)
 *     HvpReviveDiscardedBin @ 0x1405EC2A4 (HvpReviveDiscardedBin.c)
 *     HvpCopyModifiedData @ 0x1405EDFD4 (HvpCopyModifiedData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellMap(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = a1 + 632LL * (a2 >> 31);
  if ( a2 + (a2 >> 31 << 31) >= *(_DWORD *)(v2 + 1400) )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v2 + 1408) + 8LL * ((a2 >> 21) & 0x3FF)) + 40LL * ((a2 >> 12) & 0x1FF);
}
