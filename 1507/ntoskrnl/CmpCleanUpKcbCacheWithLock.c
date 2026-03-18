/*
 * XREFs of CmpCleanUpKcbCacheWithLock @ 0x1404CB304
 * Callers:
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDelayCloseWorker @ 0x1404CA510 (CmpDelayCloseWorker.c)
 *     CmpCleanUpKCBCacheTable @ 0x1404EDAE0 (CmpCleanUpKCBCacheTable.c)
 *     CmpSearchKeyControlBlockTree @ 0x140656F6C (CmpSearchKeyControlBlockTree.c)
 * Callees:
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x14012A410 (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1404470F4 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140447D3C (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1404CB3D0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x1404CC8C0 (CmpCleanUpKcbValueCache.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1404CC960 (CmpDelayDerefKeyControlBlock.c)
 *     CmpRemoveKeyHash @ 0x14052B5B0 (CmpRemoveKeyHash.c)
 *     CmpEtwDumpKcb @ 0x140652FB0 (CmpEtwDumpKcb.c)
 */

void __fastcall CmpCleanUpKcbCacheWithLock(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  char v2; // si
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  ULONG_PTR v7; // rdi

  v2 = a2;
  if ( !*(_DWORD *)BugCheckParameter4 )
  {
    if ( CmpTraceRoutine )
    {
      LOBYTE(a2) = 23;
      CmpEtwDumpKcb(BugCheckParameter4, a2);
    }
    CmpCleanUpKcbValueCache(BugCheckParameter4);
    CmpDereferenceNameControlBlockWithLock(*(PVOID *)(BugCheckParameter4 + 80));
    if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter4 + 112), 0x6E494D43u);
    v7 = *(_QWORD *)(BugCheckParameter4 + 72);
    if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 0x20000) != 0 )
    {
      if ( *(_QWORD *)(BugCheckParameter4 + 24) != -1LL )
      {
        CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4, v4, v5, v6);
        CmpRemoveKeyHashFromDeletedKcbTable(*(_QWORD *)(BugCheckParameter4 + 32), (_DWORD *)(BugCheckParameter4 + 16));
        CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
      }
    }
    else
    {
      CmpRemoveKeyHash(*(_QWORD *)(BugCheckParameter4 + 32), BugCheckParameter4 + 16);
    }
    *(_DWORD *)(BugCheckParameter4 + 4) |= 0x80000u;
    if ( v7 )
    {
      if ( v2 )
      {
        LOBYTE(v4) = v2;
        CmpDereferenceKeyControlBlockWithLock(v7, v4, v5, v6);
      }
      else
      {
        CmpDelayDerefKeyControlBlock(v7);
      }
    }
  }
}
