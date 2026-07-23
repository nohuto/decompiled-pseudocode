/*
 * XREFs of AlpcpSignal @ 0x14005DED0
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x140448140 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x14049D7BC (AlpcpCompleteDeferSignalRequest.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiSignalThread @ 0x14005E2A0 (KiSignalThread.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KeReleaseSemaphoreEx @ 0x1400CCF30 (KeReleaseSemaphoreEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 */

void __fastcall AlpcpSignal(__int64 a1, BOOLEAN a2, char a3, int a4)
{
  __int64 v4; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  char v11; // r12
  unsigned __int8 CurrentIrql; // al
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  _QWORD **v19; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // rbx
  _QWORD *v22; // r14
  _QWORD *v23; // rbx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  char v26; // r13
  __int64 v27; // rbp
  bool v28; // bl
  unsigned int v29; // ecx
  int v30; // edx
  __int64 *v31; // rax
  __int64 **v32; // rcx
  unsigned __int8 IsThreadRunning; // al
  __int64 v34; // rcx
  int v35; // eax
  struct _KPRCB *v36; // [rsp+38h] [rbp-60h]
  unsigned __int8 v37; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  bool v39; // [rsp+A0h] [rbp+8h]
  int v40; // [rsp+B8h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      v10 = *(_QWORD *)(v4 + 48);
      v11 = *(_BYTE *)(a1 + 59);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v10;
      LockHandle.LockQueue.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.OldIrql = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v10);
      }
      else
      {
        v13 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v10, (__int64)&LockHandle);
        if ( v13 )
          KxWaitForLockOwnerShip((__int64)&LockHandle, v13);
      }
      if ( *(_DWORD *)(v10 + 12) >= *(_DWORD *)(v10 + 8) )
      {
        v15 = 0LL;
        if ( v11 )
          ++*(_DWORD *)(v10 + 20);
        else
          ++*(_DWORD *)(v10 + 16);
      }
      else
      {
        v14 = *(_QWORD **)(v10 + 32);
        if ( v14 )
          *(_QWORD *)(v10 + 32) = *v14;
        v15 = v14[1];
        ++*(_DWORD *)(v10 + 12);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v4 + 352);
      KeAbPostRelease(v4 + 352);
      if ( v15 )
      {
        v16 = 0LL;
        if ( v11 )
          v16 = -1LL;
        v17 = *(_QWORD *)(v4 + 40);
        v18 = *(_QWORD *)(v4 + 32);
        *(_QWORD *)(v15 + 24) = v17;
        *(_QWORD *)(v15 + 32) = v16;
        v39 = a2 != 0;
        *(_DWORD *)(v15 + 40) = 0;
        v19 = (_QWORD **)(v18 + 8);
        *(_QWORD *)(v15 + 48) = 0LL;
        v37 = KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentPrcb = KeGetCurrentPrcb();
        v36 = CurrentPrcb;
        CurrentThread = CurrentPrcb->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v15, IsThreadRunning);
        }
        KiAcquireKobjectLockSafe(v18);
        if ( *v19 != v19
          && *(_DWORD *)(v18 + 40) < *(_DWORD *)(v18 + 44)
          && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v18 || CurrentThread->WaitReason != 15) )
        {
          v22 = *v19;
          do
          {
            v23 = v22;
            v22 = (_QWORD *)*v22;
            if ( *((_BYTE *)v23 + 16) != 3 )
              break;
            v24 = *v23;
            v25 = (_QWORD *)v23[1];
            if ( *(_QWORD **)(*v23 + 8LL) != v23 || (_QWORD *)*v25 != v23 )
              __fastfail(3u);
            *v25 = v24;
            v26 = 0;
            *(_QWORD *)(v24 + 8) = v25;
            v27 = v23[3];
            v40 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 64), 0LL) )
            {
              do
                KeYieldProcessorEx(&v40);
              while ( *(_QWORD *)(v27 + 64) );
            }
            if ( *(_BYTE *)(v27 + 388) == 5 )
              v26 = KiSignalThread(v36, v27, v15, v23);
            *(_QWORD *)(v27 + 64) = 0LL;
            ++*((_BYTE *)v23 + 17);
            if ( v26 )
            {
              CurrentPrcb = v36;
              v28 = v39;
              goto LABEL_35;
            }
          }
          while ( v22 != v19 );
          CurrentPrcb = v36;
        }
        v30 = *(_DWORD *)(v18 + 4);
        v28 = v39;
        *(_DWORD *)(v18 + 4) = v30 + 1;
        v31 = (__int64 *)(v18 + 24);
        if ( (v39 & 2) != 0 )
        {
          v34 = *v31;
          if ( *(__int64 **)(*v31 + 8) != v31 )
            __fastfail(3u);
          *(_QWORD *)v15 = v34;
          *(_QWORD *)(v15 + 8) = v31;
          *(_QWORD *)(v34 + 8) = v15;
          *v31 = v15;
        }
        else
        {
          v32 = *(__int64 ***)(v18 + 32);
          if ( *v32 != v31 )
            __fastfail(3u);
          *(_QWORD *)v15 = v31;
          *(_QWORD *)(v15 + 8) = v32;
          *v32 = (__int64 *)v15;
          *(_QWORD *)(v18 + 32) = v15;
        }
        if ( !v30 && *v19 != v19 )
          KiWakeOtherQueueWaiters(CurrentPrcb, v18);
LABEL_35:
        _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
        if ( v28 )
          v29 = 3;
        else
          v29 = 0;
        KiExitDispatcher((__int64)CurrentPrcb, v29, 1LL, 0LL, v37);
      }
    }
    else
    {
      KeReleaseSemaphore(*(PRKSEMAPHORE *)(v4 + 248), 1, 1, a2);
    }
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 )
    {
      if ( a2 )
      {
        v35 = 1;
        if ( !a3 )
          v35 = 5;
        KeReleaseSemaphoreEx(v7 + 1600, 1, 1, a4, v35);
      }
      else
      {
        KeReleaseSemaphoreEx(v7 + 1600, 1, 1, a4, 2);
      }
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 40);
      if ( v8 )
      {
        KeSetEvent((PRKEVENT)(v8 & 0xFFFFFFFFFFFFFFFEuLL), 0, a2);
        v9 = *(_QWORD *)(a1 + 40);
        if ( (v9 & 1) != 0 )
          ObfDereferenceObjectWithTag((PVOID)(v9 & 0xFFFFFFFFFFFFFFFEuLL), 0x746C6644u);
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
  }
}
