/*
 * XREFs of CmpCleanUpKcbCacheWithLock @ 0x1403F99D0
 * Callers:
 *     CmpDelayCloseWorker @ 0x1403F9EB0 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1403FB7B0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmpCleanUpKCBCacheTable @ 0x14049979C (CmpCleanUpKCBCacheTable.c)
 *     CmpSearchKeyControlBlockTree @ 0x1405E1248 (CmpSearchKeyControlBlockTree.c)
 * Callees:
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x1400EB160 (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1403DB1AC (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1403DC2D0 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1403F9B10 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x1403F9C74 (CmpCleanUpKcbValueCache.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1403F9D0C (CmpDelayDerefKeyControlBlock.c)
 *     CmpEtwDumpKcb @ 0x1405DDA84 (CmpEtwDumpKcb.c)
 */

void __fastcall CmpCleanUpKcbCacheWithLock(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  char v2; // si
  ULONG_PTR v4; // rdi
  __int64 *v5; // rdx
  __int64 v6; // rax

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
    v4 = *(_QWORD *)(BugCheckParameter4 + 72);
    if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 0x20000) != 0 )
    {
      if ( *(_QWORD *)(BugCheckParameter4 + 24) != -1LL )
      {
        CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4);
        CmpRemoveKeyHashFromDeletedKcbTable(*(_QWORD *)(BugCheckParameter4 + 32), (_DWORD *)(BugCheckParameter4 + 16));
        CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
      }
    }
    else
    {
      v5 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 2800LL)
                     + 8
                     * (3
                      * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 2808LL) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9)))
                      + 2));
      if ( v5 )
      {
        do
        {
          v6 = *v5;
          if ( !*v5 )
            break;
          if ( v6 == BugCheckParameter4 + 16 )
          {
            *v5 = *(_QWORD *)(v6 + 8);
            break;
          }
          v5 = (__int64 *)(v6 + 8);
        }
        while ( v6 != -8 );
      }
    }
    *(_DWORD *)(BugCheckParameter4 + 4) |= 0x80000u;
    if ( v4 )
    {
      if ( v2 )
        CmpDereferenceKeyControlBlockWithLock(v4);
      else
        CmpDelayDerefKeyControlBlock(v4);
    }
  }
}
