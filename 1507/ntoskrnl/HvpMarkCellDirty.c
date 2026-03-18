/*
 * XREFs of HvpMarkCellDirty @ 0x14049F7A0
 * Callers:
 *     CmpSplitLeaf @ 0x140409E3C (CmpSplitLeaf.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140427A00 (CmpUpdateKeyNodeAccessBits.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmpSetValueKeyExisting @ 0x14042B410 (CmpSetValueKeyExisting.c)
 *     CmpMarkValueDataDirty @ 0x14042B6CC (CmpMarkValueDataDirty.c)
 *     CmpMarkKeyDirty @ 0x14042C620 (CmpMarkKeyDirty.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x140445994 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404480CC (CmpTransMgrFreeVolatileData.c)
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     HvpFindFreeCellInBin @ 0x14049FB90 (HvpFindFreeCellInBin.c)
 *     HvpIsFreeNeighbor @ 0x14049FEB0 (HvpIsFreeNeighbor.c)
 *     CmpSetValueKeyNew @ 0x1404A10D0 (CmpSetValueKeyNew.c)
 *     CmpCreateLinkNode @ 0x1404B0468 (CmpCreateLinkNode.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmpCheckKey @ 0x1404C2C40 (CmpCheckKey.c)
 *     CmpCheckValueList @ 0x1404C48A0 (CmpCheckValueList.c)
 *     CmEnumerateKey @ 0x1404C66B0 (CmEnumerateKey.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmpCheckLeaf @ 0x1404CD0D0 (CmpCheckLeaf.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1404F0898 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpTransMgrCommitUoW @ 0x1404F16A0 (CmpTransMgrCommitUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x1404F19C4 (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitAddKeyUoW @ 0x1404F2A54 (CmpCommitAddKeyUoW.c)
 *     CmpAddSubKeyEx @ 0x1405335D0 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1405339A8 (CmpAddToLeaf.c)
 *     CmpSelectLeaf @ 0x140533CC8 (CmpSelectLeaf.c)
 *     CmpMarkIndexDirty @ 0x1405451A8 (CmpMarkIndexDirty.c)
 *     CmpInsertSecurityCellList @ 0x1405554C0 (CmpInsertSecurityCellList.c)
 *     CmpSaveBootControlSet @ 0x140584D98 (CmpSaveBootControlSet.c)
 *     CmpCopySyncTree2 @ 0x1405850E0 (CmpCopySyncTree2.c)
 *     CmpSyncKeyValues @ 0x140585640 (CmpSyncKeyValues.c)
 *     CmpMarkKeyValuesDirty @ 0x140585CFC (CmpMarkKeyValuesDirty.c)
 *     CmpMarkKeyParentDirty @ 0x140585EAC (CmpMarkKeyParentDirty.c)
 *     CmpClearKeyAccessBits @ 0x14058ECA8 (CmpClearKeyAccessBits.c)
 *     CmpMarkCurrentValueDirty @ 0x1405989E8 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x1405A3950 (CmpMarkCurrentProfileDirty.c)
 *     CmMoveKey @ 0x140654448 (CmMoveKey.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140655BB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140656248 (CmSetLastWriteTimeKey.c)
 *     CmpCopySaclToVirtualKey @ 0x140659314 (CmpCopySaclToVirtualKey.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140659810 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14065B23C (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpUpdateParentForEachSon @ 0x14065B4C4 (CmpUpdateParentForEachSon.c)
 *     HvRefreshHive @ 0x14065DE68 (HvRefreshHive.c)
 *     HvMarkCellDirty @ 0x140660960 (HvMarkCellDirty.c)
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 *     CmpCommitRecreateKeyUoW @ 0x140664354 (CmpCommitRecreateKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x140664408 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     HvpReleaseHCell @ 0x1400CA7E0 (HvpReleaseHCell.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     HvpMarkDirty @ 0x14049F900 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x14049FB30 (HvpGetCellMap.c)
 */

char __fastcall HvpMarkCellDirty(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3, __int64 a4)
{
  int v4; // eax
  ULONG_PTR v5; // rdi
  struct _KTHREAD *CurrentThread; // r12
  ULONG_PTR v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  char v13; // bp
  ULONG_PTR v14; // rdi
  signed __int32 v15; // eax
  ULONG_PTR v17; // rbx
  signed __int32 v18; // eax
  int v19; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(BugCheckParameter2 + 144);
  v5 = (unsigned int)BugCheckParameter3;
  v19 = -1;
  if ( (v4 & 1) != 0 || (BugCheckParameter3 & 0x80000000) != 0LL )
    return 1;
  if ( !a3 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = *(_QWORD *)(BugCheckParameter2 + 2840);
    v10 = KeAbPreAcquire(v9, 0LL, 0LL, a4);
    v11 = v10;
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v9, 0) )
      ExpAcquireFastMutexContended(v9, v10);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    *(_QWORD *)(v9 + 8) = CurrentThread;
  }
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          (unsigned int)v5,
          &v19);
  if ( !v12 || v12 == 4 )
  {
    if ( !a3 )
    {
      v17 = *(_QWORD *)(BugCheckParameter2 + 2840);
      *(_QWORD *)(v17 + 8) = 0LL;
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)v17, 1, 0);
      if ( v18 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)v17, v18);
      KeAbPostRelease(v17);
    }
  }
  else
  {
    if ( !HvpGetCellMap(BugCheckParameter2, (unsigned int)v5) )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v5, 0x264uLL);
    HvpReleaseHCell(BugCheckParameter2);
    v13 = HvpMarkDirty(BugCheckParameter2);
    if ( !a3 )
    {
      v14 = *(_QWORD *)(BugCheckParameter2 + 2840);
      *(_QWORD *)(v14 + 8) = 0LL;
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)v14, 1, 0);
      if ( v15 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)v14, v15);
      KeAbPostRelease(v14);
    }
    if ( v13 )
    {
      *(_BYTE *)(BugCheckParameter2 + 125) = 1;
      return 1;
    }
  }
  return 0;
}
