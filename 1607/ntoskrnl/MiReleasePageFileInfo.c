/*
 * XREFs of MiReleasePageFileInfo @ 0x140019E00
 * Callers:
 *     MiLockPageAndSetDirty @ 0x1400150F8 (MiLockPageAndSetDirty.c)
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MmSetAddressRangeModified @ 0x140016B20 (MmSetAddressRangeModified.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DA80 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpace @ 0x14001E150 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x14001E510 (MiReservePageFileSpaceForPage.c)
 *     MiReleasePageFileSpace @ 0x140021DB8 (MiReleasePageFileSpace.c)
 *     MiLockPageTablePage @ 0x1400300B0 (MiLockPageTablePage.c)
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140036990 (MiMigratePfn.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     MiMoveDirtyBitsToPfns @ 0x1400425F0 (MiMoveDirtyBitsToPfns.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 *     MiDeleteValidSystemPage @ 0x14004B220 (MiDeleteValidSystemPage.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MiDeleteSubsectionPages @ 0x1400617F0 (MiDeleteSubsectionPages.c)
 *     MiDeleteBatch @ 0x140064690 (MiDeleteBatch.c)
 *     MiDeletePteRun @ 0x140064CC0 (MiDeletePteRun.c)
 *     MiPfnShareCountIsZero @ 0x140066260 (MiPfnShareCountIsZero.c)
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 *     MiTrimSystemImagePages @ 0x140082164 (MiTrimSystemImagePages.c)
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     MiDeleteClusterPage @ 0x140091A00 (MiDeleteClusterPage.c)
 *     MiInPageSingleKernelStack @ 0x140094924 (MiInPageSingleKernelStack.c)
 *     MiProcessWsInSwapFault @ 0x140094D30 (MiProcessWsInSwapFault.c)
 *     MiDeleteTransitionPte @ 0x1400B6F88 (MiDeleteTransitionPte.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B7C60 (MiOutSwapWorkingSetCallback.c)
 *     MiWalkVaRange @ 0x1400B9514 (MiWalkVaRange.c)
 *     MiBuildForkPte @ 0x1400BAB30 (MiBuildForkPte.c)
 *     MiRelinkStandbyPage @ 0x1400BC3A4 (MiRelinkStandbyPage.c)
 *     MiDeletePteList @ 0x1400DD960 (MiDeletePteList.c)
 *     MiRevertValidPte @ 0x1400DF690 (MiRevertValidPte.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1400FBE74 (MiSetSystemCodeProtection.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiLockPagedAddress @ 0x14010973C (MiLockPagedAddress.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D8E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiBuildReservationCluster @ 0x1401165AC (MiBuildReservationCluster.c)
 *     MiStoreWriteModifiedPages @ 0x140118ED0 (MiStoreWriteModifiedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x140122A2C (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockStoreLockedPages @ 0x140122F8C (MiUnlockStoreLockedPages.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140149174 (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFC0C (MiMakeOutswappedPageResident.c)
 *     MiSetPagesModified @ 0x1401E5490 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x1401E5DD4 (MmReplaceImportEntry.c)
 *     MmProtectSystemCacheView @ 0x1401E6CF0 (MmProtectSystemCacheView.c)
 *     MiPurgeImageSection @ 0x1401EA6D4 (MiPurgeImageSection.c)
 *     MiFreeModifiedReservations @ 0x1401EE664 (MiFreeModifiedReservations.c)
 *     MiCompleteSecureProcessFault @ 0x1401EF570 (MiCompleteSecureProcessFault.c)
 *     MiHandleForkTransitionPte @ 0x1401F701C (MiHandleForkTransitionPte.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x1401FA2B8 (MiResolveProtoCombine.c)
 *     MiFreeReservationRun @ 0x1404D3868 (MiFreeReservationRun.c)
 *     MiScanPagefileSpace @ 0x14065B208 (MiScanPagefileSpace.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140019FE0 (MiCoalescePageFileBitmapsCache.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiClearPageFileHash @ 0x140123EB0 (MiClearPageFileHash.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 */

void __fastcall MiReleasePageFileInfo(struct _KEVENT *a1, unsigned __int64 a2, char a3)
{
  unsigned __int16 v4; // dx
  __int64 v5; // r15
  __int64 v6; // rbx
  int v7; // ebp
  unsigned int PteTimeStamp; // esi
  __int64 v9; // r8
  __int64 v10; // rdi
  KSPIN_LOCK *v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v5 = (a2 >> 1) & 1;
  v6 = (a2 >> 2) & 1;
  v7 = 0;
  PteTimeStamp = MiGetPteTimeStamp(a2, a2, a1);
  v10 = *(_QWORD *)(v9 + 8LL * (v4 >> 12) + 6304);
  v11 = (KSPIN_LOCK *)(v10 + 232);
  if ( (a3 & 1) != 0 )
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v11, &LockHandle);
  else
    KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
  v12 = *(_QWORD *)(v10 + 112);
  if ( (_DWORD)v5 )
  {
    _bittestandreset(*(signed __int32 **)(v12 + 32), PteTimeStamp);
    ++*(_QWORD *)(v10 + 48);
  }
  if ( (_DWORD)v6 )
  {
    if ( (a3 & 2) == 0 )
      MiClearPageFileHash(v10, PteTimeStamp);
    if ( (*(_BYTE *)(v10 + 204) & 0x40) != 0 )
    {
      v13 = *(_QWORD *)(v10 + 256);
      _bittestandreset(*(signed __int32 **)(*(_QWORD *)(v10 + 112) + 32LL), PteTimeStamp);
      if ( ++*(_DWORD *)(v10 + 200) == 256 || *(_QWORD *)(v13 + 6464) < 0xA0uLL )
        KeSetEvent((PRKEVENT)(v13 + 1096), 0, 0);
      goto LABEL_23;
    }
    _bittestandreset(*(signed __int32 **)(v12 + 16), PteTimeStamp);
    v14 = ++*(_QWORD *)(v10 + 24);
    if ( PteTimeStamp < *(_DWORD *)(v10 + 120) )
      *(_DWORD *)(v10 + 120) = PteTimeStamp;
    ++*(_DWORD *)(v10 + 128);
    if ( v14 == 1 && (*(_BYTE *)(v10 + 206) & 1) != 0 )
      v7 = 1;
  }
  if ( ((_DWORD)v5 || !_bittest64(*(const signed __int64 **)(v12 + 32), PteTimeStamp))
    && ((_DWORD)v6 || !_bittest64(*(const signed __int64 **)(v12 + 16), PteTimeStamp)) )
  {
    MiCoalescePageFileBitmapsCache(v10, (unsigned int)v5, PteTimeStamp);
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(v10 + 256) + 784LL),
      ((*(_DWORD *)(*(_QWORD *)(v10 + 256) + 784LL) & 0xFFFFFC00) + 1024) ^ 0x200);
  }
LABEL_23:
  if ( (a3 & 1) != 0 )
    KxReleaseQueuedSpinLock(&LockHandle);
  else
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v7 == 1 )
    KeSetEvent(a1 + 33, 0, 0);
}
