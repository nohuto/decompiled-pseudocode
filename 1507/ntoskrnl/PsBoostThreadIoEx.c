/*
 * XREFs of PsBoostThreadIoEx @ 0x1400CA890
 * Callers:
 *     MiSectionCreated @ 0x14002E3D0 (MiSectionCreated.c)
 *     CcApplyLowIoPriorityToThread @ 0x140041E40 (CcApplyLowIoPriorityToThread.c)
 *     ExpAllocateBigPool @ 0x140046030 (ExpAllocateBigPool.c)
 *     ExFreeLargePool @ 0x140046E10 (ExFreeLargePool.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x14004EAF0 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     FsRtlpModifyThreadPriorities @ 0x14007262C (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpDoBoost @ 0x140074438 (FsRtlpDoBoost.c)
 *     CcAcquireByteRangeForWrite @ 0x140075D20 (CcAcquireByteRangeForWrite.c)
 *     ExpApplyPriorityBoost @ 0x14009CD90 (ExpApplyPriorityBoost.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x1400C8960 (ExReleaseResourceAndLeavePriorityRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400C92E0 (ExpReleaseResourceForThreadLite.c)
 *     PsBoostThreadIo @ 0x1400CA880 (PsBoostThreadIo.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400D5A80 (FsRtlpWaitForIoAtEof.c)
 *     KiAbThreadBoostIoPriority @ 0x1400D635C (KiAbThreadBoostIoPriority.c)
 *     ExpBoostIoAfterAcquire @ 0x1400D6454 (ExpBoostIoAfterAcquire.c)
 *     ExSetResourceOwnerPointerEx @ 0x1400D6534 (ExSetResourceOwnerPointerEx.c)
 *     ExDeleteResourceLite @ 0x1400F29E0 (ExDeleteResourceLite.c)
 *     KeAbEntryFree @ 0x1400F4C90 (KeAbEntryFree.c)
 *     FsRtlReleaseEofLock @ 0x1401014F0 (FsRtlReleaseEofLock.c)
 *     PsLeavePriorityRegion @ 0x140102070 (PsLeavePriorityRegion.c)
 *     PsEnterPriorityRegion @ 0x140102C50 (PsEnterPriorityRegion.c)
 *     ExReinitializeResourceLite @ 0x140113E08 (ExReinitializeResourceLite.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14012E1F4 (CcBoostLowPriorityWorkerThread.c)
 *     IoBoostThreadIo @ 0x14014C778 (IoBoostThreadIo.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExDeferredFreePool @ 0x14028A240 (ExDeferredFreePool.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x14012B960 (KiAbThreadInsertList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void __fastcall PsBoostThreadIoEx(__int64 a1, char a2, char a3, void *a4)
{
  signed __int32 v4; // ebp
  unsigned __int8 CurrentIrql; // r13
  PVOID *v6; // rbx
  char v8; // r15
  PVOID *PoolWithTag; // rax
  volatile signed __int32 *v12; // rcx
  __int64 **v13; // rbx
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 **v16; // rbx
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  PVOID **v20; // rcx
  volatile signed __int64 *v21; // rcx
  bool v22; // zf
  unsigned __int8 v23; // si
  struct _KPRCB *CurrentPrcb; // rbx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  CurrentIrql = 0;
  v6 = 0LL;
  v8 = a3;
  if ( PspAlwaysTrackIoBoosting )
  {
    v8 = 1;
  }
  else if ( !a3 )
  {
    goto LABEL_10;
  }
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x736F6F42u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    RtlCaptureStackBackTrace(1u, 0xAu, v6 + 2, 0LL);
    v6[12] = KeGetCurrentThread();
    v6[13] = a4;
  }
  v12 = (volatile signed __int32 *)(a1 + 1824);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v12);
  }
  else if ( _interlockedbittestandset64(v12, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v12);
  }
LABEL_10:
  if ( !a2 )
  {
    v4 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1788));
    if ( !v8 )
    {
LABEL_43:
      v22 = v4 == 1;
      goto LABEL_44;
    }
    if ( !v6 )
      goto LABEL_36;
    v19 = a1 + 1792;
    v20 = *(PVOID ***)(a1 + 1800);
    *v6 = (PVOID)(a1 + 1792);
    v6[1] = v20;
    if ( *v20 != (PVOID *)(a1 + 1792) )
      __fastfail(3u);
    goto LABEL_35;
  }
  if ( *(_DWORD *)(a1 + 1788) )
  {
    v4 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 1788));
    if ( !v8 )
      goto LABEL_41;
    if ( !*(_DWORD *)(a1 + 1788) )
    {
      if ( v6 )
        ExFreePoolWithTag(v6, 0x736F6F42u);
      v13 = (__int64 **)(a1 + 1792);
      while ( *v13 != (__int64 *)v13 )
      {
        v14 = *v13;
        v15 = **v13;
        if ( (__int64 **)(*v13)[1] != v13 || *(__int64 **)(v15 + 8) != v14 )
          __fastfail(3u);
        *v13 = (__int64 *)v15;
        *(_QWORD *)(v15 + 8) = v13;
        ExFreePoolWithTag(v14, 0x736F6F42u);
      }
      v16 = (__int64 **)(a1 + 1808);
      while ( *v16 != (__int64 *)v16 )
      {
        v17 = *v16;
        v18 = **v16;
        if ( (__int64 **)(*v16)[1] != v16 || *(__int64 **)(v18 + 8) != v17 )
          __fastfail(3u);
        *v16 = (__int64 *)v18;
        *(_QWORD *)(v18 + 8) = v16;
        ExFreePoolWithTag(v17, 0x736F6F42u);
      }
      goto LABEL_36;
    }
    if ( v6 )
    {
      v19 = a1 + 1808;
      v20 = *(PVOID ***)(a1 + 1816);
      *v6 = (PVOID)(a1 + 1808);
      v6[1] = v20;
      if ( *v20 != (PVOID *)(a1 + 1808) )
        __fastfail(3u);
LABEL_35:
      *v20 = v6;
      *(_QWORD *)(v19 + 8) = v6;
    }
  }
LABEL_36:
  if ( v8 )
  {
    v21 = (volatile signed __int64 *)(a1 + 1824);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v21, retaddr);
    else
      _InterlockedAnd64(v21, 0LL);
    __writecr8(CurrentIrql);
  }
LABEL_41:
  if ( !a2 )
    goto LABEL_43;
  v22 = v4 == 0;
LABEL_44:
  if ( v22 && KiAbEnabled && !a2 && *(_BYTE *)(a1 + 793) )
  {
    v23 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &CurrentPrcb->AbPropagateBoostsList, a1 + 1376) )
      KiAbQueueAutoBoostDpc(CurrentPrcb);
    __writecr8(v23);
  }
}
