/*
 * XREFs of CmpCleanUpKcbCacheWithLock @ 0x140435C00
 * Callers:
 *     CmpSearchKeyControlBlockTreeEx @ 0x1401B4AC0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpCleanUpKCBCacheTable @ 0x1403E3ED8 (CmpCleanUpKCBCacheTable.c)
 *     CmpDelayCloseWorker @ 0x1404245C0 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140436A10 (CmpDereferenceKeyControlBlockWithLock.c)
 * Callees:
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x14000A8E0 (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpRemoveKeyHash @ 0x1403FA7F8 (CmpRemoveKeyHash.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1403FA840 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1403FAF00 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140435CE0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x1404361A8 (CmpCleanUpKcbValueCache.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14043622C (CmpDelayDerefKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140436A10 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpEtwDumpKcb @ 0x1405FB9D4 (CmpEtwDumpKcb.c)
 */

void __fastcall CmpCleanUpKcbCacheWithLock(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  ULONG_PTR v2; // rbp
  char v3; // si
  _QWORD *v5; // rcx
  ULONG_PTR v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax

  v2 = 0LL;
  v3 = a2;
  if ( !*(_DWORD *)BugCheckParameter4 )
  {
    if ( CmpTraceRoutine )
    {
      LOBYTE(a2) = 23;
      CmpEtwDumpKcb(BugCheckParameter4, a2);
    }
    CmpCleanUpKcbValueCache(BugCheckParameter4);
    CmpDereferenceNameControlBlockWithLock(*(PVOID *)(BugCheckParameter4 + 72));
    if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter4 + 104), 0x6E494D43u);
    v5 = *(_QWORD **)(BugCheckParameter4 + 184);
    if ( v5 )
    {
      v7 = v5[3];
      if ( v7 )
      {
        v8 = *v5;
        v2 = *(_QWORD *)(v7 + 16);
        v9 = (_QWORD *)v5[1];
        if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v9 != v5 )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
      }
      ExFreePoolWithTag(v5, 0);
      *(_QWORD *)(BugCheckParameter4 + 184) = 0LL;
    }
    v6 = *(_QWORD *)(BugCheckParameter4 + 64);
    if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 0x20000) != 0 )
    {
      CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4);
      CmpRemoveKeyHashFromDeletedKcbTable(*(_QWORD *)(BugCheckParameter4 + 24), (_DWORD *)(BugCheckParameter4 + 8));
      CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
    }
    else
    {
      CmpRemoveKeyHash(*(_QWORD *)(BugCheckParameter4 + 24), (_DWORD *)(BugCheckParameter4 + 8));
    }
    *(_DWORD *)(BugCheckParameter4 + 4) |= 0x80000u;
    if ( v2 )
    {
      if ( v3 )
        CmpDereferenceKeyControlBlockWithLock(v2);
      else
        CmpDelayDerefKeyControlBlock(v2);
    }
    if ( v6 )
    {
      if ( v3 )
        CmpDereferenceKeyControlBlockWithLock(v6);
      else
        CmpDelayDerefKeyControlBlock(v6);
    }
  }
}
