/*
 * XREFs of MiReleasePageFileInfo @ 0x1400B4C70
 * Callers:
 *     MiProcessWsInSwapFault @ 0x140001300 (MiProcessWsInSwapFault.c)
 *     MiDeleteSegmentPages @ 0x14000BB90 (MiDeleteSegmentPages.c)
 *     MiDeleteLockedTransitionPte @ 0x140010C30 (MiDeleteLockedTransitionPte.c)
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     MiRelinkStandbyPage @ 0x140014990 (MiRelinkStandbyPage.c)
 *     MiTrimSystemImagePages @ 0x14001A618 (MiTrimSystemImagePages.c)
 *     MiWalkVaRange @ 0x14001C524 (MiWalkVaRange.c)
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MiOutSwapWorkingSetCallback @ 0x14001F030 (MiOutSwapWorkingSetCallback.c)
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 *     MiReservePageFileSpace @ 0x1400367C0 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x140036B60 (MiReservePageFileSpaceForPage.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiDeleteBatch @ 0x14003D3A0 (MiDeleteBatch.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiDeletePteRun @ 0x14004FE20 (MiDeletePteRun.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiRevertValidPte @ 0x14005D150 (MiRevertValidPte.c)
 *     MiMoveDirtyBitsToPfns @ 0x14005E3A0 (MiMoveDirtyBitsToPfns.c)
 *     MiDeletePteList @ 0x140060900 (MiDeletePteList.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     MiPfnShareCountIsZero @ 0x14006A920 (MiPfnShareCountIsZero.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MiLockPagedAddress @ 0x14009A36C (MiLockPagedAddress.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400A0890 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiLockPageTablePage @ 0x1400A81C0 (MiLockPageTablePage.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MmUnmapViewInSystemCache @ 0x1400ADB30 (MmUnmapViewInSystemCache.c)
 *     MmPropagateDirtyBitsToPfn @ 0x1400B22A0 (MmPropagateDirtyBitsToPfn.c)
 *     MiRemoveMappedPtes @ 0x1400B6D00 (MiRemoveMappedPtes.c)
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 *     MiLockPageAndSetDirty @ 0x1400B820C (MiLockPageAndSetDirty.c)
 *     MiSetSystemCodeProtection @ 0x1400B8D54 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModified @ 0x1400B9910 (MmSetAddressRangeModified.c)
 *     MiInPageSingleKernelStack @ 0x1400DE754 (MiInPageSingleKernelStack.c)
 *     MiReleasePageFileSpace @ 0x1400E5464 (MiReleasePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x140109354 (MiBuildReservationCluster.c)
 *     MiStoreWriteModifiedPages @ 0x14010A610 (MiStoreWriteModifiedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x140113998 (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockStoreLockedPages @ 0x140113C98 (MiUnlockStoreLockedPages.c)
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14012AE34 (MiResolveProtoCombine.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x14013FBF4 (MmDbgMarkPfnModifiedWorker.c)
 *     MmReplaceImportEntry @ 0x1401CF09C (MmReplaceImportEntry.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MiSetPagesModified @ 0x1401D4A14 (MiSetPagesModified.c)
 *     MmProtectSystemCacheView @ 0x1401D57E4 (MmProtectSystemCacheView.c)
 *     MiPurgeImageSection @ 0x1401D8B68 (MiPurgeImageSection.c)
 *     MiFreeModifiedReservations @ 0x1401DCB64 (MiFreeModifiedReservations.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1401DD1DC (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCompleteSecureProcessFault @ 0x1401DECFC (MiCompleteSecureProcessFault.c)
 *     MiHandleForkTransitionPte @ 0x1401E4E64 (MiHandleForkTransitionPte.c)
 *     MiFreeReservationRun @ 0x1404D05A4 (MiFreeReservationRun.c)
 *     MiScanPagefileSpace @ 0x140625888 (MiScanPagefileSpace.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUpdateReserveClusterInfo @ 0x1400B84AC (MiUpdateReserveClusterInfo.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1400B8500 (MiCoalescePageFileBitmapsCache.c)
 *     MiClearPageFileHash @ 0x14011454C (MiClearPageFileHash.c)
 */

void __fastcall MiReleasePageFileInfo(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v4; // r14d
  int v5; // ebx
  __int64 v6; // rdi
  int v7; // ebp
  KSPIN_LOCK *v9; // rcx
  int v10; // r13d
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v3 = HIDWORD(a2);
  v4 = (a2 >> 12) & 1;
  v5 = (a2 >> 13) & 1;
  v6 = *(_QWORD *)(a1 + 8 * ((a2 >> 1) & 0xF) + 5728);
  v7 = 0;
  v9 = (KSPIN_LOCK *)(v6 + 232);
  v10 = a3 & 1;
  if ( (a3 & 1) != 0 )
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v9, &LockHandle);
  else
    KeAcquireInStackQueuedSpinLock(v9, &LockHandle);
  v11 = *(_QWORD *)(v6 + 112);
  if ( v4 )
  {
    _bittestandreset(*(signed __int32 **)(v11 + 32), v3);
    ++*(_QWORD *)(v6 + 48);
  }
  if ( !v5 )
    goto LABEL_6;
  if ( (a3 & 2) == 0 )
    MiClearPageFileHash(v6, (unsigned int)v3);
  if ( (*(_BYTE *)(v6 + 204) & 0x40) == 0 )
  {
    _bittestandreset(*(signed __int32 **)(v11 + 16), v3);
    v12 = ++*(_QWORD *)(v6 + 24);
    if ( (unsigned int)v3 < *(_DWORD *)(v6 + 120) )
      *(_DWORD *)(v6 + 120) = v3;
    ++*(_DWORD *)(v6 + 128);
    if ( v12 == 1 && (*(_BYTE *)(v6 + 206) & 1) != 0 )
      v7 = 1;
LABEL_6:
    if ( (v4 || !_bittest64(*(const signed __int64 **)(v11 + 32), v3))
      && (v5 || !_bittest64(*(const signed __int64 **)(v11 + 16), v3)) )
    {
      MiCoalescePageFileBitmapsCache(v6, v4, (unsigned int)v3);
      MiUpdateReserveClusterInfo(*(_QWORD *)(v6 + 256), 0LL, 0LL);
    }
    goto LABEL_10;
  }
  v13 = *(_QWORD *)(v6 + 256);
  _bittestandreset(*(signed __int32 **)(*(_QWORD *)(v6 + 112) + 32LL), v3);
  if ( ++*(_DWORD *)(v6 + 200) == 256 || *(_QWORD *)(v13 + 5888) < 0xA0uLL )
    KeSetEvent((PRKEVENT)(v13 + 1112), 0, 0);
LABEL_10:
  if ( v10 )
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  else
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v7 == 1 )
    KeSetEvent((PRKEVENT)(a1 + 800), 0, 0);
}
