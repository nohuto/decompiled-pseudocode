/*
 * XREFs of KeTerminateThread @ 0x14000F218
 * Callers:
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 * Callees:
 *     KiRemoveThreadFromSchedulingGroup @ 0x14000B3A4 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14000C528 (KiActivateWaiterQueueWithNoLocks.c)
 *     ExQueueWorkItemEx @ 0x14000CD94 (ExQueueWorkItemEx.c)
 *     KiAcquireProcessLockExclusive @ 0x14000FB0C (KiAcquireProcessLockExclusive.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     KiProcessThreadWaitList @ 0x1400F7350 (KiProcessThreadWaitList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeDisableProfiling @ 0x140204BBC (KeDisableProfiling.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KeTerminateThread(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 *v5; // r14
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  unsigned int v8; // ebp
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int64 *v10; // rcx
  __int64 **v11; // rax
  unsigned __int64 v12; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v14; // esi
  _QWORD *v15; // r15
  _QWORD *v16; // r12
  _QWORD *v17; // r14
  char v18; // al
  __int64 v19; // r8
  __int64 v20; // rsi
  _KTHREAD *CurrentThread; // r13
  char v22; // al
  unsigned int v23; // ebp
  _QWORD *v24; // rcx
  signed __int64 *v25; // r8
  signed __int64 v26; // rax
  signed __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // esi
  signed __int32 v31[8]; // [rsp+0h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v34; // [rsp+90h] [rbp+8h] BYREF
  struct _KPRCB *v35; // [rsp+98h] [rbp+10h]
  struct _KPRCB *v36; // [rsp+A0h] [rbp+18h]

  if ( (*(_DWORD *)(BugCheckParameter1 + 116) & 0x1000) != 0 )
    KeBugCheckEx(0x107u, BugCheckParameter1, 0LL, 0LL, 0LL);
  v2 = *(_QWORD *)(BugCheckParameter1 + 360);
  if ( v2 )
    KeDisableProfiling(BugCheckParameter1, *(_QWORD *)(v2 + 8));
  v3 = *(_QWORD *)(BugCheckParameter1 + 544);
  *(_BYTE *)(BugCheckParameter1 + 643) = 22;
  KiAcquireProcessLockExclusive(v3, &v34);
  v5 = (__int64 *)(BugCheckParameter1 + 760);
  if ( *(_QWORD *)(BugCheckParameter1 + 760) != *(_QWORD *)(BugCheckParameter1 + 768) )
    goto LABEL_9;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&KiProcessListLock, &LockHandle);
  v6 = *(_QWORD *)(v3 + 576);
  v7 = *(_QWORD **)(v3 + 584);
  if ( *(_QWORD *)(v6 + 8) != v3 + 576 || *v7 != v3 + 576 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_9;
  }
  _m_prefetchw(&LockHandle);
  Next = LockHandle.LockQueue.Next;
  if ( !LockHandle.LockQueue.Next )
  {
    if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                         0LL,
                                         (signed __int64)&LockHandle) == &LockHandle )
      goto LABEL_9;
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
  }
  LockHandle.LockQueue.Next = 0LL;
  _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
LABEL_9:
  v8 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)v3, 7u) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
    while ( (*(_DWORD *)v3 & 0x80u) != 0 );
  }
  v10 = (__int64 *)*v5;
  v11 = *(__int64 ***)(BugCheckParameter1 + 768);
  if ( *(__int64 **)(*v5 + 8) != v5 || *v11 != v5 )
    __fastfail(3u);
  *v11 = v10;
  v10[1] = (__int64)v11;
  _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
  if ( *(_QWORD *)(BugCheckParameter1 + 104) )
    KiRemoveThreadFromSchedulingGroup(BugCheckParameter1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 64, retaddr);
  else
    *(_DWORD *)(v3 + 64) = 0;
  v12 = *(_QWORD *)(BugCheckParameter1 + 232);
  if ( v12 )
    KiActivateWaiterQueueWithNoLocks(BugCheckParameter1, v12, (_QWORD *)(BugCheckParameter1 + 520));
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  v36 = CurrentPrcb;
  while ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter1, 7u) )
  {
    do
    {
      if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v14);
    }
    while ( (*(_DWORD *)BugCheckParameter1 & 0x80u) != 0 );
  }
  v15 = (_QWORD *)(BugCheckParameter1 + 8);
  *(_DWORD *)(BugCheckParameter1 + 4) = 1;
  v16 = *(_QWORD **)(BugCheckParameter1 + 8);
  while ( v16 != v15 )
  {
    v17 = v16;
    v16 = (_QWORD *)*v16;
    v18 = *((_BYTE *)v17 + 16);
    if ( v18 == 1 )
    {
      v19 = *((unsigned __int16 *)v17 + 9);
      goto LABEL_64;
    }
    if ( v18 == 2 )
    {
      *((_BYTE *)v17 + 17) = 5;
      v20 = v17[3];
      *v17 = 0LL;
      __writecr8(2uLL);
      v35 = KeGetCurrentPrcb();
      CurrentThread = v35->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        if ( CurrentThread->WaitBlockFill6[68] != 2
          || (v22 = 1, CurrentThread->NextProcessor != KeGetPcr()->Prcb.Number) )
        {
          v22 = 0;
        }
        LOBYTE(v4) = v22;
        EtwTraceEnqueueWork(CurrentThread, v17, v4);
      }
      v23 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)v20, 7u) )
      {
        do
        {
          if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v23);
        }
        while ( (*(_DWORD *)v20 & 0x80u) != 0 );
      }
      if ( *(_QWORD *)(v20 + 16) == v20 + 8
        || *(_DWORD *)(v20 + 40) >= *(_DWORD *)(v20 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v20 && CurrentThread->WaitReason == 15
        || !(unsigned __int8)KiWakeQueueWaiter(v35, v20, v17) )
      {
        ++*(_DWORD *)(v20 + 4);
        v24 = *(_QWORD **)(v20 + 32);
        *v17 = v20 + 24;
        v17[1] = v24;
        if ( *v24 != v20 + 24 )
          __fastfail(3u);
        *v24 = v17;
        *(_QWORD *)(v20 + 32) = v17;
      }
      _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
      CurrentPrcb = v36;
    }
    else
    {
      v19 = 256LL;
LABEL_64:
      KiTryUnwaitThread(CurrentPrcb, v17, v19, 0LL);
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 16) = BugCheckParameter1 + 8;
  *v15 = v15;
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter1, 0xFFFFFF7F);
  *(_BYTE *)(BugCheckParameter1 + 388) = 4;
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL, 0LL);
  v25 = (signed __int64 *)(BugCheckParameter1 + 1544);
  _m_prefetchw(&PsReaperListHead);
  v26 = PsReaperListHead;
  do
  {
    *v25 = v26;
    v27 = v26;
    v26 = _InterlockedCompareExchange64(&PsReaperListHead, (signed __int64)v25, v26);
  }
  while ( v26 != v27 );
  if ( v26 )
  {
    if ( qword_14032C578 && _interlockedbittestandreset((volatile signed __int32 *)&qword_14032C578, 0) )
    {
      v28 = 0xFFFFLL;
      goto LABEL_75;
    }
  }
  else
  {
    v28 = 0xFFFFFFFFLL;
LABEL_75:
    if ( !(unsigned __int8)ExQueueWorkItemEx(&PsReaperWorkItem, 2, v28) )
      _interlockedbittestandset((volatile signed __int32 *)&qword_14032C578, 0);
  }
  _InterlockedOr(v31, 0);
  if ( *(_QWORD *)(BugCheckParameter1 + 64) )
  {
    v29 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v29 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v29);
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
  return KiSwapThread(BugCheckParameter1, CurrentPrcb);
}
