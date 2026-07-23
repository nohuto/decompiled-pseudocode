/*
 * XREFs of AlpcpSignalAndWait @ 0x14005DBA0
 * Callers:
 *     AlpcpReceiveSynchronousReply @ 0x140446B10 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x1404B14D0 (AlpcpCompleteDeferSignalRequestAndWait.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     KeReleaseSemaphore @ 0x140052530 (KeReleaseSemaphore.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     AlpcpReleaseDirectAttribute @ 0x1400A7D50 (AlpcpReleaseDirectAttribute.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KeReleaseSemaphoreEx @ 0x1400CCF30 (KeReleaseSemaphoreEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 *     AlpcpLogUnwait @ 0x140656A48 (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpSignalAndWait(
        __int64 a1,
        void *a2,
        KWAIT_REASON a3,
        KPROCESSOR_MODE a4,
        PLARGE_INTEGER Timeout,
        char a6)
{
  BOOLEAN v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rbx
  char v10; // r15
  unsigned __int8 CurrentIrql; // al
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rbx
  _QWORD *v16; // rsi
  unsigned __int8 v17; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // r15
  unsigned int v20; // eax
  struct _KTHREAD *v21; // rcx
  unsigned int v22; // ebx
  void *v23; // rcx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // edx
  _QWORD *v28; // rcx
  __int64 v29; // rcx
  unsigned __int8 IsThreadRunning; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF

  v7 = (*(_DWORD *)(a1 + 48) & 0x200000) != 0;
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      v9 = *(_QWORD *)(v8 + 48);
      v10 = *(_BYTE *)(a1 + 59);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v9;
      LockHandle.LockQueue.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.OldIrql = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v9);
      }
      else
      {
        v12 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v9, (__int64)&LockHandle);
        if ( v12 )
          KxWaitForLockOwnerShip((__int64)&LockHandle, v12);
      }
      if ( *(_DWORD *)(v9 + 12) >= *(_DWORD *)(v9 + 8) )
      {
        v14 = 0LL;
        if ( v10 )
          ++*(_DWORD *)(v9 + 20);
        else
          ++*(_DWORD *)(v9 + 16);
      }
      else
      {
        v13 = *(_QWORD **)(v9 + 32);
        if ( v13 )
          *(_QWORD *)(v9 + 32) = *v13;
        v14 = v13[1];
        ++*(_DWORD *)(v9 + 12);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8 + 352);
      KeAbPostRelease(v8 + 352);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v8 + 32);
        *(_QWORD *)(v14 + 24) = *(_QWORD *)(v8 + 40);
        *(_QWORD *)(v14 + 32) = -(__int64)(v10 != 0);
        v16 = (_QWORD *)(v15 + 8);
        *(_DWORD *)(v14 + 40) = 0;
        *(_QWORD *)(v14 + 48) = 0LL;
        v17 = KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentPrcb = KeGetCurrentPrcb();
        CurrentThread = CurrentPrcb->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v14, IsThreadRunning);
        }
        KiAcquireKobjectLockSafe(v15);
        if ( (_QWORD *)*v16 == v16
          || *(_DWORD *)(v15 + 40) >= *(_DWORD *)(v15 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v15 && CurrentThread->WaitReason == 15
          || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, v15, v14) )
        {
          v27 = *(_DWORD *)(v15 + 4);
          *(_DWORD *)(v15 + 4) = v27 + 1;
          v28 = *(_QWORD **)(v15 + 32);
          if ( *v28 != v15 + 24 )
            __fastfail(3u);
          *(_QWORD *)v14 = v15 + 24;
          *(_QWORD *)(v14 + 8) = v28;
          *v28 = v14;
          *(_QWORD *)(v15 + 32) = v14;
          if ( !v27 && (_QWORD *)*v16 != v16 )
            KiWakeOtherQueueWaiters(CurrentPrcb, v15);
        }
        _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
        KiExitDispatcher((__int64)CurrentPrcb, 3LL, 1LL, 0LL, v17);
      }
    }
    else
    {
      KeReleaseSemaphore(*(PRKSEMAPHORE *)(v8 + 248), 1, 1, 1u);
    }
  }
  else
  {
    v25 = *(_QWORD *)(a1 + 24);
    if ( v25 )
    {
      v26 = 1;
      if ( !a6 )
        v26 = 5;
      KeReleaseSemaphoreEx(v25 + 1600, 1, 1, a4, v26);
    }
    else
    {
      v29 = *(_QWORD *)(a1 + 40);
      if ( v29 )
      {
        KeSetEvent((PRKEVENT)(v29 & 0xFFFFFFFFFFFFFFFEuLL), 0, 1u);
        AlpcpReleaseDirectAttribute(*(_QWORD *)(a1 + 40));
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
  }
  KeLeaveCriticalRegion();
  v20 = KeWaitForSingleObject(a2, a3, a4, v7, Timeout);
  v21 = KeGetCurrentThread();
  v22 = v20;
  --v21->KernelApcDisable;
  if ( AlpcpLogEnabled )
    AlpcpLogUnwait(v20);
  v23 = *(void **)(a1 + 32);
  if ( v23 )
    ObfDereferenceObject(v23);
  return v22;
}
