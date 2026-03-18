/*
 * XREFs of AlpcpSignal @ 0x14007A0C0
 * Callers:
 *     AlpcpCompleteDeferSignalRequest @ 0x140423900 (AlpcpCompleteDeferSignalRequest.c)
 *     NtAlpcSendWaitReceivePort @ 0x140427E70 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiSignalThread @ 0x14007A4E0 (KiSignalThread.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     KiInsertQueueInternal @ 0x1400C6988 (KiInsertQueueInternal.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

void __fastcall AlpcpSignal(__int64 a1, BOOLEAN a2, char a3, int a4)
{
  __int64 v4; // rdi
  __int64 v7; // rbx
  char v8; // si
  unsigned __int8 CurrentIrql; // al
  _QWORD *v10; // rcx
  __int64 v11; // r15
  bool v12; // cf
  __int64 v13; // rsi
  BOOL v14; // edi
  struct _KPRCB *CurrentPrcb; // rax
  _KTHREAD *CurrentThread; // rbx
  unsigned __int8 IsThreadRunning; // al
  _QWORD *v18; // rbp
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rbx
  char v22; // r14
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 **v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  _DWORD v30[2]; // [rsp+30h] [rbp-68h] BYREF
  struct _KPRCB *v31; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  bool v34; // [rsp+A0h] [rbp+8h]
  int v35; // [rsp+B8h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      v7 = *(_QWORD *)(v4 + 48);
      v8 = *(_BYTE *)(a1 + 59);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v7;
      LockHandle.LockQueue.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.OldIrql = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle);
      }
      else if ( _InterlockedExchange64((volatile __int64 *)v7, (__int64)&LockHandle) )
      {
        KxWaitForLockOwnerShip(&LockHandle);
      }
      if ( *(_DWORD *)(v7 + 12) >= *(_DWORD *)(v7 + 8) )
      {
        v11 = 0LL;
        if ( v8 )
          ++*(_DWORD *)(v7 + 20);
        else
          ++*(_DWORD *)(v7 + 16);
      }
      else
      {
        v10 = *(_QWORD **)(v7 + 32);
        if ( v10 )
          *(_QWORD *)(v7 + 32) = *v10;
        v11 = v10[1];
        ++*(_DWORD *)(v7 + 12);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v4 + 352));
      KeAbPostRelease(v4 + 352);
      if ( v11 )
      {
        v12 = v8 != 0;
        v13 = *(_QWORD *)(v4 + 32);
        *(_QWORD *)(v11 + 24) = *(_QWORD *)(v4 + 40);
        *(_QWORD *)(v11 + 32) = -(__int64)v12;
        v14 = a2 != 0;
        *(_DWORD *)(v11 + 40) = 0;
        v34 = a2 != 0;
        *(_QWORD *)(v11 + 48) = 0LL;
        v32 = KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentPrcb = KeGetCurrentPrcb();
        v31 = CurrentPrcb;
        CurrentThread = CurrentPrcb->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v11, IsThreadRunning);
        }
        v35 = 0;
        while ( _interlockedbittestandset((volatile signed __int32 *)v13, 7u) )
        {
          do
            KeYieldProcessorEx(&v35);
          while ( (*(_DWORD *)v13 & 0x80u) != 0 );
        }
        v30[1] = *(_DWORD *)(v13 + 4);
        if ( *(_QWORD *)(v13 + 16) != v13 + 8
          && *(_DWORD *)(v13 + 40) < *(_DWORD *)(v13 + 44)
          && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v13 || CurrentThread->WaitReason != 15) )
        {
          v18 = *(_QWORD **)(v13 + 16);
          do
          {
            v19 = v18;
            v18 = (_QWORD *)v18[1];
            v20 = *v19;
            if ( *(_QWORD **)(*v19 + 8LL) != v19 || (_QWORD *)*v18 != v19 )
              __fastfail(3u);
            *v18 = v20;
            *(_QWORD *)(v20 + 8) = v18;
            if ( *((_BYTE *)v19 + 16) == 1 )
            {
              v21 = v19[3];
              v22 = 0;
              v30[0] = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 64), 0LL) )
              {
                do
                  KeYieldProcessorEx(v30);
                while ( *(_QWORD *)(v21 + 64) );
              }
              if ( *(_BYTE *)(v21 + 388) == 5 )
                v22 = KiSignalThread(v31, v21, v11, v19);
              *(_QWORD *)(v21 + 64) = 0LL;
              ++*((_BYTE *)v19 + 17);
              if ( v22 )
              {
                LOBYTE(v14) = v34;
                goto LABEL_38;
              }
            }
            else
            {
              *((_BYTE *)v19 + 17) = 5;
              KiInsertQueueInternal(v19[3], v19);
            }
          }
          while ( v18 != (_QWORD *)(v13 + 8) );
          LOBYTE(v14) = v34;
        }
        ++*(_DWORD *)(v13 + 4);
        v23 = (__int64 *)(v13 + 24);
        if ( (v14 & 2) != 0 )
        {
          v24 = *v23;
          *(_QWORD *)v11 = *v23;
          *(_QWORD *)(v11 + 8) = v23;
          if ( *(__int64 **)(v24 + 8) != v23 )
            __fastfail(3u);
          *(_QWORD *)(v24 + 8) = v11;
          *v23 = v11;
        }
        else
        {
          v25 = *(__int64 ***)(v13 + 32);
          *(_QWORD *)v11 = v23;
          *(_QWORD *)(v11 + 8) = v25;
          if ( *v25 != v23 )
            __fastfail(3u);
          *v25 = (__int64 *)v11;
          *(_QWORD *)(v13 + 32) = v11;
        }
LABEL_38:
        _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
        KiExitDispatcher((_DWORD)v31, v14 ? 3 : 0, 1, 0, v32);
      }
    }
    else
    {
      KeReleaseSemaphore(*(PRKSEMAPHORE *)(v4 + 248), 1, 1, a2);
    }
  }
  else
  {
    v26 = *(_QWORD *)(a1 + 24);
    if ( v26 )
    {
      if ( a2 )
      {
        v27 = 1;
        if ( !a3 )
          v27 = 5;
        KeReleaseSemaphoreEx(v26 + 1592, 1, 1, a4, v27);
      }
      else
      {
        KeReleaseSemaphoreEx(v26 + 1592, 1, 1, a4, 2);
      }
    }
    else
    {
      v28 = *(_QWORD *)(a1 + 40);
      if ( v28 )
      {
        KeSetEvent((PRKEVENT)(v28 & 0xFFFFFFFFFFFFFFFEuLL), 0, a2);
        v29 = *(_QWORD *)(a1 + 40);
        if ( (v29 & 1) != 0 )
          ObfDereferenceObject((PVOID)(v29 & 0xFFFFFFFFFFFFFFFEuLL));
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
  }
}
