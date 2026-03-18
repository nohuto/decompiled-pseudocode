/*
 * XREFs of CcPostWorkQueueAsyncRead @ 0x1400FF968
 * Callers:
 *     CcAsyncReadWorker @ 0x1400FB99C (CcAsyncReadWorker.c)
 *     CcAsyncCopyRead @ 0x1400FF7AC (CcAsyncCopyRead.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     CcCompleteAsyncRead @ 0x1400FB54C (CcCompleteAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1400FFC1C (CcShouldSpinAsyncReadWorkerThread.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140123444 (CcPerfLogWorkItemEnqueue.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

void __fastcall CcPostWorkQueueAsyncRead(PSLIST_ENTRY ListEntry, __int64 a2)
{
  char v2; // r15
  __int64 Next_high; // r12
  char v6; // r14
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  signed __int64 v12; // rcx
  ULONG_PTR v13; // rtt
  char ShouldSpinAsyncReadWorkerThread; // al
  PWORK_QUEUE_ITEM v15; // r8
  _QWORD *PoolWithTag; // rax
  _QWORD *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  signed __int64 v21; // rcx
  ULONG_PTR v22; // rtt
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  _QWORD *v26; // rax
  signed __int64 v27; // rcx
  ULONG_PTR v28; // rtt
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  PWORK_QUEUE_ITEM WorkItem; // [rsp+50h] [rbp+8h] BYREF

  WorkItem = 0LL;
  v2 = 0;
  Next_high = HIDWORD(ListEntry[6].Next);
  if ( (xmmword_140382290 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, ListEntry, 0LL, 0LL);
  if ( *((_BYTE *)&ListEntry[6].Next + 8) == 5 )
  {
    v6 = 0;
    v7 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0LL);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v7, (ULONG_PTR)&CcAsyncReadWorkQueueLock);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v10 = *(_QWORD **)(a2 + 8);
    ListEntry->Next = (_SLIST_ENTRY *)a2;
    *((_QWORD *)&ListEntry->Next + 1) = v10;
    if ( *v10 != a2 )
      __fastfail(3u);
    *v10 = ListEntry;
    v11 = (_QWORD *)(CcAsyncReadCompletionWorkQueue + 16 * Next_high);
    *(_QWORD *)(a2 + 8) = ListEntry;
    if ( (_QWORD *)*v11 == v11 || *(_DWORD *)(CcNumberActiveAsyncReadWorkerThreads + 4 * Next_high) <= 1u )
      KeSetEvent((PRKEVENT)(CcNewAsyncReadRequestEvent + 24 * Next_high), 0, 0);
    else
      v6 = 1;
    _m_prefetchw(&CcAsyncReadWorkQueueLock);
    if ( (CcAsyncReadWorkQueueLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v12 = CcAsyncReadWorkQueueLock - 16;
    else
      v12 = 0LL;
    if ( (CcAsyncReadWorkQueueLock & 2) != 0
      || (v13 = CcAsyncReadWorkQueueLock,
          v13 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CcAsyncReadWorkQueueLock,
                   v12,
                   CcAsyncReadWorkQueueLock)) )
    {
      ExfReleasePushLock(&CcAsyncReadWorkQueueLock);
    }
    KeAbPostRelease((ULONG_PTR)&CcAsyncReadWorkQueueLock);
    if ( !v6 )
    {
      ShouldSpinAsyncReadWorkerThread = CcShouldSpinAsyncReadWorkerThread(&WorkItem, (unsigned int)Next_high);
      v15 = WorkItem;
      if ( ShouldSpinAsyncReadWorkerThread )
      {
        if ( !WorkItem )
          return;
        *(_DWORD *)(CcReaderThreadsStats + 4 * (101 * Next_high + LODWORD(WorkItem[1].List.Blink))) = 0;
      }
      goto LABEL_17;
    }
  }
  else
  {
    if ( *(_QWORD *)(16 * Next_high + CcAsyncReadCompletionWorkQueue) == 16 * Next_high + CcAsyncReadCompletionWorkQueue
      && *(_DWORD *)(CcNumberActiveCompleteAsyncReadWorkItems + 4 * Next_high) < (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
    {
      goto LABEL_21;
    }
    v23 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0LL);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL);
    v24 = v23;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v23, (ULONG_PTR)&CcAsyncReadWorkQueueLock);
    if ( v24 )
      *(_BYTE *)(v24 + 26) |= 1u;
    v25 = 16 * Next_high + CcAsyncReadCompletionWorkQueue;
    if ( *(_QWORD *)v25 != v25
      || *(_DWORD *)(CcNumberActiveCompleteAsyncReadWorkItems + 4 * Next_high) >= (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
    {
      v26 = *(_QWORD **)(v25 + 8);
      ListEntry->Next = (_SLIST_ENTRY *)v25;
      *((_QWORD *)&ListEntry->Next + 1) = v26;
      if ( *v26 != v25 )
        __fastfail(3u);
      *v26 = ListEntry;
      v2 = 1;
      *(_QWORD *)(v25 + 8) = ListEntry;
    }
    _m_prefetchw(&CcAsyncReadWorkQueueLock);
    if ( (CcAsyncReadWorkQueueLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v27 = 0LL;
    else
      v27 = CcAsyncReadWorkQueueLock - 16;
    if ( (CcAsyncReadWorkQueueLock & 2) != 0
      || (v28 = CcAsyncReadWorkQueueLock,
          v28 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CcAsyncReadWorkQueueLock,
                   v27,
                   CcAsyncReadWorkQueueLock)) )
    {
      ExfReleasePushLock(&CcAsyncReadWorkQueueLock);
    }
    KeAbPostRelease((ULONG_PTR)&CcAsyncReadWorkQueueLock);
    if ( !v2 )
    {
LABEL_21:
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x71576343u);
      v17 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 0LL;
        PoolWithTag[2] = CcCompleteAsyncReadWorker;
        PoolWithTag[3] = PoolWithTag;
        *((_DWORD *)PoolWithTag + 8) = 4;
        PoolWithTag[6] = ListEntry;
        *((_DWORD *)PoolWithTag + 9) = Next_high;
        v18 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0LL);
        v8 = _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL);
        v19 = v18;
        if ( v8 )
          ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v18, (ULONG_PTR)&CcAsyncReadWorkQueueLock);
        if ( v19 )
          *(_BYTE *)(v19 + 26) |= 1u;
        v20 = CcNumberActiveCompleteAsyncReadWorkItems;
        *((_DWORD *)v17 + 10) = *(_DWORD *)(CcNumberActiveCompleteAsyncReadWorkItems + 4 * Next_high);
        ++*(_DWORD *)(v20 + 4 * Next_high);
        _m_prefetchw(&CcAsyncReadWorkQueueLock);
        if ( (CcAsyncReadWorkQueueLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v21 = CcAsyncReadWorkQueueLock - 16;
        else
          v21 = 0LL;
        if ( (CcAsyncReadWorkQueueLock & 2) != 0
          || (v22 = CcAsyncReadWorkQueueLock,
              v22 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CcAsyncReadWorkQueueLock,
                       v21,
                       CcAsyncReadWorkQueueLock)) )
        {
          ExfReleasePushLock(&CcAsyncReadWorkQueueLock);
        }
        KeAbPostRelease((ULONG_PTR)&CcAsyncReadWorkQueueLock);
        *v17 = 0LL;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v17, CustomPriorityWorkQueue|SuperCriticalWorkQueue|0x8);
        v15 = WorkItem;
LABEL_17:
        if ( v15 )
        {
          v15->List.Flink = 0LL;
          ExQueueWorkItem(v15, CriticalWorkQueue);
        }
        return;
      }
      **((_DWORD **)&ListEntry[4].Next + 1) = -1073741670;
      CcCompleteAsyncRead();
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[6].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[6].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        RtlpInterlockedPushEntrySList(&P->ListHead, ListEntry);
      }
      else
      {
        ++P->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))P->FreeEx)(ListEntry);
      }
    }
  }
}
