/*
 * XREFs of CcAsyncReadWorker @ 0x14011D044
 * Callers:
 *     CcAsyncReadWorkerThread @ 0x14000633C (CcAsyncReadWorkerThread.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     CcFindNextWorkQueueEntry @ 0x140033044 (CcFindNextWorkQueueEntry.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14011D5E4 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcAsyncReadPrefetch @ 0x14011D7C4 (CcAsyncReadPrefetch.c)
 *     CcCompleteAsyncRead @ 0x14011D990 (CcCompleteAsyncRead.c)
 *     CcPostWorkQueueAsyncRead @ 0x14011DF64 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x14011E33C (CcShouldSpinAsyncReadWorkerThread.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall CcAsyncReadWorker(_DWORD *StartContext)
{
  unsigned int v1; // eax
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // r9
  __int64 v5; // r13
  __int64 v6; // r15
  void *v7; // r12
  unsigned int v8; // edi
  int v9; // ecx
  __int64 v10; // r14
  PSLIST_ENTRY v11; // rbx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  PSLIST_ENTRY v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rbx
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  _QWORD *NextWorkQueueEntry; // rbx
  signed __int64 v25; // rcx
  ULONG_PTR v26; // rtt
  __int64 v27; // r9
  _QWORD *v28; // rcx
  __int64 v29; // rax
  struct _KPRCB *v30; // rcx
  _GENERAL_LOOKASIDE *L; // r8
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rbx
  signed __int64 v35; // rcx
  ULONG_PTR v36; // rtt
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rbx
  signed __int64 v41; // rcx
  ULONG_PTR v42; // rtt
  PWORK_QUEUE_ITEM v43; // rcx
  unsigned int v44; // [rsp+30h] [rbp-D0h]
  PWORK_QUEUE_ITEM WorkItem[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v46[64]; // [rsp+50h] [rbp-B0h] BYREF
  PSLIST_ENTRY ListEntry[64]; // [rsp+250h] [rbp+150h] BYREF

  if ( !StartContext )
    return;
  v1 = StartContext[10];
  v2 = (unsigned int)StartContext[9];
  v3 = 0LL;
  WorkItem[0] = 0LL;
  v44 = v1;
  memset(v46, 0, sizeof(v46));
  memset(ListEntry, 0, sizeof(ListEntry));
  v5 = (unsigned int)v2;
  v6 = CcReaderThreadsStats + 404 * v2;
  v7 = (void *)(CcNewAsyncReadRequestEvent + 24 * v2);
  if ( (unsigned int)CcMaxAsyncReadItemsPerThread >= 0x40 )
    CcMaxAsyncReadItemsPerThread = 63;
  do
  {
    if ( (unsigned int)v3 >= CcMaxAsyncReadItemsPerThread
      || *(_QWORD *)(CcAsyncReadWorkQueue + 16 * v5) == CcAsyncReadWorkQueue + 16 * v5 )
    {
      if ( !(_DWORD)v3 )
      {
        v8 = KeWaitForSingleObject(v7, Executive, 0, 0, 0LL);
        goto LABEL_9;
      }
      v8 = MmWaitMultipleForCacheManagerPrefetch(v46, (unsigned int)v3, v7);
    }
    else
    {
      v8 = v3 + 1;
    }
    if ( (_DWORD)v3 && v8 < (unsigned int)v3 )
    {
      v9 = 1;
      goto LABEL_10;
    }
LABEL_9:
    v9 = 0;
LABEL_10:
    if ( v9 )
    {
      if ( v8 < (unsigned int)v3 )
      {
        _mm_lfence();
        v10 = v8;
        v11 = ListEntry[v10];
        if ( v11 )
        {
          Next = v11[3].Next;
          if ( Next )
          {
            ExFreePoolWithTag(Next, 0x73416343u);
            *((_BYTE *)&v11[6].Next + 8) = 6;
            v11[3].Next = 0LL;
            v46[v8] = 0LL;
            ListEntry[v8] = 0LL;
            if ( *((_DWORD *)&v11[1].Next[32].Next + 2) == 1 && *((_DWORD *)&v11[2].Next + 2) <= 0x20000u )
            {
              CcCompleteAsyncRead(v11);
              CurrentPrcb = KeGetCurrentPrcb();
              P = CurrentPrcb->PPLookasideList[6].P;
              ++P->TotalFrees;
              if ( LOWORD(P->ListHead.Alignment) < P->Depth
                || (++P->FreeMisses,
                    P = CurrentPrcb->PPLookasideList[6].L,
                    ++P->TotalFrees,
                    LOWORD(P->ListHead.Alignment) < P->Depth) )
              {
                RtlpInterlockedPushEntrySList(&P->ListHead, v11);
              }
              else
              {
                ++P->FreeMisses;
                ((void (__fastcall *)(PSLIST_ENTRY))P->FreeEx)(v11);
              }
            }
            else
            {
              CcPostWorkQueueAsyncRead(v11);
            }
            v3 = (unsigned int)(v3 - 1);
            if ( v8 < (unsigned int)v3 )
            {
              v15 = v8 + 1;
              v16 = (unsigned int)v3 - v8;
              v8 = v3;
              do
              {
                v46[v10++] = v46[v15];
                v17 = ListEntry[v15];
                v15 = (unsigned int)(v15 + 1);
                v46[v10 + 63] = v17;
                --v16;
              }
              while ( v16 );
            }
            v46[v8] = 0LL;
            ListEntry[v8] = 0LL;
            _InterlockedDecrement((volatile signed __int32 *)(v6 + 4LL * v44));
            if ( !v7 )
              v7 = (void *)(CcNewAsyncReadRequestEvent + 24 * v5);
          }
        }
      }
      continue;
    }
    v18 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0LL, v4);
    v21 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v18, (ULONG_PTR)&CcAsyncReadWorkQueueLock, v20);
    if ( v21 )
      *(_BYTE *)(v21 + 26) |= 1u;
    while ( 1 )
    {
      v22 = (_QWORD *)(16 * v5 + CcAsyncReadWorkQueue);
      if ( (_QWORD *)*v22 == v22 )
        break;
      if ( (unsigned int)v3 >= CcMaxAsyncReadItemsPerThread )
      {
        _m_prefetchw(&CcAsyncReadWorkQueueLock);
        if ( (CcAsyncReadWorkQueueLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v35 = 0LL;
        else
          v35 = CcAsyncReadWorkQueueLock - 16;
        if ( (CcAsyncReadWorkQueueLock & 2) != 0
          || (v36 = CcAsyncReadWorkQueueLock,
              v36 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CcAsyncReadWorkQueueLock,
                       v35,
                       CcAsyncReadWorkQueueLock)) )
        {
          ExfReleasePushLock(&CcAsyncReadWorkQueueLock, v19);
        }
        KeAbPostRelease((ULONG_PTR)&CcAsyncReadWorkQueueLock);
        CcShouldSpinAsyncReadWorkerThread(WorkItem, (unsigned int)v5);
        v38 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0LL, v37);
        v40 = v38;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v38, (ULONG_PTR)&CcAsyncReadWorkQueueLock, v39);
        if ( v40 )
          *(_BYTE *)(v40 + 26) |= 1u;
        break;
      }
      NextWorkQueueEntry = CcFindNextWorkQueueEntry(v22);
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
      if ( !(unsigned __int8)CcAsyncReadPrefetch(NextWorkQueueEntry) )
        goto LABEL_49;
      v28 = (_QWORD *)NextWorkQueueEntry[6];
      if ( !*v28 )
      {
        ExFreePoolWithTag(v28, 0x73416343u);
        v29 = NextWorkQueueEntry[2];
        NextWorkQueueEntry[6] = 0LL;
        *((_BYTE *)NextWorkQueueEntry + 104) = 6;
        if ( *(_DWORD *)(v29 + 520) != 1 || *((_DWORD *)NextWorkQueueEntry + 10) > 0x20000u )
        {
          CcPostWorkQueueAsyncRead((PSLIST_ENTRY)NextWorkQueueEntry);
          goto LABEL_53;
        }
LABEL_49:
        CcCompleteAsyncRead(NextWorkQueueEntry);
        v30 = KeGetCurrentPrcb();
        L = v30->PPLookasideList[6].P;
        ++L->TotalFrees;
        if ( LOWORD(L->ListHead.Alignment) < L->Depth
          || (++L->FreeMisses, L = v30->PPLookasideList[6].L, ++L->TotalFrees, LOWORD(L->ListHead.Alignment) < L->Depth) )
        {
          RtlpInterlockedPushEntrySList(&L->ListHead, (PSLIST_ENTRY)NextWorkQueueEntry);
        }
        else
        {
          ++L->FreeMisses;
          ((void (__fastcall *)(_QWORD *))L->FreeEx)(NextWorkQueueEntry);
        }
        goto LABEL_53;
      }
      v46[v3] = *v28;
      ListEntry[v3] = (PSLIST_ENTRY)NextWorkQueueEntry;
      v3 = (unsigned int)(v3 + 1);
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 4LL * v44));
      if ( (unsigned int)v3 >= CcMaxAsyncReadItemsPerThread )
        v7 = 0LL;
LABEL_53:
      v32 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0LL, v27);
      v34 = v32;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v32, (ULONG_PTR)&CcAsyncReadWorkQueueLock, v33);
      if ( v34 )
        *(_BYTE *)(v34 + 26) |= 1u;
    }
    _m_prefetchw(&CcAsyncReadWorkQueueLock);
    if ( (CcAsyncReadWorkQueueLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v41 = 0LL;
    else
      v41 = CcAsyncReadWorkQueueLock - 16;
    if ( (CcAsyncReadWorkQueueLock & 2) != 0
      || (v42 = CcAsyncReadWorkQueueLock,
          v42 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CcAsyncReadWorkQueueLock,
                   v41,
                   CcAsyncReadWorkQueueLock)) )
    {
      ExfReleasePushLock(&CcAsyncReadWorkQueueLock, v19);
    }
    KeAbPostRelease((ULONG_PTR)&CcAsyncReadWorkQueueLock);
    v43 = WorkItem[0];
    if ( WorkItem[0] )
    {
      *(_DWORD *)(v6 + 4LL * LODWORD(WorkItem[0][1].List.Blink)) = 0;
      v43->List.Flink = 0LL;
      ExQueueWorkItem(v43, CriticalWorkQueue);
      WorkItem[0] = 0LL;
    }
  }
  while ( !v44 || (_DWORD)v3 );
}
