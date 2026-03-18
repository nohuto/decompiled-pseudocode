/*
 * XREFs of CcAsyncReadWorker @ 0x1400FB99C
 * Callers:
 *     CcAsyncReadWorkerThread @ 0x140001A90 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     CcFindNextWorkQueueEntry @ 0x1400B4E2C (CcFindNextWorkQueueEntry.c)
 *     CcCompleteAsyncRead @ 0x1400FB54C (CcCompleteAsyncRead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400FBF2C (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcAsyncReadPrefetch @ 0x1400FC10C (CcAsyncReadPrefetch.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400FF968 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1400FFC1C (CcShouldSpinAsyncReadWorkerThread.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall CcAsyncReadWorker(_DWORD *StartContext)
{
  unsigned int v1; // eax
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // r13
  __int64 v5; // r15
  void *v6; // r12
  unsigned int v7; // edi
  int v8; // ecx
  __int64 v9; // r14
  PSLIST_ENTRY v10; // rbx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  __int64 v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rcx
  _QWORD *NextWorkQueueEntry; // rbx
  signed __int64 v18; // rcx
  ULONG_PTR v19; // rtt
  _QWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rbx
  signed __int64 v23; // rcx
  ULONG_PTR v24; // rtt
  __int64 v25; // rax
  __int64 v26; // rbx
  signed __int64 v27; // rcx
  ULONG_PTR v28; // rtt
  PWORK_QUEUE_ITEM v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  PSLIST_ENTRY v32; // rax
  __int64 v33; // rax
  struct _KPRCB *v34; // rcx
  _GENERAL_LOOKASIDE *L; // r8
  unsigned int v36; // [rsp+30h] [rbp-D0h]
  PWORK_QUEUE_ITEM WorkItem[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v38[64]; // [rsp+50h] [rbp-B0h] BYREF
  PSLIST_ENTRY ListEntry[64]; // [rsp+250h] [rbp+150h] BYREF

  if ( !StartContext )
    return;
  v1 = StartContext[10];
  v2 = (unsigned int)StartContext[9];
  v3 = 0LL;
  WorkItem[0] = 0LL;
  v36 = v1;
  memset(v38, 0, sizeof(v38));
  memset(ListEntry, 0, sizeof(ListEntry));
  v4 = (unsigned int)v2;
  v5 = CcReaderThreadsStats + 404 * v2;
  v6 = (void *)(CcNewAsyncReadRequestEvent + 24 * v2);
  if ( (unsigned int)CcMaxAsyncReadItemsPerThread >= 0x40 )
    CcMaxAsyncReadItemsPerThread = 63;
  do
  {
    if ( (unsigned int)v3 >= CcMaxAsyncReadItemsPerThread
      || *(_QWORD *)(CcAsyncReadWorkQueue + 16 * v4) == CcAsyncReadWorkQueue + 16 * v4 )
    {
      if ( !(_DWORD)v3 )
      {
        v7 = KeWaitForSingleObject(v6, Executive, 0, 0, 0LL);
LABEL_26:
        v8 = 0;
        goto LABEL_11;
      }
      v7 = MmWaitMultipleForCacheManagerPrefetch(v38, (unsigned int)v3, v6);
    }
    else
    {
      v7 = v3 + 1;
    }
    if ( !(_DWORD)v3 || v7 >= (unsigned int)v3 )
      goto LABEL_26;
    v8 = 1;
LABEL_11:
    if ( v8 )
    {
      if ( v7 < (unsigned int)v3 )
      {
        _mm_lfence();
        v9 = v7;
        v10 = ListEntry[v9];
        if ( v10 )
        {
          Next = v10[3].Next;
          if ( Next )
          {
            ExFreePoolWithTag(Next, 0x73416343u);
            *((_BYTE *)&v10[6].Next + 8) = 6;
            v10[3].Next = 0LL;
            v38[v7] = 0LL;
            ListEntry[v7] = 0LL;
            if ( *((_DWORD *)&v10[1].Next[32].Next + 2) == 1 && *((_DWORD *)&v10[2].Next + 2) <= 0x20000u )
            {
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
                RtlpInterlockedPushEntrySList(&P->ListHead, v10);
              }
              else
              {
                ++P->FreeMisses;
                ((void (__fastcall *)(PSLIST_ENTRY))P->FreeEx)(v10);
              }
            }
            else
            {
              CcPostWorkQueueAsyncRead(v10);
            }
            v3 = (unsigned int)(v3 - 1);
            if ( v7 < (unsigned int)v3 )
            {
              v30 = v7 + 1;
              v31 = (unsigned int)v3 - v7;
              v7 = v3;
              do
              {
                v38[v9++] = v38[v30];
                v32 = ListEntry[v30];
                v30 = (unsigned int)(v30 + 1);
                v38[v9 + 63] = v32;
                --v31;
              }
              while ( v31 );
            }
            v38[v7] = 0LL;
            ListEntry[v7] = 0LL;
            _InterlockedDecrement((volatile signed __int32 *)(v5 + 4LL * v36));
            if ( !v6 )
              v6 = (void *)(CcNewAsyncReadRequestEvent + 24 * v4);
          }
        }
      }
      continue;
    }
    v14 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0LL);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v14, (ULONG_PTR)&CcAsyncReadWorkQueueLock);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    while ( 1 )
    {
      v16 = (_QWORD *)(16 * v4 + CcAsyncReadWorkQueue);
      if ( (_QWORD *)*v16 == v16 )
        break;
      if ( (unsigned int)v3 >= CcMaxAsyncReadItemsPerThread )
      {
        _m_prefetchw(&CcAsyncReadWorkQueueLock);
        if ( (CcAsyncReadWorkQueueLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v23 = CcAsyncReadWorkQueueLock - 16;
        else
          v23 = 0LL;
        if ( (CcAsyncReadWorkQueueLock & 2) != 0
          || (v24 = CcAsyncReadWorkQueueLock,
              v24 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CcAsyncReadWorkQueueLock,
                       v23,
                       CcAsyncReadWorkQueueLock)) )
        {
          ExfReleasePushLock(&CcAsyncReadWorkQueueLock);
        }
        KeAbPostRelease((ULONG_PTR)&CcAsyncReadWorkQueueLock);
        CcShouldSpinAsyncReadWorkerThread(WorkItem, (unsigned int)v4);
        v25 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0LL);
        v26 = v25;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v25, (ULONG_PTR)&CcAsyncReadWorkQueueLock);
        if ( v26 )
          *(_BYTE *)(v26 + 26) |= 1u;
        break;
      }
      NextWorkQueueEntry = CcFindNextWorkQueueEntry(v16);
      _m_prefetchw(&CcAsyncReadWorkQueueLock);
      if ( (CcAsyncReadWorkQueueLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v18 = CcAsyncReadWorkQueueLock - 16;
      else
        v18 = 0LL;
      if ( (CcAsyncReadWorkQueueLock & 2) != 0
        || (v19 = CcAsyncReadWorkQueueLock,
            v19 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CcAsyncReadWorkQueueLock,
                     v18,
                     CcAsyncReadWorkQueueLock)) )
      {
        ExfReleasePushLock(&CcAsyncReadWorkQueueLock);
      }
      KeAbPostRelease((ULONG_PTR)&CcAsyncReadWorkQueueLock);
      if ( !(unsigned __int8)CcAsyncReadPrefetch(NextWorkQueueEntry) )
        goto LABEL_73;
      v20 = (_QWORD *)NextWorkQueueEntry[6];
      if ( !*v20 )
      {
        ExFreePoolWithTag(v20, 0x73416343u);
        v33 = NextWorkQueueEntry[2];
        NextWorkQueueEntry[6] = 0LL;
        *((_BYTE *)NextWorkQueueEntry + 104) = 6;
        if ( *(_DWORD *)(v33 + 520) != 1 || *((_DWORD *)NextWorkQueueEntry + 10) > 0x20000u )
        {
          CcPostWorkQueueAsyncRead((PSLIST_ENTRY)NextWorkQueueEntry);
          goto LABEL_41;
        }
LABEL_73:
        CcCompleteAsyncRead();
        v34 = KeGetCurrentPrcb();
        L = v34->PPLookasideList[6].P;
        ++L->TotalFrees;
        if ( LOWORD(L->ListHead.Alignment) < L->Depth
          || (++L->FreeMisses, L = v34->PPLookasideList[6].L, ++L->TotalFrees, LOWORD(L->ListHead.Alignment) < L->Depth) )
        {
          RtlpInterlockedPushEntrySList(&L->ListHead, (PSLIST_ENTRY)NextWorkQueueEntry);
        }
        else
        {
          ++L->FreeMisses;
          ((void (__fastcall *)(_QWORD *))L->FreeEx)(NextWorkQueueEntry);
        }
        goto LABEL_41;
      }
      v38[v3] = *v20;
      ListEntry[v3] = (PSLIST_ENTRY)NextWorkQueueEntry;
      v3 = (unsigned int)(v3 + 1);
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 4LL * v36));
      if ( (unsigned int)v3 >= CcMaxAsyncReadItemsPerThread )
        v6 = 0LL;
LABEL_41:
      v21 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0LL);
      v22 = v21;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v21, (ULONG_PTR)&CcAsyncReadWorkQueueLock);
      if ( v22 )
        *(_BYTE *)(v22 + 26) |= 1u;
    }
    _m_prefetchw(&CcAsyncReadWorkQueueLock);
    if ( (CcAsyncReadWorkQueueLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v27 = CcAsyncReadWorkQueueLock - 16;
    else
      v27 = 0LL;
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
    v29 = WorkItem[0];
    if ( WorkItem[0] )
    {
      *(_DWORD *)(v5 + 4LL * LODWORD(WorkItem[0][1].List.Blink)) = 0;
      v29->List.Flink = 0LL;
      ExQueueWorkItem(v29, CriticalWorkQueue);
      WorkItem[0] = 0LL;
    }
  }
  while ( !v36 || (_DWORD)v3 );
}
