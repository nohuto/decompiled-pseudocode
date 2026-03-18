/*
 * XREFs of CcWorkerThread @ 0x1400328D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     CcWriteBehind @ 0x1400326B0 (CcWriteBehind.c)
 *     CcFindNextWorkQueueEntry @ 0x140033044 (CcFindNextWorkQueueEntry.c)
 *     CcPerformReadAhead @ 0x1400333F0 (CcPerformReadAhead.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     CcLazyWriteScan @ 0x140067780 (CcLazyWriteScan.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14011E480 (CcPerfLogWorkItemEnqueue.c)
 *     CcReEngageWorkerThreads @ 0x1401338C0 (CcReEngageWorkerThreads.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     CcLogExtraWBThreadAction @ 0x1401DC9D8 (CcLogExtraWBThreadAction.c)
 *     CcOkToAddWriteBehindThread @ 0x1401DCBEC (CcOkToAddWriteBehindThread.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __fastcall CcWorkerThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rsi
  __int64 NextWorkQueueEntry; // rdi
  int v6; // edx
  bool v7; // r13
  int v8; // ebx
  char v9; // r15
  char *v10; // rcx
  volatile __int64 *v11; // r8
  __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rcx
  signed __int64 v15; // rbx
  PWORK_QUEUE_ITEM *v16; // r8
  int v17; // eax
  PWORK_QUEUE_ITEM v18; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v20; // rax
  PWORK_QUEUE_ITEM v21; // rax
  struct _LIST_ENTRY *v22; // rcx
  volatile signed __int64 **v23; // rbx
  __int64 v24; // rax
  int v25; // eax
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v30; // ebx
  struct _KTHREAD *v31; // rax
  __int64 v32; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  PWORK_QUEUE_ITEM **v35; // rax
  unsigned int v36; // eax
  PWORK_QUEUE_ITEM **v37; // rax
  char v38; // [rsp+30h] [rbp-C8h]
  int v40; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+60h] [rbp-98h]
  __int64 CurrentIrql; // [rsp+68h] [rbp-90h]
  _QWORD v43[2]; // [rsp+70h] [rbp-88h] BYREF
  _QWORD v44[4]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v45[2]; // [rsp+A0h] [rbp-58h] BYREF
  _QWORD v46[2]; // [rsp+B0h] [rbp-48h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+0h]

  v4 = 0LL;
  NextWorkQueueEntry = 0LL;
  v38 = 0;
  v43[1] = a1;
  v40 = 0;
  v41 = 0LL;
  v6 = *(_DWORD *)(a1 + 32);
  if ( (unsigned int)(v6 - 1) > 1 )
    KeBugCheckEx(0x34u, 0x160BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v7 = v6 == 2;
  while ( 1 )
  {
    v8 = 0;
    v9 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v10 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128;
    v11 = (volatile __int64 *)*((_QWORD *)v10 + 1);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v10, *((_QWORD *)v10 + 1));
    }
    else
    {
      v12 = _InterlockedExchange64(v11, (__int64)v10);
      if ( v12 )
        KxWaitForLockOwnerShip(v10, v12, v11, a4);
    }
    if ( v38 )
    {
      CcQueueThrottle = 0;
      v38 = 0;
      CcReEngageWorkerThreads(
        (unsigned int)CcThreadsActiveBeforeThrottle,
        (unsigned int)CcExtraWBThreadsActiveBeforeThrottle);
    }
    if ( v41 == 35422 )
    {
      if ( *(_BYTE *)(NextWorkQueueEntry + 104) == 2 )
        *(_QWORD *)(*(_QWORD *)(NextWorkQueueEntry + 16) + 496LL) = NextWorkQueueEntry;
      v13 = (__int64 *)v4[1];
      *(_QWORD *)NextWorkQueueEntry = v4;
      *(_QWORD *)(NextWorkQueueEntry + 8) = v13;
      if ( (__int64 *)*v13 != v4 )
        __fastfail(3u);
      *v13 = NextWorkQueueEntry;
      v4[1] = NextWorkQueueEntry;
      v41 = 0LL;
    }
    if ( v7 && CcRemoveExtraThreadPending )
      break;
    do
    {
      while ( 1 )
      {
        if ( v7 )
        {
LABEL_26:
          if ( (v8 & 4) != 0 )
            goto LABEL_103;
          v8 |= 4u;
          if ( (__int64 *)CcRegularWorkQueue == &CcRegularWorkQueue )
            goto LABEL_103;
          v4 = &CcRegularWorkQueue;
          goto LABEL_29;
        }
        if ( (v8 & 1) != 0 || (v8 |= 1u, (__int64 *)CcFastTeardownWorkQueue == &CcFastTeardownWorkQueue) )
        {
          if ( (v8 & 2) != 0 )
            goto LABEL_26;
          v8 |= 2u;
          if ( (__int64 *)CcExpressWorkQueue == &CcExpressWorkQueue )
            goto LABEL_26;
          v4 = &CcExpressWorkQueue;
        }
        else
        {
          v4 = &CcFastTeardownWorkQueue;
        }
LABEL_29:
        if ( !v7 || CcMaxNumberOfWriteBehindThreads >= (unsigned int)CcNumberWorkerThreads )
        {
          if ( v4 == &CcRegularWorkQueue )
            goto LABEL_36;
          if ( !CcPostTickWorkItemCount
            || CcExecutingHighPriorityWorkItem + 1 < (unsigned int)CcNumberWorkerThreads
            || CcActiveExtraWriteBehindThreads )
          {
            if ( v4 != &CcRegularWorkQueue )
              break;
LABEL_36:
            if ( CcExecutingWriteBehindWorkItems + 1 <= (unsigned int)CcMaxNumberOfWriteBehindThreads )
              break;
          }
        }
      }
      NextWorkQueueEntry = CcFindNextWorkQueueEntry(v4, (unsigned int)CcMaxNumberOfWriteBehindThreads);
      v44[2] = NextWorkQueueEntry;
    }
    while ( !NextWorkQueueEntry );
    v15 = MEMORY[0xFFFFF78000000014];
    v16 = &CcIdleWorkerThreadList;
    if ( CcAddExtraWriteBehindThreads
      && MEMORY[0xFFFFF78000000014] >= CcPrevExtraWBThreadCheckTime + (unsigned int)CcExtraWBThreadDelay
      && CcIdleWorkerThreadList == (PWORK_QUEUE_ITEM)&CcIdleWorkerThreadList
      && CcPagesYetToWrite
      && (__int64 *)CcRegularWorkQueue != &CcRegularWorkQueue
      && CcIdleExtraWriteBehindThreadList != (PWORK_QUEUE_ITEM)&CcIdleExtraWriteBehindThreadList )
    {
      v17 = CcOkToAddWriteBehindThread(v14, &CcIdleExtraWriteBehindThreadList, &CcIdleWorkerThreadList);
      CcPrevExtraWBThreadCheckTime = v15;
      if ( CcActiveExtraWriteBehindThreads && v17 == 3 )
        CcRemoveExtraThreadPending = 1;
      if ( v17 == 2 )
      {
        v18 = CcIdleExtraWriteBehindThreadList;
        Flink = CcIdleExtraWriteBehindThreadList->List.Flink;
        if ( (PWORK_QUEUE_ITEM *)CcIdleExtraWriteBehindThreadList->List.Blink != &CcIdleExtraWriteBehindThreadList
          || (PWORK_QUEUE_ITEM)Flink->Blink != CcIdleExtraWriteBehindThreadList )
        {
          __fastfail(3u);
        }
        CcIdleExtraWriteBehindThreadList = (PWORK_QUEUE_ITEM)CcIdleExtraWriteBehindThreadList->List.Flink;
        Flink->Blink = (struct _LIST_ENTRY *)&CcIdleExtraWriteBehindThreadList;
        ++CcActiveExtraWriteBehindThreads;
        v18->List.Flink = 0LL;
        ExQueueWorkItem(v18, CriticalWorkQueue);
        v9 = 1;
      }
      v16 = &CcIdleWorkerThreadList;
    }
    if ( v4 == &CcRegularWorkQueue )
    {
      v20 = v15;
      CcPrevRegularQueueItemRunTime = v15;
    }
    else
    {
      v20 = CcPrevRegularQueueItemRunTime;
    }
    if ( CcMaxNumberOfWriteBehindThreads >= (unsigned int)CcNumberWorkerThreads
      && v15 >= v20 + (unsigned int)CcExtraWBThreadDelay
      && CcIdleWorkerThreadList == (PWORK_QUEUE_ITEM)&CcIdleWorkerThreadList
      && (__int64 *)CcRegularWorkQueue != &CcRegularWorkQueue )
    {
      v21 = CcIdleExtraWriteBehindThreadList;
      if ( CcIdleExtraWriteBehindThreadList != (PWORK_QUEUE_ITEM)&CcIdleExtraWriteBehindThreadList
        && !CcActiveExtraWriteBehindThreads )
      {
        v22 = CcIdleExtraWriteBehindThreadList->List.Flink;
        if ( (PWORK_QUEUE_ITEM *)CcIdleExtraWriteBehindThreadList->List.Blink != &CcIdleExtraWriteBehindThreadList
          || (PWORK_QUEUE_ITEM)v22->Blink != CcIdleExtraWriteBehindThreadList )
        {
          __fastfail(3u);
        }
        CcIdleExtraWriteBehindThreadList = (PWORK_QUEUE_ITEM)CcIdleExtraWriteBehindThreadList->List.Flink;
        v22->Blink = (struct _LIST_ENTRY *)&CcIdleExtraWriteBehindThreadList;
        CcActiveExtraWriteBehindThreads = 1;
        v21->List.Flink = 0LL;
        ExQueueWorkItem(v21, CriticalWorkQueue);
        CcPrevRegularQueueItemRunTime = v15;
        v9 = 1;
      }
    }
    if ( v4 == &CcRegularWorkQueue )
      _InterlockedIncrement(&CcExecutingWriteBehindWorkItems);
    else
      _InterlockedIncrement(&CcExecutingHighPriorityWorkItem);
    v23 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v23, retaddr);
      goto LABEL_75;
    }
    _m_prefetchw(v23);
    v24 = (__int64)*v23;
    if ( *v23 )
    {
LABEL_74:
      *v23 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v24 + 8), 1uLL);
    }
    else if ( v23 != (volatile signed __int64 **)_InterlockedCompareExchange64(v23[1], 0LL, (signed __int64)v23) )
    {
      v24 = KxWaitForLockChainValid(v23);
      goto LABEL_74;
    }
LABEL_75:
    __writecr8((unsigned __int8)CurrentIrql);
    v25 = xmmword_1403D1290;
    if ( (xmmword_1403D1290 & 0x20000) != 0 )
    {
      if ( v9 )
      {
        CcLogExtraWBThreadAction(2LL);
        v25 = xmmword_1403D1290;
      }
      if ( (v25 & 0x20000) != 0 )
      {
        v44[0] = NextWorkQueueEntry;
        v45[0] = v44;
        v45[1] = 8LL;
        EtwTraceKernelEvent((int)v45, 1, 0x80020000, 0x1601u, 4200706);
      }
    }
    v26 = *(unsigned __int8 *)(NextWorkQueueEntry + 104);
    if ( v26 == 2 )
    {
      CurrentThread = KeGetCurrentThread();
      LODWORD(CurrentThread[1].Queue) |= 2u;
      v30 = 0;
      do
      {
        v41 = NextWorkQueueEntry;
        CcWriteBehind(*(_QWORD *)(NextWorkQueueEntry + 16), (__int64)&v40);
        if ( v30 >= 0xA )
          break;
        ++v30;
      }
      while ( v41 == 35422 );
      v31 = KeGetCurrentThread();
      LODWORD(v31[1].Queue) &= ~2u;
    }
    else
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = v27 - 2;
        if ( v28 )
        {
          if ( v28 == 1 )
          {
            KeSetEvent(*(PRKEVENT *)(NextWorkQueueEntry + 16), 0, 0);
            v38 = 1;
          }
        }
        else
        {
          CcLazyWriteScan(NextWorkQueueEntry, *(unsigned int *)(NextWorkQueueEntry + 16));
        }
      }
      else
      {
        CcPerformReadAhead(NextWorkQueueEntry, *(_QWORD *)(NextWorkQueueEntry + 16));
      }
    }
    v32 = 2LL;
    if ( v4 == &CcRegularWorkQueue )
      _InterlockedDecrement(&CcExecutingWriteBehindWorkItems);
    else
      _InterlockedDecrement(&CcExecutingHighPriorityWorkItem);
    if ( v41 == 35422 )
    {
      if ( (xmmword_1403D1290 & 0x20000) != 0 )
      {
        LOBYTE(v16) = 1;
        CcPerfLogWorkItemEnqueue(v4, NextWorkQueueEntry, v16, 0LL);
      }
    }
    else
    {
      if ( (xmmword_1403D1290 & 0x20000) != 0 )
      {
        v43[0] = NextWorkQueueEntry;
        v46[0] = v43;
        v46[1] = 8LL;
        EtwTraceKernelEvent((int)v46, 1, 0x80020000, 0x1602u, 4200706);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[6].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[6].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)NextWorkQueueEntry);
      }
      else
      {
        ++P->FreeMisses;
        P->FreeEx((void *)NextWorkQueueEntry, (_LOOKASIDE_LIST_EX *)v32);
      }
    }
  }
  CcRemoveExtraThreadPending = 0;
LABEL_103:
  if ( v7 )
  {
    v35 = (PWORK_QUEUE_ITEM **)qword_14034E158;
    *(_QWORD *)a1 = &CcIdleExtraWriteBehindThreadList;
    *(_QWORD *)(a1 + 8) = v35;
    if ( *v35 != &CcIdleExtraWriteBehindThreadList )
      __fastfail(3u);
    *v35 = (PWORK_QUEUE_ITEM *)a1;
    qword_14034E158 = a1;
    --CcActiveExtraWriteBehindThreads;
    v36 = CcNumberActiveWorkerThreads;
  }
  else
  {
    v37 = (PWORK_QUEUE_ITEM **)qword_14034DEF8;
    *(_QWORD *)a1 = &CcIdleWorkerThreadList;
    *(_QWORD *)(a1 + 8) = v37;
    if ( *v37 != &CcIdleWorkerThreadList )
      __fastfail(3u);
    *v37 = (PWORK_QUEUE_ITEM *)a1;
    qword_14034DEF8 = a1;
    v36 = --CcNumberActiveWorkerThreads;
  }
  if ( CcAddExtraWriteBehindThreads && !CcActiveExtraWriteBehindThreads && v36 <= 1 )
  {
    CcAddExtraWriteBehindThreads = 0;
    memset(CcThroughputStats, 0, 8LL * (unsigned int)(CcMaxExtraWriteBehindThreads + 1));
  }
  KeReleaseQueuedSpinLock(8uLL, CurrentIrql);
  if ( (xmmword_1403D1290 & 0x20000) != 0 && v7 )
    CcLogExtraWBThreadAction(3LL);
}
