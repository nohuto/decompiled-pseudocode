/*
 * XREFs of KeTerminateThread @ 0x14002B7EC
 * Callers:
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 * Callees:
 *     KiAcquireProcessLockExclusive @ 0x14002AB2C (KiAcquireProcessLockExclusive.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiSwapThread @ 0x140082450 (KiSwapThread.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140094210 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140095180 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiProcessThreadWaitList @ 0x1400C7610 (KiProcessThreadWaitList.c)
 *     ExQueueWorkItemEx @ 0x140100640 (ExQueueWorkItemEx.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     KeDisableProfiling @ 0x1401C7C68 (KeDisableProfiling.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeTerminateThread(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rdi
  ULONG_PTR v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v13; // r14
  _QWORD *v14; // r15
  _QWORD *v15; // rdi
  char v16; // al
  __int64 v17; // r8
  __int64 v18; // rsi
  struct _KPRCB *v19; // rax
  _KTHREAD *CurrentThread; // r13
  __int64 v21; // r8
  _QWORD *v22; // rcx
  signed __int64 *v23; // r8
  signed __int64 v24; // rax
  signed __int64 v25; // rcx
  __int64 v26; // r8
  signed __int32 v28[8]; // [rsp+0h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int8 v31; // [rsp+A8h] [rbp+10h] BYREF
  int v32; // [rsp+B0h] [rbp+18h] BYREF
  struct _KPRCB *v33; // [rsp+B8h] [rbp+20h]

  v1 = BugCheckParameter1;
  if ( (*(_DWORD *)(BugCheckParameter1 + 116) & 0x1000) != 0 )
    KeBugCheckEx(0x107u, BugCheckParameter1, 0LL, 0LL, 0LL);
  v2 = *(_QWORD *)(BugCheckParameter1 + 360);
  if ( v2 )
    KeDisableProfiling(BugCheckParameter1, *(_QWORD *)(v2 + 8));
  v3 = *(_QWORD *)(v1 + 544);
  *(_BYTE *)(v1 + 643) = 22;
  KiAcquireProcessLockExclusive(v3, &v31);
  v4 = v1 + 760;
  if ( *(_QWORD *)(v1 + 760) == *(_QWORD *)(v1 + 768) )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&KiProcessListLock, &LockHandle);
    v7 = *(_QWORD *)(v3 + 576);
    v8 = *(_QWORD **)(v3 + 584);
    if ( *(_QWORD *)(v7 + 8) != v3 + 576 || *v8 != v3 + 576 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    KxReleaseQueuedSpinLock(&LockHandle, v7, v5, v6);
  }
  KiAcquireKobjectLockSafe(v3);
  v9 = *(_QWORD *)v4;
  v10 = *(_QWORD **)(v1 + 768);
  if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *v10 != v4 )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
  if ( *(_QWORD *)(v1 + 104) )
    KiRemoveThreadFromSchedulingGroup(v1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  v11 = *(_QWORD *)(v1 + 232);
  if ( v11 )
    KiActivateWaiterQueueWithNoLocks(v1, v11, v1 + 520);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(v1);
  v13 = (_QWORD *)(v1 + 8);
  *(_DWORD *)(v1 + 4) = 1;
  v14 = *(_QWORD **)(v1 + 8);
  if ( v14 != (_QWORD *)(v1 + 8) )
  {
    while ( 1 )
    {
      v15 = v14;
      v14 = (_QWORD *)*v14;
      v16 = *((_BYTE *)v15 + 16);
      if ( v16 == 1 )
      {
        v17 = *((unsigned __int16 *)v15 + 9);
      }
      else
      {
        if ( v16 == 2 )
        {
          *((_BYTE *)v15 + 17) = 5;
          v18 = v15[3];
          *v15 = 0LL;
          __writecr8(2uLL);
          v19 = KeGetCurrentPrcb();
          v33 = v19;
          CurrentThread = v19->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v21) = KeIsThreadRunning(v19->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v15, v21);
          }
          KiAcquireKobjectLockSafe(v18);
          if ( *(_QWORD *)(v18 + 16) == v18 + 8
            || *(_DWORD *)(v18 + 40) >= *(_DWORD *)(v18 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v18 && CurrentThread->WaitReason == 15
            || !(unsigned __int8)KiWakeQueueWaiter(v33, v18, v15) )
          {
            ++*(_DWORD *)(v18 + 4);
            v22 = *(_QWORD **)(v18 + 32);
            *v15 = v18 + 24;
            v15[1] = v22;
            if ( *v22 != v18 + 24 )
              __fastfail(3u);
            *v22 = v15;
            *(_QWORD *)(v18 + 32) = v15;
          }
          _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
          goto LABEL_33;
        }
        v17 = 256LL;
      }
      KiTryUnwaitThread(CurrentPrcb, v15, v17, 0LL);
LABEL_33:
      if ( v14 == v13 )
      {
        v1 = BugCheckParameter1;
        break;
      }
    }
  }
  v13[1] = v13;
  *v13 = v13;
  _InterlockedAnd((volatile signed __int32 *)v1, 0xFFFFFF7F);
  *(_BYTE *)(v1 + 388) = 4;
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL);
  v23 = (signed __int64 *)(v1 + 1544);
  _m_prefetchw(&PsReaperListHead);
  v24 = PsReaperListHead;
  do
  {
    *v23 = v24;
    v25 = v24;
    v24 = _InterlockedCompareExchange64(&PsReaperListHead, (signed __int64)v23, v24);
  }
  while ( v24 != v25 );
  if ( v24 )
  {
    if ( !qword_1402DC1B8 || !_interlockedbittestandreset((volatile signed __int32 *)&qword_1402DC1B8, 0) )
      goto LABEL_46;
    v26 = 0xFFFFLL;
  }
  else
  {
    v26 = 0xFFFFFFFFLL;
  }
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PsReaperWorkItem, 2LL, v26) )
    _interlockedbittestandset((volatile signed __int32 *)&qword_1402DC1B8, 0);
LABEL_46:
  _InterlockedOr(v28, 0);
  if ( *(_QWORD *)(v1 + 64) )
  {
    v32 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v32);
      while ( *(_QWORD *)(v1 + 64) );
    }
    *(_QWORD *)(v1 + 64) = 0LL;
  }
  return KiSwapThread(v1, CurrentPrcb);
}
