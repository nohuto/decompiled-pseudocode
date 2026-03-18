/*
 * XREFs of HvpMarkCellDirty @ 0x1405136F0
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1403F8C28 (CmpValidateHiveSecurityDescriptors.c)
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     HvMarkCellDirty @ 0x1403FD480 (HvMarkCellDirty.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FD614 (CmpTransMgrFreeVolatileData.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 *     CmpSetValueKeyExisting @ 0x1403FFF64 (CmpSetValueKeyExisting.c)
 *     CmpMarkKeyDirty @ 0x14040024C (CmpMarkKeyDirty.c)
 *     CmpMarkValueDataDirty @ 0x140400474 (CmpMarkValueDataDirty.c)
 *     HvpIsFreeNeighbor @ 0x1404018CC (HvpIsFreeNeighbor.c)
 *     CmpSetValueKeyNew @ 0x140401B10 (CmpSetValueKeyNew.c)
 *     HvpFindFreeCellInBin @ 0x140402190 (HvpFindFreeCellInBin.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140402AD0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     CmEnumerateValueKey @ 0x140437F70 (CmEnumerateValueKey.c)
 *     CmEnumerateKey @ 0x1404390C0 (CmEnumerateKey.c)
 *     CmpCheckValueList @ 0x14043C940 (CmpCheckValueList.c)
 *     CmpCheckLeaf @ 0x14043FDC0 (CmpCheckLeaf.c)
 *     CmpVEExecuteOpenLogic @ 0x1404402B0 (CmpVEExecuteOpenLogic.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpAddSubKeyEx @ 0x1404B0A20 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1404B0DF0 (CmpAddToLeaf.c)
 *     CmpMarkIndexDirty @ 0x1404D6634 (CmpMarkIndexDirty.c)
 *     CmpInsertSecurityCellList @ 0x1404E5AC4 (CmpInsertSecurityCellList.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14053B080 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14053B4E8 (CmpLightWeightCreateSetValueData.c)
 *     CmpMarkCurrentValueDirty @ 0x14054DF74 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x14055C7CC (CmpMarkCurrentProfileDirty.c)
 *     CmpSaveBootControlSet @ 0x1405F9094 (CmpSaveBootControlSet.c)
 *     CmMoveKey @ 0x1405FCFA8 (CmMoveKey.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405FE35C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE7F4 (CmSetLastWriteTimeKey.c)
 *     CmpSetValueKeyTombstone @ 0x1405FF340 (CmpSetValueKeyTombstone.c)
 *     CmpCopySaclToVirtualKey @ 0x1406021A4 (CmpCopySaclToVirtualKey.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1406026C8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpClearKeyAccessBits @ 0x140603774 (CmpClearKeyAccessBits.c)
 *     HvRefreshHive @ 0x140605F64 (HvRefreshHive.c)
 *     CmpCopySyncTree2 @ 0x140608240 (CmpCopySyncTree2.c)
 *     CmpMarkKeyParentDirty @ 0x140608D50 (CmpMarkKeyParentDirty.c)
 *     CmpMarkKeyValuesDirty @ 0x140608DD4 (CmpMarkKeyValuesDirty.c)
 *     CmpSyncKeyValues @ 0x140609858 (CmpSyncKeyValues.c)
 *     CmpMarkAllChildrenDirty @ 0x14060A860 (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x14060A8F4 (CmpMarkEntireIndexDirty.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14060AA54 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSelectLeaf @ 0x14060ACEC (CmpSelectLeaf.c)
 *     CmpSplitLeaf @ 0x14060AFB4 (CmpSplitLeaf.c)
 *     CmRestoreKey @ 0x14060C24C (CmRestoreKey.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14060ECAC (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14060EEE4 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14060F08C (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareRecreateKeyUoW @ 0x14060F258 (CmpLightWeightPrepareRecreateKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14060F280 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x14060F5AC (CmpLightWeightPrepareSetKeyUserFlags.c)
 * Callees:
 *     HvpReleaseHCell @ 0x14002D330 (HvpReleaseHCell.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400F05A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400F0700 (ExReleaseFastMutexUnsafe.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     HvpMarkDirty @ 0x1405137E0 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x140513BC0 (HvpGetCellMap.c)
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
