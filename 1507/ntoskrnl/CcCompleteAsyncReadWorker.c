/*
 * XREFs of CcCompleteAsyncReadWorker @ 0x14011CED4
 * Callers:
 *     <none>
 * Callees:
 *     CcFindNextWorkQueueEntry @ 0x140033044 (CcFindNextWorkQueueEntry.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     CcCompleteAsyncRead @ 0x14011D990 (CcCompleteAsyncRead.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall CcCompleteAsyncReadWorker(_QWORD *P)
{
  char v1; // r15
  _SLIST_ENTRY *NextWorkQueueEntry; // rsi
  __int64 v4; // r14
  __int64 v5; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *L; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  signed __int8 v12; // cf
  __int64 v13; // rbx
  _QWORD *v14; // rcx
  signed __int64 v15; // rcx
  ULONG_PTR v16; // rtt

  v1 = 0;
  if ( *((_DWORD *)P + 8) == 4 )
  {
    NextWorkQueueEntry = (_SLIST_ENTRY *)P[6];
    v4 = 16LL * *((unsigned int *)P + 9);
    v5 = *((unsigned int *)P + 9);
    do
    {
      CcCompleteAsyncRead(NextWorkQueueEntry);
      CurrentPrcb = KeGetCurrentPrcb();
      L = CurrentPrcb->PPLookasideList[6].P;
      ++L->TotalFrees;
      if ( LOWORD(L->ListHead.Alignment) < L->Depth
        || (++L->FreeMisses,
            L = CurrentPrcb->PPLookasideList[6].L,
            ++L->TotalFrees,
            LOWORD(L->ListHead.Alignment) < L->Depth) )
      {
        RtlpInterlockedPushEntrySList(&L->ListHead, NextWorkQueueEntry);
      }
      else
      {
        ++L->FreeMisses;
        ((void (__fastcall *)(_SLIST_ENTRY *))L->FreeEx)(NextWorkQueueEntry);
      }
      NextWorkQueueEntry = 0LL;
      v9 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0LL, v8);
      v12 = _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL);
      v13 = v9;
      if ( v12 )
        ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v9, (ULONG_PTR)&CcAsyncReadWorkQueueLock, v11);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      v14 = (_QWORD *)(v4 + CcAsyncReadCompletionWorkQueue);
      if ( (_QWORD *)*v14 == v14 )
      {
        v1 = 1;
        --*(_DWORD *)(CcNumberActiveCompleteAsyncReadWorkItems + 4 * v5);
      }
      else
      {
        NextWorkQueueEntry = (_SLIST_ENTRY *)CcFindNextWorkQueueEntry(v14);
      }
      _m_prefetchw(&CcAsyncReadWorkQueueLock);
      if ( (CcAsyncReadWorkQueueLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v15 = 0LL;
      else
        v15 = CcAsyncReadWorkQueueLock - 16;
      if ( (CcAsyncReadWorkQueueLock & 2) != 0
        || (v16 = CcAsyncReadWorkQueueLock,
            v16 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CcAsyncReadWorkQueueLock,
                     v15,
                     CcAsyncReadWorkQueueLock)) )
      {
        ExfReleasePushLock(&CcAsyncReadWorkQueueLock, v10);
      }
      KeAbPostRelease((ULONG_PTR)&CcAsyncReadWorkQueueLock);
    }
    while ( !v1 );
    ExFreePoolWithTag(P, 0x71576343u);
  }
}
