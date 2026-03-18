/*
 * XREFs of KiQueueReadyThread @ 0x14002A180
 * Callers:
 *     NtYieldExecution @ 0x1400290C0 (NtYieldExecution.c)
 *     KiSchedulerApc @ 0x140029304 (KiSchedulerApc.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KiCheckForThreadDispatch @ 0x14002AD14 (KiCheckForThreadDispatch.c)
 *     KiReadyOutSwappedThreads @ 0x14003307C (KiReadyOutSwappedThreads.c)
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KeRemoveQueueEx @ 0x1400807E0 (KeRemoveQueueEx.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KeBoostPriorityThread @ 0x1400F6440 (KeBoostPriorityThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x1401069B4 (KeCpuSetReportParkedProcessors.c)
 *     KxDispatchInterrupt @ 0x14015AA10 (KxDispatchInterrupt.c)
 *     KeRemovePriorityBoost @ 0x1401C2FDC (KeRemovePriorityBoost.c)
 * Callees:
 *     KiComputeNewPriority @ 0x14002A650 (KiComputeNewPriority.c)
 *     KiShouldPreemptionBeDeferred @ 0x14002A6D4 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14002A6EC (KiCheckForMaxOverQuotaScb.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x14002A710 (KiGetThreadEffectiveRankNonZero.c)
 *     KiCheckThreadAffinity @ 0x14002A76C (KiCheckThreadAffinity.c)
 *     KiTryScheduleNextForegroundBoost @ 0x14002A78C (KiTryScheduleNextForegroundBoost.c)
 *     KiPrcbInGroupAffinity @ 0x14002A910 (KiPrcbInGroupAffinity.c)
 *     KiComputeThreadAffinity @ 0x14002D430 (KiComputeThreadAffinity.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiUpdateThreadPriority @ 0x14007D120 (KiUpdateThreadPriority.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1400C3468 (KiRecomputeGroupSchedulingRank.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400C3838 (KiRemoveSchedulingGroupQueue.c)
 *     KiAddThreadToScbQueue @ 0x1400C38CC (KiAddThreadToScbQueue.c)
 *     KiResortScbQueue @ 0x1400C3AB8 (KiResortScbQueue.c)
 *     KiComputeGroupSchedulingRank @ 0x1400C3C94 (KiComputeGroupSchedulingRank.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1401CB44C (KiChargeSchedulingGroupCycleTime.c)
 */

