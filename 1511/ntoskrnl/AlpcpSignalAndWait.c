/*
 * XREFs of AlpcpSignalAndWait @ 0x14007E970
 * Callers:
 *     AlpcpReceiveSynchronousReply @ 0x14042EF50 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x1404A9110 (AlpcpCompleteDeferSignalRequestAndWait.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     AlpcpReleaseDirectAttribute @ 0x1400BBFFC (AlpcpReleaseDirectAttribute.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 *     AlpcpLogUnwait @ 0x140620CBC (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpSignalAndWait(
        __int64 a1,
        void *a2,
        KWAIT_REASON a3,
        __int64 a4,
        PLARGE_INTEGER Timeout,
        char a6)
{
  BOOLEAN v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rbx
  char v10; // r15
  unsigned __int8 CurrentIrql; // al
  _QWORD *v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rbx
  unsigned __int8 v17; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // r15
  unsigned int v20; // eax
  struct _KTHREAD *v21; // rcx
  unsigned int v22; // ebx
  void *v23; // rcx
  __int64 v25; // rcx
  char v26; // al
  __int64 *v27; // rcx
  __int64 v28; // rcx
  unsigned __int8 IsThreadRunning; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  KPROCESSOR_MODE v33; // [rsp+B8h] [rbp+20h]

  v33 = a4;
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
        KiAcquireQueuedSpinLockInstrumented(&LockHandle);
      }
      else if ( _InterlockedExchange64((volatile __int64 *)v9, (__int64)&LockHandle) )
      {
        KxWaitForLockOwnerShip(&LockHandle);
      }
      if ( *(_DWORD *)(v9 + 12) >= *(_DWORD *)(v9 + 8) )
      {
        v13 = 0LL;
        if ( v10 )
          ++*(_DWORD *)(v9 + 20);
        else
          ++*(_DWORD *)(v9 + 16);
      }
      else
      {
        v12 = *(_QWORD **)(v9 + 32);
        if ( v12 )
          *(_QWORD *)(v9 + 32) = *v12;
        v13 = v12[1];
        ++*(_DWORD *)(v9 + 12);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
      KeAbPostRelease(v8 + 352);
      if ( v13 )
      {
        v16 = *(_QWORD *)(v8 + 32);
        *(_QWORD *)(v13 + 24) = *(_QWORD *)(v8 + 40);
        *(_QWORD *)(v13 + 32) = -(__int64)(v10 != 0);
        *(_DWORD *)(v13 + 40) = 0;
        *(_QWORD *)(v13 + 48) = 0LL;
        v17 = KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentPrcb = KeGetCurrentPrcb();
        CurrentThread = CurrentPrcb->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v13, IsThreadRunning);
        }
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v16, v14, v15);
        if ( *(_QWORD *)(v16 + 16) == v16 + 8
          || *(_DWORD *)(v16 + 40) >= *(_DWORD *)(v16 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v16 && CurrentThread->WaitReason == 15
          || !KiWakeQueueWaiter((__int64)CurrentPrcb, v16, v13) )
        {
          ++*(_DWORD *)(v16 + 4);
          v27 = *(__int64 **)(v16 + 32);
          *(_QWORD *)v13 = v16 + 24;
          *(_QWORD *)(v13 + 8) = v27;
          if ( *v27 != v16 + 24 )
            __fastfail(3u);
          *v27 = v13;
          *(_QWORD *)(v16 + 32) = v13;
        }
        _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
        KiExitDispatcher((_DWORD)CurrentPrcb, 3, 1, 0, v17);
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
      KeReleaseSemaphoreEx(v25 + 1592, 1, 1LL, a4, v26);
    }
    else
    {
      v28 = *(_QWORD *)(a1 + 40);
      if ( v28 )
      {
        KeSetEvent((PRKEVENT)(v28 & 0xFFFFFFFFFFFFFFFEuLL), 0, 1u);
        AlpcpReleaseDirectAttribute(*(_QWORD *)(a1 + 40));
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
  }
  KeLeaveCriticalRegion();
  v20 = KeWaitForSingleObject(a2, a3, v33, v7, Timeout);
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
