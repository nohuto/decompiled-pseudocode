/*
 * XREFs of CcAsyncReadWorker @ 0x14013DE8C
 * Callers:
 *     CcAsyncReadWorkerThread @ 0x1401B115C (CcAsyncReadWorkerThread.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     CcPostWorkQueueAsyncRead @ 0x14006D8B8 (CcPostWorkQueueAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x14006DB58 (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcAsyncReadPrefetch @ 0x14006DBE0 (CcAsyncReadPrefetch.c)
 *     CcCompleteAsyncRead @ 0x14006E664 (CcCompleteAsyncRead.c)
 *     CcFindNextWorkQueueEntry @ 0x140071B5C (CcFindNextWorkQueueEntry.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400A7D6C (MmWaitMultipleForCacheManagerPrefetch.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
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
  _BYTE *v14; // rax
  _BYTE *v15; // rbx
  _QWORD *v16; // rcx
  _QWORD *NextWorkQueueEntry; // rbx
  signed __int64 v18; // rcx
  ULONG_PTR v19; // rtt
  _QWORD *v20; // rcx
  _BYTE *v21; // rax
  _BYTE *v22; // rbx
  signed __int64 v23; // rcx
  ULONG_PTR v24; // rtt
  PWORK_QUEUE_ITEM v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  PSLIST_ENTRY v28; // rax
  __int64 v29; // rax
  struct _KPRCB *v30; // rcx
  _GENERAL_LOOKASIDE *L; // r8
  signed __int64 v32; // rcx
  ULONG_PTR v33; // rtt
  _BYTE *v34; // rax
  _BYTE *v35; // rbx
  unsigned int v36; // [rsp+30h] [rbp-D0h]
  PWORK_QUEUE_ITEM WorkItem; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v38[64]; // [rsp+40h] [rbp-C0h] BYREF
  PSLIST_ENTRY ListEntry[64]; // [rsp+240h] [rbp+140h] BYREF

  if ( !StartContext )
    return;
  v1 = StartContext[10];
  v2 = (unsigned int)StartContext[9];
  v3 = 0LL;
  WorkItem = 0LL;
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
LABEL_25:
        v8 = 0;
        goto LABEL_11;
      }
      v7 = MmWaitMultipleForCacheManagerPrefetch((__int64)v38, v3, v6);
    }
    else
    {
      v7 = v3 + 1;
    }
    if ( !(_DWORD)v3 || v7 >= (unsigned int)v3 )
      goto LABEL_25;
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
            *((_BYTE *)&v10[7].Next + 8) = 6;
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
              CcPostWorkQueueAsyncRead((__int64 *)v10, 0LL);
            }
            v3 = (unsigned int)(v3 - 1);
            if ( v7 < (unsigned int)v3 )
            {
              v26 = v7 + 1;
              v27 = (unsigned int)v3 - v7;
              v7 = v3;
              do
              {
                v38[v9++] = v38[v26];
                v28 = ListEntry[v26];
                v26 = (unsigned int)(v26 + 1);
                v38[v9 + 63] = v28;
                --v27;
              }
              while ( v27 );
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
    v14 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v14, (ULONG_PTR)&CcAsyncReadWorkQueueLock);
    if ( v15 )
      v15[26] |= 1u;
    while ( 1 )
    {
      v16 = (_QWORD *)(16 * v4 + CcAsyncReadWorkQueue);
      if ( (_QWORD *)*v16 == v16 )
        break;
      if ( (unsigned int)v3 >= CcMaxAsyncReadItemsPerThread )
      {
        _m_prefetchw(&CcAsyncReadWorkQueueLock);
        if ( (CcAsyncReadWorkQueueLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v32 = 0LL;
        else
          v32 = CcAsyncReadWorkQueueLock - 16;
        if ( (CcAsyncReadWorkQueueLock & 2) != 0
          || (v33 = CcAsyncReadWorkQueueLock,
              v33 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CcAsyncReadWorkQueueLock,
                       v32,
                       CcAsyncReadWorkQueueLock)) )
        {
          ExfReleasePushLock(&CcAsyncReadWorkQueueLock);
        }
        KeAbPostRelease((ULONG_PTR)&CcAsyncReadWorkQueueLock);
        CcShouldSpinAsyncReadWorkerThread((__int64 **)&WorkItem, v4);
        v34 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0);
        v35 = v34;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v34, (ULONG_PTR)&CcAsyncReadWorkQueueLock);
        if ( v35 )
          v35[26] |= 1u;
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
      if ( !CcAsyncReadPrefetch((__int64)NextWorkQueueEntry) )
        goto LABEL_62;
      v20 = (_QWORD *)NextWorkQueueEntry[6];
      if ( !*v20 )
      {
        ExFreePoolWithTag(v20, 0x73416343u);
        v29 = NextWorkQueueEntry[2];
        NextWorkQueueEntry[6] = 0LL;
        *((_BYTE *)NextWorkQueueEntry + 120) = 6;
        if ( *(_DWORD *)(v29 + 520) != 1 || *((_DWORD *)NextWorkQueueEntry + 10) > 0x20000u )
        {
          CcPostWorkQueueAsyncRead(NextWorkQueueEntry, 0LL);
          goto LABEL_40;
        }
LABEL_62:
        CcCompleteAsyncRead();
        v30 = KeGetCurrentPrcb();
        L = v30->PPLookasideList[6].P;
        ++L->TotalFrees;
        if ( LOWORD(L->ListHead.Alignment) >= L->Depth
          && (++L->FreeMisses, L = v30->PPLookasideList[6].L, ++L->TotalFrees, LOWORD(L->ListHead.Alignment) >= L->Depth) )
        {
          ++L->FreeMisses;
          ((void (__fastcall *)(_QWORD *))L->FreeEx)(NextWorkQueueEntry);
        }
        else
        {
          RtlpInterlockedPushEntrySList(&L->ListHead, (PSLIST_ENTRY)NextWorkQueueEntry);
        }
        goto LABEL_40;
      }
      v38[v3] = *v20;
      ListEntry[v3] = (PSLIST_ENTRY)NextWorkQueueEntry;
      v3 = (unsigned int)(v3 + 1);
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 4LL * v36));
      if ( (unsigned int)v3 >= CcMaxAsyncReadItemsPerThread )
        v6 = 0LL;
LABEL_40:
      v21 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0);
      v22 = v21;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v21, (ULONG_PTR)&CcAsyncReadWorkQueueLock);
      if ( v22 )
        v22[26] |= 1u;
    }
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
    v25 = WorkItem;
    if ( WorkItem )
    {
      *(_DWORD *)(v5 + 4LL * LODWORD(WorkItem[1].List.Blink)) = 0;
      v25->List.Flink = 0LL;
      ExQueueWorkItem(v25, CriticalWorkQueue);
      WorkItem = 0LL;
    }
  }
  while ( !v36 || (_DWORD)v3 );
}
