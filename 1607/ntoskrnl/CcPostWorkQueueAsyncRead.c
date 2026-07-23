/*
 * XREFs of CcPostWorkQueueAsyncRead @ 0x14006D8B8
 * Callers:
 *     CcAsyncCopyRead @ 0x14006D6EC (CcAsyncCopyRead.c)
 *     CcAsyncReadWorker @ 0x14013DE8C (CcAsyncReadWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14006B3C8 (CcPerfLogWorkItemEnqueue.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x14006DB58 (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcCompleteAsyncRead @ 0x14006E664 (CcCompleteAsyncRead.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __fastcall CcPostWorkQueueAsyncRead(__int64 *ListEntry, __int64 *a2)
{
  char v2; // r15
  __int64 v4; // r12
  char v6; // r14
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rsi
  __int64 **v10; // rax
  _QWORD *v11; // rax
  signed __int64 v12; // rcx
  ULONG_PTR v13; // rtt
  char ShouldSpinAsyncReadWorkerThread; // al
  PWORK_QUEUE_ITEM v15; // r8
  _QWORD *PoolWithTag; // rax
  _QWORD *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rcx
  signed __int64 v21; // rcx
  ULONG_PTR v22; // rtt
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 **v26; // rax
  signed __int64 v27; // rcx
  ULONG_PTR v28; // rtt
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  PWORK_QUEUE_ITEM WorkItem; // [rsp+50h] [rbp+8h] BYREF

  WorkItem = 0LL;
  v2 = 0;
  v4 = *((unsigned int *)ListEntry + 29);
  if ( (xmmword_1403AA2D0 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, (__int64)ListEntry, 0, 0);
  if ( *((_BYTE *)ListEntry + 120) == 5 )
  {
    v6 = 0;
    v7 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v7, &CcAsyncReadWorkQueueLock);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v10 = (__int64 **)a2[1];
    if ( *v10 != a2 )
      __fastfail(3u);
    ListEntry[1] = (__int64)v10;
    *ListEntry = (__int64)a2;
    *v10 = ListEntry;
    v11 = (_QWORD *)(CcAsyncReadCompletionWorkQueue + 16 * v4);
    a2[1] = (__int64)ListEntry;
    if ( (_QWORD *)*v11 == v11 || *(_DWORD *)(CcNumberActiveAsyncReadWorkerThreads + 4 * v4) <= 1u )
      KeSetEvent((PRKEVENT)(CcNewAsyncReadRequestEvent + 24 * v4), 0, 0);
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
      ShouldSpinAsyncReadWorkerThread = CcShouldSpinAsyncReadWorkerThread(&WorkItem, (unsigned int)v4);
      v15 = WorkItem;
      if ( ShouldSpinAsyncReadWorkerThread )
      {
        if ( !WorkItem )
          return;
        *(_DWORD *)(CcReaderThreadsStats + 4 * (101 * v4 + LODWORD(WorkItem[1].List.Blink))) = 0;
      }
      goto LABEL_17;
    }
  }
  else
  {
    if ( *(_QWORD *)(16 * v4 + CcAsyncReadCompletionWorkQueue) == 16 * v4 + CcAsyncReadCompletionWorkQueue
      && *(_DWORD *)(CcNumberActiveCompleteAsyncReadWorkItems + 4 * v4) < (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
    {
      goto LABEL_21;
    }
    v23 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL);
    v24 = v23;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v23, &CcAsyncReadWorkQueueLock);
    if ( v24 )
      *(_BYTE *)(v24 + 26) |= 1u;
    v25 = 16 * v4 + CcAsyncReadCompletionWorkQueue;
    if ( *(_QWORD *)v25 != v25
      || *(_DWORD *)(CcNumberActiveCompleteAsyncReadWorkItems + 4 * v4) >= (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
    {
      v26 = *(__int64 ***)(v25 + 8);
      if ( *v26 != (__int64 *)v25 )
        __fastfail(3u);
      *ListEntry = v25;
      v2 = 1;
      ListEntry[1] = (__int64)v26;
      *v26 = ListEntry;
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
        *((_DWORD *)PoolWithTag + 9) = v4;
        v18 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0);
        v8 = _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL);
        v19 = v18;
        if ( v8 )
          ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v18, &CcAsyncReadWorkQueueLock);
        if ( v19 )
          *(_BYTE *)(v19 + 26) |= 1u;
        v20 = CcNumberActiveCompleteAsyncReadWorkItems;
        *((_DWORD *)v17 + 10) = *(_DWORD *)(CcNumberActiveCompleteAsyncReadWorkItems + 4 * v4);
        ++*(_DWORD *)(v20 + 4 * v4);
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
      *(_DWORD *)ListEntry[9] = -1073741670;
      CcCompleteAsyncRead(ListEntry);
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[6].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[6].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)ListEntry);
      }
      else
      {
        ++P->FreeMisses;
        ((void (__fastcall *)(__int64 *))P->FreeEx)(ListEntry);
      }
    }
  }
}
