/*
 * XREFs of PsBoostThreadIoEx @ 0x140040D00
 * Callers:
 *     ExDeleteResourceLite @ 0x14000D800 (ExDeleteResourceLite.c)
 *     CcAcquireByteRangeForWrite @ 0x14000DA70 (CcAcquireByteRangeForWrite.c)
 *     FsRtlReleaseEofLock @ 0x14001FAA0 (FsRtlReleaseEofLock.c)
 *     KeAbEntryFree @ 0x140033200 (KeAbEntryFree.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x14003F790 (ExReleaseResourceAndLeavePriorityRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     PsBoostThreadIo @ 0x140040CF0 (PsBoostThreadIo.c)
 *     ExpAllocateBigPool @ 0x140041130 (ExpAllocateBigPool.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140042F70 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ExpBoostIoAfterAcquire @ 0x14007967C (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPriorityBoost @ 0x14007EC80 (ExpApplyPriorityBoost.c)
 *     ExFreeLargePool @ 0x1400892D0 (ExFreeLargePool.c)
 *     CcApplyLowIoPriorityToThread @ 0x1400B0B0C (CcApplyLowIoPriorityToThread.c)
 *     PsLeavePriorityRegion @ 0x1400C7EE0 (PsLeavePriorityRegion.c)
 *     PsEnterPriorityRegion @ 0x1400C8450 (PsEnterPriorityRegion.c)
 *     FsRtlpModifyThreadPriorities @ 0x1400C92DC (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpDoBoost @ 0x1400C93A0 (FsRtlpDoBoost.c)
 *     ExSetResourceOwnerPointerEx @ 0x1400CF5B8 (ExSetResourceOwnerPointerEx.c)
 *     ExReinitializeResourceLite @ 0x1400D9F40 (ExReinitializeResourceLite.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1400E7D3C (CcBoostLowPriorityWorkerThread.c)
 *     FsRtlpWaitForIoAtEof @ 0x140101EB4 (FsRtlpWaitForIoAtEof.c)
 *     KiAbThreadBoostIoPriority @ 0x1401027C4 (KiAbThreadBoostIoPriority.c)
 *     IoBoostThreadIo @ 0x1401BABF8 (IoBoostThreadIo.c)
 *     ExDeferredFreePool @ 0x140238000 (ExDeferredFreePool.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400243AC (RtlCaptureStackBackTrace.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAbThreadInsertList @ 0x1400EC5C8 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010287C (KiAbQueueAutoBoostDpc.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall PsBoostThreadIoEx(__int64 a1, char a2, char a3, void *a4)
{
  signed __int32 v4; // ebx
  KIRQL v5; // r13
  char v7; // si
  PVOID *v10; // r12
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  PVOID *PoolWithTag; // rax
  __int64 **v14; // r14
  __int64 **v15; // r14
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  PVOID **v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // rdx

  v4 = 0;
  v5 = 0;
  v7 = a3;
  v10 = 0LL;
  if ( PspAlwaysTrackIoBoosting )
  {
    v7 = 1;
  }
  else if ( !a3 )
  {
    goto LABEL_3;
  }
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x736F6F42u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    RtlCaptureStackBackTrace(1u, 0xAu, v10 + 2, 0LL);
    v10[12] = KeGetCurrentThread();
    v10[13] = a4;
  }
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1824));
LABEL_3:
  if ( !a2 )
  {
    v4 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1788));
    if ( !v7 )
    {
LABEL_12:
      if ( v4 != 1 )
        return;
      goto LABEL_8;
    }
    if ( !v10 )
      goto LABEL_28;
    v18 = a1 + 1792;
    v19 = *(PVOID ***)(a1 + 1800);
    *v10 = (PVOID)(a1 + 1792);
    v10[1] = v19;
    if ( *v19 != (PVOID *)(a1 + 1792) )
      __fastfail(3u);
    goto LABEL_35;
  }
  if ( *(_DWORD *)(a1 + 1788) )
  {
    v4 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 1788));
    if ( !v7 )
      goto LABEL_6;
    if ( !*(_DWORD *)(a1 + 1788) )
    {
      if ( v10 )
        ExFreePoolWithTag(v10, 0x736F6F42u);
      v14 = (__int64 **)(a1 + 1792);
      while ( *v14 != (__int64 *)v14 )
      {
        v16 = *v14;
        v17 = **v14;
        if ( (__int64 **)(*v14)[1] != v14 || *(__int64 **)(v17 + 8) != v16 )
          __fastfail(3u);
        *v14 = (__int64 *)v17;
        *(_QWORD *)(v17 + 8) = v14;
        ExFreePoolWithTag(v16, 0x736F6F42u);
      }
      v15 = (__int64 **)(a1 + 1808);
      while ( *v15 != (__int64 *)v15 )
      {
        v20 = *v15;
        v21 = **v15;
        if ( (__int64 **)(*v15)[1] != v15 || *(__int64 **)(v21 + 8) != v20 )
          __fastfail(3u);
        *v15 = (__int64 *)v21;
        *(_QWORD *)(v21 + 8) = v15;
        ExFreePoolWithTag(v20, 0x736F6F42u);
      }
      goto LABEL_28;
    }
    if ( v10 )
    {
      v18 = a1 + 1808;
      v19 = *(PVOID ***)(a1 + 1816);
      *v10 = (PVOID)(a1 + 1808);
      v10[1] = v19;
      if ( *v19 != (PVOID *)(a1 + 1808) )
        __fastfail(3u);
LABEL_35:
      *v19 = v10;
      *(_QWORD *)(v18 + 8) = v10;
    }
  }
LABEL_28:
  if ( v7 )
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 1824), v5);
LABEL_6:
  if ( !a2 )
    goto LABEL_12;
  if ( v4 )
    return;
LABEL_8:
  if ( KiAbEnabled && !a2 && *(_BYTE *)(a1 + 793) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &CurrentPrcb->AbPropagateBoostsList, a1 + 1376) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    __writecr8(CurrentIrql);
  }
}
