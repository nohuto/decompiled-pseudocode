/*
 * XREFs of KeTerminateThread @ 0x1400F02A4
 * Callers:
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     KiSwapThread @ 0x14005AD80 (KiSwapThread.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14007E678 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiProcessThreadWaitList @ 0x14008D420 (KiProcessThreadWaitList.c)
 *     ExQueueWorkItemEx @ 0x1400A6F80 (ExQueueWorkItemEx.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400C6B2C (KiRemoveThreadFromSchedulingGroup.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     KiAcquireProcessLockExclusive @ 0x1400F0DA0 (KiAcquireProcessLockExclusive.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     KeDisableProfiling @ 0x1401D6ADC (KeDisableProfiling.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeTerminateThread(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 *v4; // r14
  __int64 *v5; // rcx
  __int64 **v6; // rax
  unsigned __int64 v7; // rdx
  struct _KPRCB *CurrentPrcb; // r12
  __int64 v9; // r9
  _QWORD *v10; // r14
  _QWORD *v11; // r15
  signed __int64 *v12; // r8
  signed __int64 v13; // rax
  signed __int64 v14; // rcx
  unsigned int v15; // r8d
  __int64 v17; // rsi
  char v18; // al
  __int64 v19; // r8
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rbp
  _QWORD *v23; // r13
  _KTHREAD *CurrentThread; // r9
  int v25; // r8d
  __int64 *v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  signed __int32 v29[8]; // [rsp+0h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  char v31; // [rsp+90h] [rbp+8h] BYREF
  int v32; // [rsp+98h] [rbp+10h] BYREF
  struct _KPRCB *v33; // [rsp+A0h] [rbp+18h]
  _KTHREAD *v34; // [rsp+A8h] [rbp+20h]

  if ( (*(_DWORD *)(BugCheckParameter1 + 116) & 0x1000) != 0 )
    KeBugCheckEx(0x107u, BugCheckParameter1, 0LL, 0LL, 0LL);
  v2 = *(_QWORD *)(BugCheckParameter1 + 360);
  if ( v2 )
    KeDisableProfiling(BugCheckParameter1, *(_QWORD *)(v2 + 8));
  v3 = *(_QWORD *)(BugCheckParameter1 + 544);
  *(_BYTE *)(BugCheckParameter1 + 643) = 22;
  KiAcquireProcessLockExclusive(v3, &v31);
  v4 = (__int64 *)(BugCheckParameter1 + 760);
  if ( *(_QWORD *)(BugCheckParameter1 + 760) == *(_QWORD *)(BugCheckParameter1 + 768) )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&KiProcessListLock, &LockHandle);
    v20 = *(_QWORD *)(v3 + 576);
    v21 = *(_QWORD **)(v3 + 584);
    if ( *(_QWORD *)(v20 + 8) != v3 + 576 || *v21 != v3 + 576 )
      __fastfail(3u);
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v3);
  v5 = (__int64 *)*v4;
  v6 = *(__int64 ***)(BugCheckParameter1 + 768);
  if ( *(__int64 **)(*v4 + 8) != v4 || *v6 != v4 )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = (__int64)v6;
  _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
  if ( *(_QWORD *)(BugCheckParameter1 + 104) )
    KiRemoveThreadFromSchedulingGroup(BugCheckParameter1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  v7 = *(_QWORD *)(BugCheckParameter1 + 232);
  if ( v7 )
    KiActivateWaiterQueueWithNoLocks(BugCheckParameter1, v7, (_QWORD *)(BugCheckParameter1 + 520));
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)BugCheckParameter1);
  v10 = (_QWORD *)(BugCheckParameter1 + 8);
  *(_DWORD *)(BugCheckParameter1 + 4) = 1;
  v11 = *(_QWORD **)(BugCheckParameter1 + 8);
  while ( v11 != v10 )
  {
    v17 = (__int64)v11;
    v11 = (_QWORD *)*v11;
    v18 = *(_BYTE *)(v17 + 16);
    if ( v18 == 1 )
    {
      v19 = *(unsigned __int16 *)(v17 + 18);
      goto LABEL_27;
    }
    if ( v18 == 2 )
    {
      *(_BYTE *)(v17 + 17) = 5;
      v22 = *(_QWORD *)(v17 + 24);
      *(_QWORD *)v17 = 0LL;
      v23 = (_QWORD *)(v22 + 8);
      __writecr8(2uLL);
      v33 = KeGetCurrentPrcb();
      CurrentThread = v33->CurrentThread;
      v34 = CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v27) = KeIsThreadRunning(CurrentThread);
        EtwTraceEnqueueWork(v28, v17, v27);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v22);
      if ( (_QWORD *)*v23 == v23
        || *(_DWORD *)(v22 + 40) >= *(_DWORD *)(v22 + 44)
        || v34->Queue == (_DISPATCHER_HEADER *volatile)v22 && v34->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)v33, v22, v17) )
      {
        v25 = *(_DWORD *)(v22 + 4);
        *(_DWORD *)(v22 + 4) = v25 + 1;
        v26 = *(__int64 **)(v22 + 32);
        if ( *v26 != v22 + 24 )
          __fastfail(3u);
        *(_QWORD *)v17 = v22 + 24;
        *(_QWORD *)(v17 + 8) = v26;
        *v26 = v17;
        *(_QWORD *)(v22 + 32) = v17;
        if ( !v25 && (_QWORD *)*v23 != v23 )
          KiWakeOtherQueueWaiters(v33, v22);
      }
      _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
    }
    else
    {
      v19 = 256LL;
LABEL_27:
      KiTryUnwaitThread((__int64)CurrentPrcb, v17, v19, 0LL);
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 16) = BugCheckParameter1 + 8;
  *v10 = v10;
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter1, 0xFFFFFF7F);
  *(_BYTE *)(BugCheckParameter1 + 388) = 4;
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64)CurrentPrcb, 1u, 0LL, 0LL);
  v12 = (signed __int64 *)(BugCheckParameter1 + 1552);
  _m_prefetchw(&PsReaperListHead);
  v13 = PsReaperListHead;
  do
  {
    *v12 = v13;
    v14 = v13;
    v13 = _InterlockedCompareExchange64(&PsReaperListHead, (signed __int64)v12, v13);
  }
  while ( v13 != v14 );
  if ( v13 )
  {
    if ( qword_1403015D8 && _interlockedbittestandreset((volatile signed __int32 *)&qword_1403015D8, 0) )
    {
      v15 = 0xFFFF;
      goto LABEL_19;
    }
  }
  else
  {
    v15 = -1;
LABEL_19:
    if ( !(unsigned __int8)ExQueueWorkItemEx(&PsReaperWorkItem, 2u, v15) )
      _interlockedbittestandset((volatile signed __int32 *)&qword_1403015D8, 0);
  }
  _InterlockedOr(v29, 0);
  if ( *(_QWORD *)(BugCheckParameter1 + 64) )
  {
    v32 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v32);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
  return KiSwapThread(BugCheckParameter1, (__int64)CurrentPrcb, (__int64)v12, v9);
}
