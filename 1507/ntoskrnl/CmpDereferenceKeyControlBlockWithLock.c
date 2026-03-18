/*
 * XREFs of CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0
 * Callers:
 *     CmpUnfreezeHive @ 0x1401DFB54 (CmpUnfreezeHive.c)
 *     CmpAddInfoAfterParseFailure @ 0x14042A390 (CmpAddInfoAfterParseFailure.c)
 *     CmpRundownUnitOfWork @ 0x1404482CC (CmpRundownUnitOfWork.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpCreateLinkNode @ 0x1404B0468 (CmpCreateLinkNode.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x1404C1BA0 (CmpDeleteKeyObject.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404C8650 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404CB304 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 *     CmpCleanUpKcbValueCache @ 0x1404CC8C0 (CmpCleanUpKcbValueCache.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1404EDBF8 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1406584F0 (CmpDoBuildVirtualStack.c)
 *     CmpRefreshParent @ 0x140664730 (CmpRefreshParent.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404CB304 (CmpCleanUpKcbCacheWithLock.c)
 */

void __fastcall CmpDereferenceKeyControlBlockWithLock(ULONG_PTR BugCheckParameter4, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // eax
  signed __int32 v6; // ecx
  signed __int32 v7; // ett
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v12; // rcx
  unsigned __int8 v13; // di
  bool v14; // bl
  signed __int32 v15; // eax
  __int64 v16; // rdi
  struct _KTHREAD *CurrentThread; // rax

  v4 = *(_DWORD *)BugCheckParameter4;
  do
  {
    v6 = v4 - 1;
    v7 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter4, v4 - 1, v4);
  }
  while ( v7 != v4 );
  if ( !v6 )
  {
    if ( (*(_BYTE *)(BugCheckParameter4 + 186) & 4) != 0 )
    {
      v16 = *(_QWORD *)(BugCheckParameter4 + 32);
      CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
      CurrentThread = KeGetCurrentThread();
      *(_DWORD *)(v16 + 144) |= 0x80u;
      *(_QWORD *)(v16 + 5424) = CurrentThread;
      *(_DWORD *)(v16 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 5500), 1u) & 0x7F) + 5504) = 31;
      if ( (*(_DWORD *)(v16 + 144) & 0x20) == 0 )
        CmpDereferenceHive(v16);
    }
    else if ( CmpHoldLazyFlush > 0
           && (*(_WORD *)(BugCheckParameter4 + 186) & 0x10) == 0
           && (*(_BYTE *)(BugCheckParameter4 + 4) & 8) == 0
           || (v8 = *(_DWORD *)(BugCheckParameter4 + 4), (v8 & 0x20) != 0)
           || (v8 & 0x20000) != 0 )
    {
      CmpCleanUpKcbCacheWithLock(BugCheckParameter4);
      if ( *(struct _KTHREAD **)(BugCheckParameter4 + 56) != KeGetCurrentThread() )
        CmpDecommisssionKcb(BugCheckParameter4);
    }
    else
    {
      v9 = KeAbPreAcquire((ULONG_PTR)&CmpDelayedCloseTableLock, 0LL, 0LL, a4);
      v10 = v9;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, v9);
      if ( v10 )
        *(_BYTE *)(v10 + 26) |= 1u;
      v12 = CmpDelayedLRUListHead;
      *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
      *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
      *(_QWORD *)(BugCheckParameter4 + 216) = CmpDelayedLRUListHead;
      *(_QWORD *)(BugCheckParameter4 + 224) = &CmpDelayedLRUListHead;
      if ( *(__int64 **)(v12 + 8) != &CmpDelayedLRUListHead )
        __fastfail(3u);
      *(_QWORD *)(v12 + 8) = BugCheckParameter4 + 216;
      CmpDelayedLRUListHead = BugCheckParameter4 + 216;
      *(_DWORD *)(BugCheckParameter4 + 8) |= 2u;
      ++qword_14077F048;
      v13 = *((_BYTE *)&CmpDelayedCloseTableLock + 48);
      v14 = ++CmpDelayedCloseElements > (unsigned int)CmpDelayedCloseSize;
      *(&CmpDelayedCloseTableLock + 1) = 0LL;
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
      if ( v15 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v15);
      __writecr8(v13);
      KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
      if ( v14 && !_InterlockedExchange(&CmpDelayCloseWorkItemActive, 1) )
        ExQueueWorkItem(&CmpDelayCloseWorkItem, DelayedWorkQueue);
    }
  }
}
