/*
 * XREFs of CmpDereferenceKeyControlBlockWithLock @ 0x1403FB7B0
 * Callers:
 *     CmpUnfreezeHive @ 0x1401A9ED0 (CmpUnfreezeHive.c)
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     CmpRundownUnitOfWork @ 0x1403DE734 (CmpRundownUnitOfWork.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmpAddInfoAfterParseFailure @ 0x1403E0290 (CmpAddInfoAfterParseFailure.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1403F99D0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x1403F9C74 (CmpCleanUpKcbValueCache.c)
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x1403FB8A0 (CmpDereferenceKeyControlBlock.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x1404036E0 (CmpDeleteKeyObject.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x140499880 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmpRefreshParent @ 0x1405EC198 (CmpRefreshParent.c)
 * Callees:
 *     CmpDereferenceHive @ 0x1403DCA48 (CmpDereferenceHive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1403F99D0 (CmpCleanUpKcbCacheWithLock.c)
 */

void __fastcall CmpDereferenceKeyControlBlockWithLock(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  signed __int32 v2; // eax
  signed __int32 v4; // ecx
  signed __int32 v5; // ett
  int v6; // eax
  ULONG_PTR v7; // rcx
  __int64 v8; // rdi
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
    if ( (*(_BYTE *)(BugCheckParameter4 + 186) & 4) != 0 )
    {
      v8 = *(_QWORD *)(BugCheckParameter4 + 32);
      CmpCleanUpKcbCacheWithLock(BugCheckParameter4, a2);
      CurrentThread = KeGetCurrentThread();
      *(_DWORD *)(v8 + 144) |= 0x80u;
      *(_QWORD *)(v8 + 5424) = CurrentThread;
      *(_DWORD *)(v8 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 5500), 1u) & 0x7F) + 5504) = 31;
      if ( (*(_DWORD *)(v8 + 144) & 0x20) == 0 )
        CmpDereferenceHive(v8);
    }
    else
    {
      if ( CmpHoldLazyFlush > 0
        && (*(_WORD *)(BugCheckParameter4 + 186) & 0x10) == 0
        && (*(_BYTE *)(BugCheckParameter4 + 4) & 8) == 0
        || (v6 = *(_DWORD *)(BugCheckParameter4 + 4), (v6 & 0x20) != 0) )
      {
        v7 = BugCheckParameter4;
      }
      else
      {
        v7 = BugCheckParameter4;
        if ( (v6 & 0x20000) == 0 )
        {
          CmpAddToDelayedClose(BugCheckParameter4);
          return;
        }
      }
      CmpCleanUpKcbCacheWithLock(v7, a2);
      if ( *(struct _KTHREAD **)(BugCheckParameter4 + 56) != KeGetCurrentThread() )
        CmpDecommisssionKcb(BugCheckParameter4);
    }
  }
}
