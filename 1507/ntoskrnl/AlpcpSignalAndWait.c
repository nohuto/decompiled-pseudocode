/*
 * XREFs of AlpcpSignalAndWait @ 0x140044130
 * Callers:
 *     AlpcpReceiveSynchronousReply @ 0x14047A190 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x14053250C (AlpcpCompleteDeferSignalRequestAndWait.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 *     AlpcpLogUnwait @ 0x1406A0338 (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpSignalAndWait(__int64 a1, void *a2, __int64 a3, KPROCESSOR_MODE a4, PLARGE_INTEGER Timeout)
{
  KPROCESSOR_MODE v5; // bl
  __int64 v6; // rsi
  KWAIT_REASON v7; // edi
  void *v8; // rbp
  BOOLEAN v9; // r12
  __int64 v11; // rdi
  unsigned int v12; // ebx
  char v13; // bp
  unsigned __int8 CurrentIrql; // al
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rdi
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v21; // al
  __int64 *v22; // rcx
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  unsigned int v25; // eax
  struct _KTHREAD *v26; // rcx
  unsigned int v27; // ebx
  void *v28; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  char v34; // [rsp+A0h] [rbp+8h]
  KWAIT_REASON WaitReason; // [rsp+B0h] [rbp+18h]

  WaitReason = (int)a3;
  v5 = a4;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = (int)a3;
  v8 = a2;
  v9 = (*(_DWORD *)(a1 + 48) & 0x200000) != 0;
  if ( v6 )
  {
    if ( !*(_BYTE *)(a1 + 58) )
    {
      KeReleaseSemaphore(*(PRKSEMAPHORE *)(v6 + 248), 1, 1, 1u);
      goto LABEL_40;
    }
    v11 = *(_QWORD *)(v6 + 48);
    v12 = 0;
    v13 = *(_BYTE *)(a1 + 59);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v11;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v11);
    }
    else
    {
      v15 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v11, (__int64)&LockHandle);
      if ( v15 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v15);
    }
    if ( *(_DWORD *)(v11 + 12) >= *(_DWORD *)(v11 + 8) )
    {
      v17 = 0LL;
      if ( v13 )
        ++*(_DWORD *)(v11 + 20);
      else
        ++*(_DWORD *)(v11 + 16);
    }
    else
    {
      v16 = *(_QWORD **)(v11 + 32);
      if ( v16 )
        *(_QWORD *)(v11 + 32) = *v16;
      v17 = v16[1];
      ++*(_DWORD *)(v11 + 12);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6 + 352);
    KeAbPostRelease(v6 + 352);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v6 + 32);
      *(_QWORD *)(v17 + 24) = *(_QWORD *)(v6 + 40);
      *(_QWORD *)(v17 + 32) = -(__int64)(v13 != 0);
      *(_DWORD *)(v17 + 40) = 0;
      *(_QWORD *)(v17 + 48) = 0LL;
      v34 = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentPrcb = KeGetCurrentPrcb();
      CurrentThread = CurrentPrcb->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        if ( CurrentThread->WaitBlockFill6[68] != 2
          || (v21 = 1, CurrentThread->NextProcessor != KeGetPcr()->Prcb.Number) )
        {
          v21 = 0;
        }
        EtwTraceEnqueueWork(CurrentPrcb->CurrentThread, v17, v21);
      }
      if ( _interlockedbittestandset((volatile signed __int32 *)v18, 7u) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v12);
        }
        while ( (*(_DWORD *)v18 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v18, 7u) );
      }
      if ( *(_QWORD *)(v18 + 16) == v18 + 8
        || *(_DWORD *)(v18 + 40) >= *(_DWORD *)(v18 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v18 && CurrentThread->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)CurrentPrcb, v18, v17) )
      {
        ++*(_DWORD *)(v18 + 4);
        v22 = *(__int64 **)(v18 + 32);
        *(_QWORD *)v17 = v18 + 24;
        *(_QWORD *)(v17 + 8) = v22;
        if ( *v22 != v18 + 24 )
          __fastfail(3u);
        *v22 = v17;
        *(_QWORD *)(v18 + 32) = v17;
      }
      _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)CurrentPrcb, 1, 1, 0, v34);
    }
    v8 = a2;
    v7 = WaitReason;
  }
  else
  {
    v30 = *(_QWORD *)(a1 + 24);
    if ( v30 )
    {
      KeReleaseSemaphoreEx(v30 + 1592, 1, 1, a4, 1);
      goto LABEL_40;
    }
    v31 = *(_QWORD *)(a1 + 40);
    if ( !v31 )
      goto LABEL_40;
    KeSetEvent((PRKEVENT)(v31 & 0xFFFFFFFFFFFFFFFEuLL), 0, 1u);
    v32 = *(_QWORD *)(a1 + 40);
    if ( (v32 & 1) != 0 )
      ObfDereferenceObject((PVOID)(v32 & 0xFFFFFFFFFFFFFFFEuLL));
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v5 = a4;
LABEL_40:
  v23 = KeGetCurrentThread();
  v24 = v23->KernelApcDisable + 1;
  v23->KernelApcDisable = v24;
  if ( !v24
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
    && !v23->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery(v23, a2, a3);
  }
  v25 = KeWaitForSingleObject(v8, v7, v5, v9, Timeout);
  v26 = KeGetCurrentThread();
  v27 = v25;
  --v26->KernelApcDisable;
  if ( AlpcpLogEnabled )
    AlpcpLogUnwait(v25);
  v28 = *(void **)(a1 + 32);
  if ( v28 )
    ObfDereferenceObject(v28);
  return v27;
}