int __fastcall KiQueueReadyThread(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  int v4; // r15d
  __int64 v5; // rdi
  unsigned int v7; // r12d
  char v8; // al
  unsigned __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  char v13; // dl
  __int16 v14; // dx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r10
  __int64 v19; // r10
  _KTHREAD *IdleThread; // rax
  __int64 v21; // rbp
  unsigned __int64 SharedReadyQueueMask; // rcx
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rbx
  _LIST_ENTRY *v24; // r14
  struct _LIST_ENTRY *v25; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v28; // rdi
  _LIST_ENTRY *v29; // rax
  struct _LIST_ENTRY *v30; // rcx
  struct _LIST_ENTRY *v31; // rcx
  bool v32; // zf
  int v34; // [rsp+58h] [rbp+10h] BYREF
  __int64 v35; // [rsp+60h] [rbp+18h]

  v3 = *(_QWORD *)(a2 + 72);
  v4 = 0;
  v5 = a2;
  v7 = *(unsigned __int8 *)(a2 + 565);
  if ( *(_QWORD *)(a2 + 568) != KiCpuSetSequence && (*(_DWORD *)(a2 + 116) & 8) == 0 || v3 >= *(_QWORD *)(a2 + 32) )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
    }
    else
    {
      if ( v3 >= *(_QWORD *)(a2 + 32) )
      {
        LOBYTE(a2) = 1;
        v8 = KiComputeNewPriority(v5, a2);
        KiUpdateThreadPriority(0LL, v5, (unsigned int)v8, 0LL);
        v9 = v3 + (unsigned int)*(unsigned __int8 *)(v5 + 651) * KiCyclesPerClockQuantum;
        if ( (*(_DWORD *)(v5 + 120) & 0x10) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 4u);
        *(_QWORD *)(v5 + 32) = v9;
        KiTryScheduleNextForegroundBoost(v5);
        v7 = 0;
      }
      if ( !(unsigned int)KiCheckThreadAffinity(v5)
        && (unsigned int)KiComputeThreadAffinity()
        && !(unsigned int)KiPrcbInGroupAffinity(a1, v5 + 576) )
      {
        _interlockedbittestandset((volatile signed __int32 *)(v5 + 120), 0xBu);
      }
      *(_QWORD *)(v5 + 64) = 0LL;
    }
  }
  v10 = *(_QWORD *)(v5 + 104);
  v35 = v10;
  v11 = v10;
  if ( v10 )
  {
    v12 = a1->ScbOffset + v10;
    if ( v12 )
    {
      while ( 1 )
      {
        v13 = *(_BYTE *)(v12 + 112);
        if ( (v13 & 4) != 0 )
        {
          if ( (v13 & 0x12) != 0 || *(_QWORD *)v12 <= *(_QWORD *)(v12 + 16) )
          {
            if ( *(_QWORD *)v12 > *(_QWORD *)(v12 + 24) )
              KiRecomputeGroupSchedulingRank(v11, v12, a1);
          }
          else
          {
            *(_BYTE *)(v12 + 112) = v13 | 2;
            if ( *(__int64 *)(v11 + 32) > 0 )
              KiChargeSchedulingGroupCycleTime(v11, v12);
            if ( (*(_BYTE *)(v12 + 112) & 1) != 0 )
            {
              LOBYTE(a3) = 1;
              KiRemoveSchedulingGroupQueue(a1, v12, a3);
            }
          }
        }
        else if ( *(_QWORD *)v12 < *(_QWORD *)(v12 + 8) )
        {
          if ( (v13 & 1) != 0 )
          {
            LOBYTE(a3) = 1;
            KiResortScbQueue(a1, v12, a3);
          }
        }
        else
        {
          KiComputeGroupSchedulingRank(v11, a1, v12);
        }
        v12 = *(_QWORD *)(v12 + 392);
        if ( !v12 )
          break;
        v11 = v12 - a1->ScbOffset;
        v35 = v11;
      }
      if ( (*(_DWORD *)(v5 + 120) & 0x100) == 0
        && *(char *)(v5 + 195) < 16
        && (unsigned __int8)KiShouldPreemptionBeDeferred(v5)
        && (v14 & 0x600) == 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(v5 + 120), 0xAu);
      }
    }
  }
  v15 = 0LL;
  if ( *(char *)(v5 + 195) >= 16 || (a1->IdleState & 2) != 0 )
  {
    v16 = *(_QWORD *)(v5 + 104);
    if ( !v16 || (v17 = a1->ScbOffset + v16) == 0 || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v17, 0LL) )
      v15 = *(_QWORD *)(v5 + 576) & a1->ParentNode->IdleNonParkedCpuSet;
  }
  if ( (*(_DWORD *)(v5 + 120) & 0x800) != 0 || v15 )
  {
    v32 = a1->NextThread == 0LL;
    *(_BYTE *)(v5 + 388) = 7;
    LOBYTE(v4) = !v32;
    _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
    _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 0xBu);
    *(_BYTE *)(v5 + 565) = v7;
    LODWORD(IdleThread) = KiDeferredReadyThread(a1, v5);
    if ( !v4 )
    {
      IdleThread = a1->IdleThread;
      if ( a1->CurrentThread != IdleThread )
      {
        if ( a1->NextThread )
          LODWORD(IdleThread) = KiRequestSoftwareInterrupt(a1, 2u);
      }
    }
  }
  else
  {
    *(_BYTE *)(v5 + 565) = 0;
    *(_DWORD *)(v5 + 436) = MEMORY[0xFFFFF78000000320];
    v18 = *(_QWORD *)(v5 + 104);
    if ( v18 )
      v18 += a1->ScbOffset;
    *(_BYTE *)(v5 + 388) = 1;
    if ( v18 && (*(_DWORD *)(v5 + 120) & 0x600) == 0 && (unsigned int)KiGetThreadEffectiveRankNonZero(v5, v18, 0LL) )
    {
      LODWORD(IdleThread) = KiAddThreadToScbQueue(a1, v19, v5, v7);
    }
    else
    {
      v21 = *(char *)(v5 + 195);
      SharedReadyQueueMask = a1->SharedReadyQueueMask;
      if ( (*(_DWORD *)(v5 + 120) & 0x1000) != 0
        && SharedReadyQueueMask
        && (SharedReadyQueueMask & *(_QWORD *)(v5 + 576)) == SharedReadyQueueMask )
      {
        SharedReadyQueue = a1->SharedReadyQueue;
        v24 = &SharedReadyQueue->ReadyListHead[v21];
        v34 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)SharedReadyQueue, 0LL) )
        {
          do
            KeYieldProcessorEx(&v34);
          while ( SharedReadyQueue->Lock );
        }
        v25 = (struct _LIST_ENTRY *)(v5 + 216);
        if ( v7 )
        {
          Flink = v24->Flink;
          v25->Flink = v24->Flink;
          *(_QWORD *)(v5 + 224) = v24;
          if ( Flink->Blink != v24 )
            __fastfail(3u);
          Flink->Blink = v25;
          v24->Flink = v25;
          _bittestandreset(&a1->AffinitizedSelectionMask, v21);
        }
        else
        {
          Blink = v24->Blink;
          v25->Flink = v24;
          *(_QWORD *)(v5 + 224) = Blink;
          if ( Blink->Flink != v24 )
            __fastfail(3u);
          Blink->Flink = v25;
          v24->Blink = v25;
        }
        SharedReadyQueue->ReadySummary |= 1 << v21;
        LODWORD(IdleThread) = *(_DWORD *)(v5 + 536) | 0x80000000;
        *(_DWORD *)(v5 + 536) = (_DWORD)IdleThread;
        _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
      }
      else
      {
        v28 = (struct _LIST_ENTRY *)(v5 + 216);
        v29 = &a1->DispatcherReadyListHead[v21];
        if ( v7 )
        {
          v30 = v29->Flink;
          v28->Flink = v29->Flink;
          v28->Blink = v29;
          if ( v30->Blink != v29 )
            __fastfail(3u);
          v30->Blink = v28;
          v29->Flink = v28;
          _bittestandset(&a1->AffinitizedSelectionMask, v21);
        }
        else
        {
          v31 = v29->Blink;
          v28->Flink = v29;
          v28->Blink = v31;
          if ( v31->Flink != v29 )
            __fastfail(3u);
          v31->Flink = v28;
          v29->Blink = v28;
        }
        LODWORD(IdleThread) = a1->ReadySummary | (1 << v21);
        a1->ReadySummary = (unsigned int)IdleThread;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
  }
  return (int)IdleThread;
}
