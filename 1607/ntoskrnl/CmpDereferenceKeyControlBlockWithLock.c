/*
 * XREFs of CmpDereferenceKeyControlBlockWithLock @ 0x140436A10
 * Callers:
 *     CmpUnfreezeHive @ 0x1401B46D8 (CmpUnfreezeHive.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1403E40D4 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpRundownUnitOfWork @ 0x1403FC77C (CmpRundownUnitOfWork.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140435C00 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x1404361A8 (CmpCleanUpKcbValueCache.c)
 *     CmpDereferenceKeyControlBlock @ 0x140436C80 (CmpDereferenceKeyControlBlock.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1404D35A0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpCleanupDiscardReplacePost @ 0x14060B910 (CmpCleanupDiscardReplacePost.c)
 *     CmpCommitDiscardReplacePost @ 0x14060BA04 (CmpCommitDiscardReplacePost.c)
 *     CmpPrepareDiscardReplacePost @ 0x14060BEC4 (CmpPrepareDiscardReplacePost.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14060E88C (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14060F334 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x14000C60C (ExpReleaseFastMutexContended.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400C5CC8 (ExpAcquireFastMutexContended.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140435C00 (CmpCleanUpKcbCacheWithLock.c)
 */

void __fastcall CmpDereferenceKeyControlBlockWithLock(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  signed __int32 v2; // eax
  signed __int32 v4; // ecx
  signed __int32 v5; // ett
  __int16 v6; // ax
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned __int8 v14; // di
  bool v15; // bl
  signed __int32 v16; // eax
  __int64 v17; // rdi
  struct _KTHREAD *CurrentThread; // rax

  v2 = *(_DWORD *)BugCheckParameter4;
  do
  {
    v4 = v2 - 1;
    v5 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter4, v2 - 1, v2);
  }
  while ( v5 != v2 );
  if ( !v4 )
  {
    v6 = *(_WORD *)(BugCheckParameter4 + 178);
    if ( (v6 & 4) != 0 )
    {
      v17 = *(_QWORD *)(BugCheckParameter4 + 24);
      CmpCleanUpKcbCacheWithLock(BugCheckParameter4, a2);
      CurrentThread = KeGetCurrentThread();
      *(_DWORD *)(v17 + 144) |= 0x80u;
      *(_QWORD *)(v17 + 5424) = CurrentThread;
      *(_DWORD *)(v17 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 5500), 1u) & 0x7F) + 5504) = 31;
      if ( (*(_DWORD *)(v17 + 144) & 0x20) == 0 )
        CmpDereferenceHive(v17);
    }
    else
    {
      v7 = *(_DWORD *)(BugCheckParameter4 + 4);
      if ( (v7 & 0x20020) != 0 )
        goto LABEL_20;
      if ( (v7 & 8) != 0 || (v6 & 0x10) != 0 )
      {
        CmpAddToDelayedClose(BugCheckParameter4);
        return;
      }
      if ( CmpHoldLazyFlush )
      {
LABEL_20:
        CmpCleanUpKcbCacheWithLock(BugCheckParameter4, a2);
        if ( *(struct _KTHREAD **)(BugCheckParameter4 + 48) != KeGetCurrentThread() )
          CmpDecommisssionKcb(BugCheckParameter4);
      }
      else
      {
        v8 = KeAbPreAcquire((ULONG_PTR)&CmpDelayedCloseTableLock, 0LL, 0);
        v9 = v8;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
          ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, v8);
        if ( v9 )
          *(_BYTE *)(v9 + 26) |= 1u;
        *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
        v11 = (_QWORD *)(BugCheckParameter4 + 216);
        *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
        v12 = CmpDelayedLRUListHead;
        if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
          __fastfail(3u);
        *v11 = CmpDelayedLRUListHead;
        *(_QWORD *)(BugCheckParameter4 + 224) = &CmpDelayedLRUListHead;
        *(_QWORD *)(v12 + 8) = v11;
        v13 = CmpDelayedCloseElements + 1;
        CmpDelayedLRUListHead = BugCheckParameter4 + 216;
        *(_BYTE *)(BugCheckParameter4 + 56) |= 2u;
        ++qword_1407481D8;
        v14 = *((_BYTE *)&CmpDelayedCloseTableLock + 48);
        v15 = v13 > CmpDelayedCloseSize;
        CmpDelayedCloseElements = v13;
        *(&CmpDelayedCloseTableLock + 1) = 0LL;
        v16 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
        if ( v16 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v16);
        __writecr8(v14);
        KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
        if ( v15 && !_InterlockedExchange(&CmpDelayCloseWorkItemActive, 1) )
          ExQueueWorkItem(&CmpDelayCloseWorkItem, DelayedWorkQueue);
      }
    }
  }
}
