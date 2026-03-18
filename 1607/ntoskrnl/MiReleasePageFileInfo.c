/*
 * XREFs of MiReleasePageFileInfo @ 0x14001A280
 * Callers:
 *     MiLockPageAndSetDirty @ 0x140015578 (MiLockPageAndSetDirty.c)
 *     MiLockCode @ 0x1400155F0 (MiLockCode.c)
 *     MmSetAddressRangeModified @ 0x140016FA0 (MmSetAddressRangeModified.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DF00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpace @ 0x14001E5D0 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x14001E990 (MiReservePageFileSpaceForPage.c)
 *     MiReleasePageFileSpace @ 0x140022238 (MiReleasePageFileSpace.c)
 *     MiLockPageTablePage @ 0x140030530 (MiLockPageTablePage.c)
 *     MiResolveTransitionFault @ 0x140035F90 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140036E10 (MiMigratePfn.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     MiMoveDirtyBitsToPfns @ 0x140042A70 (MiMoveDirtyBitsToPfns.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MmUnmapViewInSystemCache @ 0x1400492C0 (MmUnmapViewInSystemCache.c)
 *     MiDeleteValidSystemPage @ 0x14004B6A0 (MiDeleteValidSystemPage.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x14004D6A0 (MiFinishHardFault.c)
 *     MmUnlockPages @ 0x140051A80 (MmUnlockPages.c)
 *     MiDeleteSubsectionPages @ 0x140061C70 (MiDeleteSubsectionPages.c)
 *     MiDeleteBatch @ 0x140064B10 (MiDeleteBatch.c)
 *     MiDeletePteRun @ 0x140065140 (MiDeletePteRun.c)
 *     MiPfnShareCountIsZero @ 0x1400666E0 (MiPfnShareCountIsZero.c)
 *     MmPurgeSection @ 0x140072AB0 (MmPurgeSection.c)
 *     MiTrimSystemImagePages @ 0x140084004 (MiTrimSystemImagePages.c)
 *     MiWriteComplete @ 0x14008E9E0 (MiWriteComplete.c)
 *     MiDeleteClusterPage @ 0x1400922A0 (MiDeleteClusterPage.c)
 *     MiInPageSingleKernelStack @ 0x140095124 (MiInPageSingleKernelStack.c)
 *     MiProcessWsInSwapFault @ 0x140095530 (MiProcessWsInSwapFault.c)
 *     MiDeleteTransitionPte @ 0x1400B90F8 (MiDeleteTransitionPte.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B9DD0 (MiOutSwapWorkingSetCallback.c)
 *     MiWalkVaRange @ 0x1400BB684 (MiWalkVaRange.c)
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiRelinkStandbyPage @ 0x1400BE514 (MiRelinkStandbyPage.c)
 *     MiDeletePteList @ 0x1400DFAC0 (MiDeletePteList.c)
 *     MiRevertValidPte @ 0x1400E17F0 (MiRevertValidPte.c)
 *     MiFreeWsleList @ 0x1400E3AD0 (MiFreeWsleList.c)
 *     MiProtectPool @ 0x1400EA400 (MiProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1400FE0F4 (MiSetSystemCodeProtection.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiLockPagedAddress @ 0x14010B9BC (MiLockPagedAddress.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D37C (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiBuildReservationCluster @ 0x14011603C (MiBuildReservationCluster.c)
 *     MiStoreWriteModifiedPages @ 0x140118960 (MiStoreWriteModifiedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x1401224BC (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockStoreLockedPages @ 0x140122A1C (MiUnlockStoreLockedPages.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140148C04 (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFDE0 (MiMakeOutswappedPageResident.c)
 *     MiSetPagesModified @ 0x1401E5664 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x1401E5FA8 (MmReplaceImportEntry.c)
 *     MmProtectSystemCacheView @ 0x1401E6EC4 (MmProtectSystemCacheView.c)
 *     MiPurgeImageSection @ 0x1401EA8A8 (MiPurgeImageSection.c)
 *     MiFreeModifiedReservations @ 0x1401EE838 (MiFreeModifiedReservations.c)
 *     MiCompleteSecureProcessFault @ 0x1401EF744 (MiCompleteSecureProcessFault.c)
 *     MiHandleForkTransitionPte @ 0x1401F71F0 (MiHandleForkTransitionPte.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x1401FA48C (MiResolveProtoCombine.c)
 *     MiFreeReservationRun @ 0x1404F1774 (MiFreeReservationRun.c)
 *     MiScanPagefileSpace @ 0x14065B124 (MiScanPagefileSpace.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     MiCoalescePageFileBitmapsCache @ 0x14001A460 (MiCoalescePageFileBitmapsCache.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001BCF0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x140069570 (KxReleaseQueuedSpinLock.c)
 *     MiClearPageFileHash @ 0x140123940 (MiClearPageFileHash.c)
 *     MiGetPteTimeStamp @ 0x1401F269C (MiGetPteTimeStamp.c)
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
