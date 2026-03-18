/*
 * XREFs of HvpMarkCellDirty @ 0x1403F76E0
 * Callers:
 *     CmpClearKeyAccessBits @ 0x1403B5728 (CmpClearKeyAccessBits.c)
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1403D5C98 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpTransMgrCommitUoW @ 0x1403D7344 (CmpTransMgrCommitUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x1403D7548 (CmpCommitSetValueKeyUoW.c)
 *     CmpMarkIndexDirty @ 0x1403D7904 (CmpMarkIndexDirty.c)
 *     CmpAddSubKeyEx @ 0x1403D7E1C (CmpAddSubKeyEx.c)
 *     HvpIsFreeNeighbor @ 0x1403D91AC (HvpIsFreeNeighbor.c)
 *     CmpAddToLeaf @ 0x1403D97A4 (CmpAddToLeaf.c)
 *     CmpSetValueKeyExisting @ 0x1403DA0F4 (CmpSetValueKeyExisting.c)
 *     CmpMarkKeyDirty @ 0x1403DA3B4 (CmpMarkKeyDirty.c)
 *     CmpMarkValueDataDirty @ 0x1403DA5C0 (CmpMarkValueDataDirty.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1403DDA84 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403DE534 (CmpTransMgrFreeVolatileData.c)
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     CmpAssignSecurityDescriptor @ 0x1403DFF74 (CmpAssignSecurityDescriptor.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403E09B8 (CmpSetSecurityDescriptorInfo.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x1403F43A0 (CmpSetValueKeyNew.c)
 *     CmpCheckLeaf @ 0x1403F9670 (CmpCheckLeaf.c)
 *     CmEnumerateKey @ 0x1403FDED0 (CmEnumerateKey.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpCheckValueList @ 0x140403CF0 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140404270 (CmpCheckKey.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140423B38 (CmpUpdateKeyNodeAccessBits.c)
 *     HvpFindFreeCellInBin @ 0x140479C10 (HvpFindFreeCellInBin.c)
 *     CmpCommitAddKeyUoW @ 0x1404B3A00 (CmpCommitAddKeyUoW.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1404B88F0 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpInsertSecurityCellList @ 0x1404BE234 (CmpInsertSecurityCellList.c)
 *     CmpSelectLeaf @ 0x1404C6074 (CmpSelectLeaf.c)
 *     CmpSaveBootControlSet @ 0x14050EC14 (CmpSaveBootControlSet.c)
 *     CmpCopySyncTree2 @ 0x14050F068 (CmpCopySyncTree2.c)
 *     CmpSyncKeyValues @ 0x14050F5B0 (CmpSyncKeyValues.c)
 *     CmpMarkKeyValuesDirty @ 0x14050FA7C (CmpMarkKeyValuesDirty.c)
 *     CmpMarkKeyParentDirty @ 0x14050FC18 (CmpMarkKeyParentDirty.c)
 *     CmpCommitSetSecurityUoW @ 0x14051A854 (CmpCommitSetSecurityUoW.c)
 *     CmpMarkCurrentProfileDirty @ 0x14051DBB0 (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x140521970 (CmpMarkCurrentValueDirty.c)
 *     CmMoveKey @ 0x1405DEE58 (CmMoveKey.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405E0250 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405E0744 (CmSetLastWriteTimeKey.c)
 *     CmpDoBuildVirtualStack @ 0x1405E22EC (CmpDoBuildVirtualStack.c)
 *     CmpReplicateKeyToVirtual @ 0x1405E29D0 (CmpReplicateKeyToVirtual.c)
 *     CmpCopySaclToVirtualKey @ 0x1405E2E88 (CmpCopySaclToVirtualKey.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1405E4090 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x1405E4300 (CmpSplitLeaf.c)
 *     CmpUpdateParentForEachSon @ 0x1405E457C (CmpUpdateParentForEachSon.c)
 *     HvRefreshHive @ 0x1405E6A0C (HvRefreshHive.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 *     CmpCommitRenameKeyUoW @ 0x1405EBE70 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     HvpReleaseHCell @ 0x140040C50 (HvpReleaseHCell.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     HvpMarkDirty @ 0x1403F77C0 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
 */

char __fastcall HvpMarkCellDirty(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  ULONG_PTR v4; // rdi
  __int64 v6; // rax
  char v7; // di
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = -1;
  v4 = (unsigned int)BugCheckParameter3;
  if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 1) != 0 || (BugCheckParameter3 & 0x80000000) != 0LL )
    return 1;
  if ( !a3 )
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         (unsigned int)v4,
         &v9);
  if ( !v6 || v6 == 4 )
  {
    if ( !a3 )
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  }
  else
  {
    if ( !HvpGetCellMap(BugCheckParameter2, (unsigned int)v4) )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v4, 0x264uLL);
    HvpReleaseHCell(BugCheckParameter2);
    v7 = HvpMarkDirty(BugCheckParameter2);
    if ( !a3 )
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
    if ( v7 )
    {
      *(_BYTE *)(BugCheckParameter2 + 125) = 1;
      return 1;
    }
  }
  return 0;
}
