/*
 * XREFs of CcCompleteAsyncReadWorker @ 0x1400EC3CC
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     CcFindNextWorkQueueEntry @ 0x1400B4E2C (CcFindNextWorkQueueEntry.c)
 *     CcCompleteAsyncRead @ 0x1400FB54C (CcCompleteAsyncRead.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
  _QWORD *v11; // rcx
  signed __int64 v12; // rcx
  ULONG_PTR v13; // rtt

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
      v8 = KeAbPreAcquire((ULONG_PTR)&CcAsyncReadWorkQueueLock, 0LL, 0LL);
      v9 = _interlockedbittestandset64((volatile signed __int32 *)&CcAsyncReadWorkQueueLock, 0LL);
      v10 = v8;
      if ( v9 )
        ExfAcquirePushLockExclusiveEx(&CcAsyncReadWorkQueueLock, v8, (ULONG_PTR)&CcAsyncReadWorkQueueLock);
      if ( v10 )
        *(_BYTE *)(v10 + 26) |= 1u;
      v11 = (_QWORD *)(v4 + CcAsyncReadCompletionWorkQueue);
      if ( (_QWORD *)*v11 == v11 )
      {
        v1 = 1;
        --*(_DWORD *)(CcNumberActiveCompleteAsyncReadWorkItems + 4 * v5);
      }
      else
      {
        NextWorkQueueEntry = (_SLIST_ENTRY *)CcFindNextWorkQueueEntry(v11);
      }
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
    }
    while ( !v1 );
    ExFreePoolWithTag(P, 0x71576343u);
  }
}
