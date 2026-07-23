/*
 * XREFs of PsBoostThreadIoEx @ 0x14002CFC0
 * Callers:
 *     ExFreeLargePool @ 0x140010760 (ExFreeLargePool.c)
 *     ExpAllocateBigPool @ 0x140011650 (ExpAllocateBigPool.c)
 *     PsBoostThreadIo @ 0x14002CFB0 (PsBoostThreadIo.c)
 *     ExpApplyPriorityBoost @ 0x14005CE50 (ExpApplyPriorityBoost.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14006B0D0 (CcBoostLowPriorityWorkerThread.c)
 *     ExpBoostIoAfterAcquire @ 0x14006B1F0 (ExpBoostIoAfterAcquire.c)
 *     KiAbThreadBoostIoPriority @ 0x14006C124 (KiAbThreadBoostIoPriority.c)
 *     CcApplyLowIoPriorityToThread @ 0x140071360 (CcApplyLowIoPriorityToThread.c)
 *     FsRtlpModifyThreadPriorities @ 0x14007B748 (FsRtlpModifyThreadPriorities.c)
 *     PsLeavePriorityRegion @ 0x14008B230 (PsLeavePriorityRegion.c)
 *     PsEnterPriorityRegion @ 0x14008BCE0 (PsEnterPriorityRegion.c)
 *     FsRtlpDoBoost @ 0x140091014 (FsRtlpDoBoost.c)
 *     ExSetResourceOwnerPointerEx @ 0x1400966A0 (ExSetResourceOwnerPointerEx.c)
 *     KiAbThreadUnboostIoPriority @ 0x1400B0D88 (KiAbThreadUnboostIoPriority.c)
 *     FsRtlReleaseEofLock @ 0x1400C4CE0 (FsRtlReleaseEofLock.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400C508C (FsRtlpWaitForIoAtEof.c)
 *     CcAcquireByteRangeForWrite @ 0x1400C9C60 (CcAcquireByteRangeForWrite.c)
 *     ExReinitializeResourceLite @ 0x14010C490 (ExReinitializeResourceLite.c)
 *     ExDeleteResourceLite @ 0x14010C7A0 (ExDeleteResourceLite.c)
 *     IoBoostThreadIo @ 0x14011267C (IoBoostThreadIo.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14022D798 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x14022D7EC (ExReleaseResourceAndLeavePriorityRegion.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExDeferredFreePool @ 0x1402557B0 (ExDeferredFreePool.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x14006C1E8 (KiAbQueueAutoBoostDpc.c)
 *     RtlCaptureStackBackTrace @ 0x140082890 (RtlCaptureStackBackTrace.c)
 *     KiAbThreadInsertList @ 0x1400AB258 (KiAbThreadInsertList.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __fastcall PsBoostThreadIoEx(__int64 a1, char a2, char a3, void *a4)
{
  signed __int32 v4; // ebx
  KIRQL v5; // r13
  char v7; // bp
  PVOID *v10; // r12
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbx
  PVOID *PoolWithTag; // rax
  __int64 **v14; // r14
  __int64 **v15; // r14
  __int64 *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
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
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1832));
LABEL_3:
  if ( !a2 )
  {
    v4 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1784));
    if ( !v7 )
    {
LABEL_10:
      if ( v4 != 1 )
        return;
      goto LABEL_11;
    }
    if ( !v10 )
      goto LABEL_26;
    v18 = (_QWORD *)(a1 + 1800);
    v19 = *(PVOID ***)(a1 + 1808);
    if ( *v19 != (PVOID *)(a1 + 1800) )
      __fastfail(3u);
    goto LABEL_33;
  }
  if ( *(_DWORD *)(a1 + 1784) )
  {
    v4 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 1784));
    if ( !v7 )
      goto LABEL_6;
    if ( !*(_DWORD *)(a1 + 1784) )
    {
      if ( v10 )
        ExFreePoolWithTag(v10, 0x736F6F42u);
      v14 = (__int64 **)(a1 + 1800);
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
      v15 = (__int64 **)(a1 + 1816);
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
      goto LABEL_26;
    }
    if ( v10 )
    {
      v18 = (_QWORD *)(a1 + 1816);
      v19 = *(PVOID ***)(a1 + 1824);
      if ( *v19 != (PVOID *)(a1 + 1816) )
        __fastfail(3u);
LABEL_33:
      *v10 = v18;
      v10[1] = v19;
      *v19 = v10;
      v18[1] = v10;
    }
  }
LABEL_26:
  if ( v7 )
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 1832), v5);
LABEL_6:
  if ( !a2 )
    goto LABEL_10;
  if ( v4 )
    return;
LABEL_11:
  if ( !a2 && *(_BYTE *)(a1 + 793) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &CurrentPrcb->AbPropagateBoostsList, a1 + 1376) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    __writecr8(CurrentIrql);
  }
}
