/*
 * XREFs of MiReleasePageFileInfo @ 0x1400DD8D8
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140004220 (MiHandleForkTransitionPte.c)
 *     MiLockPagedAddress @ 0x140004FA4 (MiLockPagedAddress.c)
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 *     MiRelinkStandbyPage @ 0x140012270 (MiRelinkStandbyPage.c)
 *     MiSetSystemCodeProtection @ 0x140023140 (MiSetSystemCodeProtection.c)
 *     MiLockPageTablePage @ 0x140035180 (MiLockPageTablePage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140036ED0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MiLockPageAndSetDirty @ 0x14003C7B8 (MiLockPageAndSetDirty.c)
 *     MiOutSwapWorkingSetCallback @ 0x14003CFD0 (MiOutSwapWorkingSetCallback.c)
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MmSetAddressRangeModified @ 0x14007C280 (MmSetAddressRangeModified.c)
 *     NtResetWriteWatch @ 0x14007CF90 (NtResetWriteWatch.c)
 *     MiWalkVaRange @ 0x14007F5DC (MiWalkVaRange.c)
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MiDeleteSegmentPages @ 0x1400839A0 (MiDeleteSegmentPages.c)
 *     MiDeleteLockedTransitionPte @ 0x140084B60 (MiDeleteLockedTransitionPte.c)
 *     MmPropagateDirtyBitsToPfn @ 0x140086C80 (MmPropagateDirtyBitsToPfn.c)
 *     MiRevertValidPte @ 0x140091390 (MiRevertValidPte.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiDeletePteList @ 0x140093740 (MiDeletePteList.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     MiDeleteBatch @ 0x1400B2010 (MiDeleteBatch.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiDeletePteRun @ 0x1400C3A20 (MiDeletePteRun.c)
 *     MiTrimSystemImagePages @ 0x1400D41D4 (MiTrimSystemImagePages.c)
 *     MiReservePageFileSpace @ 0x1400DCF1C (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x1400DD2E0 (MiReservePageFileSpaceForPage.c)
 *     MiProcessWsInSwapFault @ 0x1400DDE3C (MiProcessWsInSwapFault.c)
 *     MiInPageSingleKernelStack @ 0x1400DE01C (MiInPageSingleKernelStack.c)
 *     MiReleasePageFileSpace @ 0x1400E31B4 (MiReleasePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x14013ACF4 (MiBuildReservationCluster.c)
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x140145DC8 (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockStoreLockedPages @ 0x14014744C (MiUnlockStoreLockedPages.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x14016D590 (MmDbgMarkPfnModifiedWorker.c)
 *     MmReplaceImportEntry @ 0x14020E664 (MmReplaceImportEntry.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MiSetPagesModified @ 0x1402165B0 (MiSetPagesModified.c)
 *     MmProtectSystemCacheView @ 0x140217958 (MmProtectSystemCacheView.c)
 *     MiPurgeImageSection @ 0x14021C698 (MiPurgeImageSection.c)
 *     MiReturnPartitionPagesToParent @ 0x14021D9D8 (MiReturnPartitionPagesToParent.c)
 *     MiFreeModifiedReservations @ 0x1402218E8 (MiFreeModifiedReservations.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140222374 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCompleteSecureProcessFault @ 0x140223B8C (MiCompleteSecureProcessFault.c)
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x14022B144 (MiResolveProtoCombine.c)
 *     MiFreeReservationRun @ 0x1404FB09C (MiFreeReservationRun.c)
 *     MiScanPagefileSpace @ 0x1406A5284 (MiScanPagefileSpace.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiUpdateReserveClusterInfo @ 0x1400DDB10 (MiUpdateReserveClusterInfo.c)
 *     MiClearPageFileHash @ 0x14014ACC8 (MiClearPageFileHash.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 */

void __fastcall MiReleasePageFileInfo(struct _KEVENT *a1, unsigned __int64 a2, char a3)
{
  unsigned __int16 v5; // dx
  unsigned int PteTimeStamp; // esi
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rdi
  int v11; // r15d
  KSPIN_LOCK *v12; // rcx
  __int64 v13; // r14
  struct _KEVENT *v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // eax
  __int64 Next; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  void *retaddr; // [rsp+78h] [rbp+38h]

  PteTimeStamp = MiGetPteTimeStamp(a2);
  v7 = (a2 >> 1) & 1;
  v8 = (a2 >> 2) & 1;
  v10 = *(_QWORD *)(v9 + 8LL * (v5 >> 12) + 5344);
  v11 = 0;
  v12 = (KSPIN_LOCK *)(v10 + 192);
  if ( (a3 & 1) != 0 )
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v12, &LockHandle);
  else
    KeAcquireInStackQueuedSpinLock(v12, &LockHandle);
  v13 = *(_QWORD *)(v10 + 128);
  if ( (_DWORD)v7 )
  {
    _bittestandreset(*(signed __int32 **)(v13 + 32), PteTimeStamp);
    ++*(_QWORD *)(v10 + 48);
    if ( PteTimeStamp < *(_DWORD *)(v10 + 140) )
      *(_DWORD *)(v10 + 140) = PteTimeStamp;
  }
  if ( (_DWORD)v8 )
  {
    if ( (a3 & 2) == 0 )
      MiClearPageFileHash(v10, PteTimeStamp);
    if ( (*(_BYTE *)(v10 + 164) & 0x40) != 0 )
    {
      v14 = *(struct _KEVENT **)(v10 + 216);
      _bittestandreset(*(signed __int32 **)(*(_QWORD *)(v10 + 128) + 32LL), PteTimeStamp);
      if ( ++*(_DWORD *)(v10 + 160) == 256 || v14[229].Header.WaitListHead.Flink < (struct _LIST_ENTRY *)0x80 )
        KeSetEvent(v14 + 45, 0, 0);
      goto LABEL_29;
    }
    _bittestandreset(*(signed __int32 **)(v13 + 16), PteTimeStamp);
    v15 = ++*(_QWORD *)(v10 + 24);
    if ( PteTimeStamp < *(_DWORD *)(v10 + 136) )
      *(_DWORD *)(v10 + 136) = PteTimeStamp;
    if ( v15 == 1 && (*(_BYTE *)(v10 + 166) & 1) != 0 )
      v11 = 1;
  }
  if ( !(_DWORD)v7 && _bittest64(*(const signed __int64 **)(v13 + 32), PteTimeStamp)
    || !(_DWORD)v8 && _bittest64(*(const signed __int64 **)(v13 + 16), PteTimeStamp) )
  {
    v17 = 0;
  }
  else
  {
    v16 = *(_QWORD *)(v10 + 48);
    v17 = 1;
    if ( *(_QWORD *)(v10 + 24) < v16 )
      v16 = *(_QWORD *)(v10 + 24);
    *(_QWORD *)(v10 + 56) = v16;
  }
  ++*(_DWORD *)(v10 + 148);
  if ( v17 )
    MiUpdateReserveClusterInfo(*(_QWORD *)(v10 + 216), 0LL, 0LL);
LABEL_29:
  if ( (a3 & 1) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_37;
    }
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_37;
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
LABEL_37:
  if ( v11 == 1 )
    KeSetEvent(a1 + 33, 0, 0);
}
