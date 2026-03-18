/*
 * XREFs of AlpcpSignal @ 0x1400444B0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14009D900 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x14047652C (AlpcpCompleteDeferSignalRequest.c)
 *     NtAlpcSendWaitReceivePort @ 0x14047B5F0 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     KiInsertQueueInternal @ 0x1401260F4 (KiInsertQueueInternal.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

void __fastcall AlpcpSignal(__int64 a1, BOOLEAN a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  __int64 v7; // rdi
  unsigned int v8; // ebx
  char v9; // r12
  unsigned __int8 CurrentIrql; // al
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rdi
  char v15; // r13
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v18; // al
  _QWORD *v19; // rbx
  _QWORD *v20; // rcx
  __int64 v21; // r8
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 **v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      v7 = *(_QWORD *)(v4 + 48);
      v8 = 0;
      v9 = *(_BYTE *)(a1 + 59);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v7;
      LockHandle.LockQueue.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.OldIrql = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v7);
      }
      else
      {
        v11 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v7, (__int64)&LockHandle);
        if ( v11 )
          KxWaitForLockOwnerShip((__int64)&LockHandle, v11);
      }
      if ( *(_DWORD *)(v7 + 12) >= *(_DWORD *)(v7 + 8) )
      {
        v13 = 0LL;
        if ( v9 )
          ++*(_DWORD *)(v7 + 20);
        else
          ++*(_DWORD *)(v7 + 16);
      }
      else
      {
        v12 = *(_QWORD **)(v7 + 32);
        if ( v12 )
          *(_QWORD *)(v7 + 32) = *v12;
        v13 = v12[1];
        ++*(_DWORD *)(v7 + 12);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v4 + 352);
      KeAbPostRelease(v4 + 352);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v4 + 32);
        *(_QWORD *)(v13 + 24) = *(_QWORD *)(v4 + 40);
        *(_QWORD *)(v13 + 32) = -(__int64)(v9 != 0);
        *(_DWORD *)(v13 + 40) = 0;
        *(_QWORD *)(v13 + 48) = 0LL;
        v15 = KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentPrcb = KeGetCurrentPrcb();
        CurrentThread = CurrentPrcb->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          if ( CurrentThread->WaitBlockFill6[68] != 2
            || (v18 = 1, CurrentThread->NextProcessor != KeGetPcr()->Prcb.Number) )
          {
            v18 = 0;
          }
          EtwTraceEnqueueWork(CurrentPrcb->CurrentThread, v13, v18);
        }
        if ( _interlockedbittestandset((volatile signed __int32 *)v14, 7u) )
        {
          do
          {
            if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v8);
          }
          while ( (*(_DWORD *)v14 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v14, 7u) );
        }
        if ( *(_QWORD *)(v14 + 16) != v14 + 8
          && *(_DWORD *)(v14 + 40) < *(_DWORD *)(v14 + 44)
          && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v14 || CurrentThread->WaitReason != 15) )
        {
          v19 = *(_QWORD **)(v14 + 16);
          do
          {
            v20 = v19;
            v19 = (_QWORD *)v19[1];
            v21 = *v20;
            if ( *(_QWORD **)(*v20 + 8LL) != v20 || (_QWORD *)*v19 != v20 )
              __fastfail(3u);
            *v19 = v21;
            *(_QWORD *)(v21 + 8) = v19;
            if ( *((_BYTE *)v20 + 16) == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v20, v13, 0LL) )
                goto LABEL_49;
            }
            else
            {
              *((_BYTE *)v20 + 17) = 5;
              KiInsertQueueInternal(v20[3], v20);
            }
          }
          while ( v19 != (_QWORD *)(v14 + 8) );
        }
        ++*(_DWORD *)(v14 + 4);
        v22 = (__int64 *)(v14 + 24);
        if ( ((a2 != 0) & 2) != 0 )
        {
          v23 = *v22;
          *(_QWORD *)v13 = *v22;
          *(_QWORD *)(v13 + 8) = v22;
          if ( *(__int64 **)(v23 + 8) != v22 )
            __fastfail(3u);
          *(_QWORD *)(v23 + 8) = v13;
          *v22 = v13;
        }
        else
        {
          v24 = *(__int64 ***)(v14 + 32);
          *(_QWORD *)v13 = v22;
          *(_QWORD *)(v13 + 8) = v24;
          if ( *v24 != v22 )
            __fastfail(3u);
          *v24 = (__int64 *)v13;
          *(_QWORD *)(v14 + 32) = v13;
        }
LABEL_49:
        _InterlockedAnd((volatile signed __int32 *)v14, 0xFFFFFF7F);
        KiExitDispatcher((_DWORD)CurrentPrcb, a2 != 0, 1, 0, v15);
      }
    }
    else
    {
      KeReleaseSemaphore(*(PRKSEMAPHORE *)(v4 + 248), 1, 1, a2);
    }
  }
  else
  {
    v25 = *(_QWORD *)(a1 + 24);
    if ( v25 )
    {
      v26 = v25 + 1592;
      if ( a2 )
        KeReleaseSemaphoreEx(v26, 1, 1, a4, 1);
      else
        KeReleaseSemaphoreEx(v26, 1, 1, a4, 2);
    }
    else
    {
      v27 = *(_QWORD *)(a1 + 40);
      if ( v27 )
      {
        KeSetEvent((PRKEVENT)(v27 & 0xFFFFFFFFFFFFFFFEuLL), 0, a2);
        v28 = *(_QWORD *)(a1 + 40);
        if ( (v28 & 1) != 0 )
          ObfDereferenceObject((PVOID)(v28 & 0xFFFFFFFFFFFFFFFEuLL));
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
  }
}
