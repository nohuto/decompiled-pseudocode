/*
 * XREFs of CcCompleteAsyncReadWorker @ 0x14006D314
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     CcCompleteAsyncRead @ 0x14006E664 (CcCompleteAsyncRead.c)
 *     CcFindNextWorkQueueEntry @ 0x140071B5C (CcFindNextWorkQueueEntry.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall CcCompleteAsyncReadWorker(_QWORD *P)
{
  char v1; // r15
  _SLIST_ENTRY *NextWorkQueueEntry; // rsi
  __int64 v4; // r14
  __int64 v5; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *L; // r8
  __int64 v8; // rax
  signed __int8 v9; // cf
  __int64 v10; // rbx
  signed __int64 v11; // rcx
  ULONG_PTR v12; // rtt

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
      if ( LOWORD(L->ListHead.Alignment) >= L->Depth
        && (++L->FreeMisses,
            L = CurrentPrcb->PPLookasideList[6].L,
            ++L->TotalFrees,
            LOWORD(L->ListHead.Alignment) >= L->Depth) )
      {
        ++L->FreeMisses;
        ((void (__fastcall *)(_SLIST_ENTRY *))L->FreeEx)(NextWorkQueueEntry);
      }
      else
      {
        RtlpInterlockedPushEntrySList(&L->ListHead, NextWorkQueueEntry);
      }
      NextWorkQueueEntry = 0LL;
      v8 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0);
      v9 = _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL);
      v10 = v8;
      if ( v9 )
        ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v8, &CcAsyncReadWorkQueueLock);
      if ( v10 )
        *(_BYTE *)(v10 + 26) |= 1u;
      if ( *(_QWORD *)(v4 + CcAsyncReadCompletionWorkQueue) == v4 + CcAsyncReadCompletionWorkQueue )
      {
        v1 = 1;
        --*(_DWORD *)(CcNumberActiveCompleteAsyncReadWorkItems + 4 * v5);
      }
      else
      {
        NextWorkQueueEntry = (_SLIST_ENTRY *)CcFindNextWorkQueueEntry();
      }
      _m_prefetchw(&CcAsyncReadWorkQueueLock);
      if ( (CcAsyncReadWorkQueueLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v11 = CcAsyncReadWorkQueueLock - 16;
      else
        v11 = 0LL;
      if ( (CcAsyncReadWorkQueueLock & 2) != 0
        || (v12 = CcAsyncReadWorkQueueLock,
            v12 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&CcAsyncReadWorkQueueLock,
                     v11,
                     CcAsyncReadWorkQueueLock)) )
      {
        ExfReleasePushLock(&CcAsyncReadWorkQueueLock);
      }
      KeAbPostRelease((ULONG_PTR)&CcAsyncReadWorkQueueLock);
    }
    while ( !v1 );
    ExFreePoolWithTag(P, 0x71576343u);
  }
}
