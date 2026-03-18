/*
 * XREFs of CcPostWorkQueueAsyncRead @ 0x14011DF64
 * Callers:
 *     CcAsyncReadWorker @ 0x14011D044 (CcAsyncReadWorker.c)
 *     CcAsyncCopyRead @ 0x14011DCB4 (CcAsyncCopyRead.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     CcCompleteAsyncRead @ 0x14011D990 (CcCompleteAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x14011E33C (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14011E480 (CcPerfLogWorkItemEnqueue.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void __fastcall CcPostWorkQueueAsyncRead(PSLIST_ENTRY ListEntry, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r15
  __int64 Next_high; // r12
  char v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  signed __int8 v12; // cf
  __int64 v13; // rbp
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  signed __int64 v16; // rcx
  ULONG_PTR v17; // rtt
  char ShouldSpinAsyncReadWorkerThread; // al
  PWORK_QUEUE_ITEM v19; // r8
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rdx
  _QWORD *v24; // rax
  signed __int64 v25; // rcx
  ULONG_PTR v26; // rtt
  _QWORD *PoolWithTag; // rax
  __int64 v28; // r9
  _QWORD *v29; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // rcx
  signed __int64 v37; // rcx
  ULONG_PTR v38; // rtt
  PWORK_QUEUE_ITEM WorkItem; // [rsp+50h] [rbp+8h] BYREF

  WorkItem = 0LL;
  v4 = 0;
  Next_high = HIDWORD(ListEntry[6].Next);
  if ( (xmmword_1403D1290 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, ListEntry, 0LL, 0LL);
  if ( *((_BYTE *)&ListEntry[6].Next + 8) == 5 )
  {
    v8 = 0;
    v9 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0LL, a4);
    v12 = _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL);
    v13 = v9;
    if ( v12 )
      ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v9, (ULONG_PTR)&CcAsyncReadWorkQueueLock, v11);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    v14 = *(_QWORD **)(a2 + 8);
    ListEntry->Next = (_SLIST_ENTRY *)a2;
    *((_QWORD *)&ListEntry->Next + 1) = v14;
    if ( *v14 != a2 )
      __fastfail(3u);
    *v14 = ListEntry;
    v15 = (_QWORD *)(CcAsyncReadCompletionWorkQueue + 16 * Next_high);
    *(_QWORD *)(a2 + 8) = ListEntry;
    if ( (_QWORD *)*v15 == v15 || *(_DWORD *)(CcNumberActiveAsyncReadWorkerThreads + 4 * Next_high) <= 1u )
      KeSetEvent((PRKEVENT)(CcNewAsyncReadRequestEvent + 24 * Next_high), 0, 0);
    else
      v8 = 1;
    _m_prefetchw(&CcAsyncReadWorkQueueLock);
    if ( (CcAsyncReadWorkQueueLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v16 = 0LL;
    else
      v16 = CcAsyncReadWorkQueueLock - 16;
    if ( (CcAsyncReadWorkQueueLock & 2) != 0
      || (v17 = CcAsyncReadWorkQueueLock,
          v17 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CcAsyncReadWorkQueueLock,
                   v16,
                   CcAsyncReadWorkQueueLock)) )
    {
      ExfReleasePushLock(&CcAsyncReadWorkQueueLock, v10);
    }
    KeAbPostRelease((ULONG_PTR)&CcAsyncReadWorkQueueLock);
    if ( !v8 )
    {
      ShouldSpinAsyncReadWorkerThread = CcShouldSpinAsyncReadWorkerThread(&WorkItem, (unsigned int)Next_high);
      v19 = WorkItem;
      if ( ShouldSpinAsyncReadWorkerThread )
      {
        if ( !WorkItem )
          return;
        *(_DWORD *)(CcReaderThreadsStats + 4 * (101 * Next_high + LODWORD(WorkItem[1].List.Blink))) = 0;
      }
      goto LABEL_58;
    }
  }
  else
  {
    if ( *(_QWORD *)(16 * Next_high + CcAsyncReadCompletionWorkQueue) == 16 * Next_high + CcAsyncReadCompletionWorkQueue
      && *(_DWORD *)(CcNumberActiveCompleteAsyncReadWorkItems + 4 * Next_high) < (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
    {
      goto LABEL_42;
    }
    v20 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0LL, a4);
    v12 = _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL);
    v22 = v20;
    if ( v12 )
      ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v20, (ULONG_PTR)&CcAsyncReadWorkQueueLock, v21);
    if ( v22 )
      *(_BYTE *)(v22 + 26) |= 1u;
    v23 = 16 * Next_high + CcAsyncReadCompletionWorkQueue;
    if ( *(_QWORD *)v23 != v23
      || *(_DWORD *)(CcNumberActiveCompleteAsyncReadWorkItems + 4 * Next_high) >= (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
    {
      v24 = *(_QWORD **)(v23 + 8);
      ListEntry->Next = (_SLIST_ENTRY *)v23;
      *((_QWORD *)&ListEntry->Next + 1) = v24;
      if ( *v24 != v23 )
        __fastfail(3u);
      *v24 = ListEntry;
      v4 = 1;
      *(_QWORD *)(v23 + 8) = ListEntry;
    }
    _m_prefetchw(&CcAsyncReadWorkQueueLock);
    if ( (CcAsyncReadWorkQueueLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v25 = 0LL;
    else
      v25 = CcAsyncReadWorkQueueLock - 16;
    if ( (CcAsyncReadWorkQueueLock & 2) != 0
      || (v26 = CcAsyncReadWorkQueueLock,
          v26 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CcAsyncReadWorkQueueLock,
                   v25,
                   CcAsyncReadWorkQueueLock)) )
    {
      ExfReleasePushLock(&CcAsyncReadWorkQueueLock, v23);
    }
    KeAbPostRelease((ULONG_PTR)&CcAsyncReadWorkQueueLock);
    if ( !v4 )
    {
LABEL_42:
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x71576343u);
      v29 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 0LL;
        PoolWithTag[2] = CcCompleteAsyncReadWorker;
        PoolWithTag[3] = PoolWithTag;
        *((_DWORD *)PoolWithTag + 8) = 4;
        PoolWithTag[6] = ListEntry;
        *((_DWORD *)PoolWithTag + 9) = Next_high;
        v32 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0LL, v28);
        v12 = _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL);
        v35 = v32;
        if ( v12 )
          ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v32, (ULONG_PTR)&CcAsyncReadWorkQueueLock, v34);
        if ( v35 )
          *(_BYTE *)(v35 + 26) |= 1u;
        v36 = CcNumberActiveCompleteAsyncReadWorkItems;
        *((_DWORD *)v29 + 10) = *(_DWORD *)(CcNumberActiveCompleteAsyncReadWorkItems + 4 * Next_high);
        ++*(_DWORD *)(v36 + 4 * Next_high);
        _m_prefetchw(&CcAsyncReadWorkQueueLock);
        if ( (CcAsyncReadWorkQueueLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v37 = 0LL;
        else
          v37 = CcAsyncReadWorkQueueLock - 16;
        if ( (CcAsyncReadWorkQueueLock & 2) != 0
          || (v38 = CcAsyncReadWorkQueueLock,
              v38 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CcAsyncReadWorkQueueLock,
                       v37,
                       CcAsyncReadWorkQueueLock)) )
        {
          ExfReleasePushLock(&CcAsyncReadWorkQueueLock, v33);
        }
        KeAbPostRelease((ULONG_PTR)&CcAsyncReadWorkQueueLock);
        *v29 = 0LL;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v29, CustomPriorityWorkQueue|SuperCriticalWorkQueue|0x8);
        v19 = WorkItem;
LABEL_58:
        if ( v19 )
        {
          v19->List.Flink = 0LL;
          ExQueueWorkItem(v19, CriticalWorkQueue);
        }
        return;
      }
      **((_DWORD **)&ListEntry[4].Next + 1) = -1073741670;
      CcCompleteAsyncRead((__int64)ListEntry);
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
