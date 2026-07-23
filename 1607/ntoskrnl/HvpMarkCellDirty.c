/*
 * XREFs of HvpMarkCellDirty @ 0x1404F6AE0
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1403F7AE8 (CmpValidateHiveSecurityDescriptors.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     HvMarkCellDirty @ 0x1403FC340 (HvMarkCellDirty.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FC4D4 (CmpTransMgrFreeVolatileData.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpSetValueKeyExisting @ 0x1403FEE24 (CmpSetValueKeyExisting.c)
 *     CmpMarkKeyDirty @ 0x1403FF10C (CmpMarkKeyDirty.c)
 *     CmpMarkValueDataDirty @ 0x1403FF334 (CmpMarkValueDataDirty.c)
 *     HvpIsFreeNeighbor @ 0x14040078C (HvpIsFreeNeighbor.c)
 *     CmpSetValueKeyNew @ 0x1404009D0 (CmpSetValueKeyNew.c)
 *     HvpFindFreeCellInBin @ 0x140401050 (HvpFindFreeCellInBin.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140401990 (CmpUpdateKeyNodeAccessBits.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmEnumerateValueKey @ 0x140436E40 (CmEnumerateValueKey.c)
 *     CmEnumerateKey @ 0x140437F90 (CmEnumerateKey.c)
 *     CmpCheckValueList @ 0x14043B810 (CmpCheckValueList.c)
 *     CmpCheckLeaf @ 0x14043EC90 (CmpCheckLeaf.c)
 *     CmpVEExecuteOpenLogic @ 0x14043F180 (CmpVEExecuteOpenLogic.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpAddSubKeyEx @ 0x14049AE00 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x14049B1D0 (CmpAddToLeaf.c)
 *     CmpMarkIndexDirty @ 0x1404B9C38 (CmpMarkIndexDirty.c)
 *     CmpInsertSecurityCellList @ 0x1404C84F8 (CmpInsertSecurityCellList.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14053B5C0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14053BA28 (CmpLightWeightCreateSetValueData.c)
 *     CmpMarkCurrentValueDirty @ 0x14054E314 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x14055CD0C (CmpMarkCurrentProfileDirty.c)
 *     CmpSaveBootControlSet @ 0x1405F9148 (CmpSaveBootControlSet.c)
 *     CmMoveKey @ 0x1405FD05C (CmMoveKey.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405FE410 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE8A8 (CmSetLastWriteTimeKey.c)
 *     CmpSetValueKeyTombstone @ 0x1405FF3F4 (CmpSetValueKeyTombstone.c)
 *     CmpCopySaclToVirtualKey @ 0x140602258 (CmpCopySaclToVirtualKey.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14060277C (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpClearKeyAccessBits @ 0x140603828 (CmpClearKeyAccessBits.c)
 *     HvRefreshHive @ 0x140606018 (HvRefreshHive.c)
 *     CmpCopySyncTree2 @ 0x1406082F4 (CmpCopySyncTree2.c)
 *     CmpMarkKeyParentDirty @ 0x140608E04 (CmpMarkKeyParentDirty.c)
 *     CmpMarkKeyValuesDirty @ 0x140608E88 (CmpMarkKeyValuesDirty.c)
 *     CmpSyncKeyValues @ 0x14060990C (CmpSyncKeyValues.c)
 *     CmpMarkAllChildrenDirty @ 0x14060A914 (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x14060A9A8 (CmpMarkEntireIndexDirty.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14060AB08 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSelectLeaf @ 0x14060ADA0 (CmpSelectLeaf.c)
 *     CmpSplitLeaf @ 0x14060B068 (CmpSplitLeaf.c)
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14060ED60 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14060EF98 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14060F140 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareRecreateKeyUoW @ 0x14060F30C (CmpLightWeightPrepareRecreateKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14060F334 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x14060F660 (CmpLightWeightPrepareSetKeyUserFlags.c)
 * Callees:
 *     HvpReleaseHCell @ 0x14002CEB0 (HvpReleaseHCell.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     HvpMarkDirty @ 0x1404F6BD0 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 */

char __fastcall HvpMarkCellDirty(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  ULONG_PTR v4; // rdi
  __int64 v6; // rax
  char v7; // di
  int v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+54h] [rbp+Ch]

  v9 = -1;
  v10 = 0;
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
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v4, 0x271uLL);
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
