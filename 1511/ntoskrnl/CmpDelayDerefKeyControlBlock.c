/*
 * XREFs of CmpDelayDerefKeyControlBlock @ 0x1403F9D0C
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1403F99D0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x1403F9C74 (CmpCleanUpKcbValueCache.c)
 *     CmpFindSubKeyByNumberEx @ 0x1403FDA60 (CmpFindSubKeyByNumberEx.c)
 *     CmEnumerateKey @ 0x1403FDED0 (CmEnumerateKey.c)
 *     CmpTerminateServerSiloCallback @ 0x1405E0D28 (CmpTerminateServerSiloCallback.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1405E2410 (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x1400EB160 (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1403DB1AC (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1403DC2D0 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpArmDelayDerefKCBWorker @ 0x1404B5C08 (CmpArmDelayDerefKCBWorker.c)
 */

void __fastcall CmpDelayDerefKeyControlBlock(ULONG_PTR BugCheckParameter4)
{
  unsigned __int32 v2; // ecx
  unsigned __int32 v3; // edx
  char v4; // di
  __int64 **v5; // rax
  __int64 *v6; // rbx
  bool v7; // zf

  v2 = *(_DWORD *)BugCheckParameter4;
  while ( v2 > 1 )
  {
    v3 = v2 - 1;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter4, v2 - 1, v2);
    if ( v2 == v3 + 1 )
      return;
  }
  if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 0x20000) != 0 && *(_QWORD *)(BugCheckParameter4 + 24) != -1LL )
  {
    CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4);
    CmpRemoveKeyHashFromDeletedKcbTable(*(_QWORD *)(BugCheckParameter4 + 32), (_DWORD *)(BugCheckParameter4 + 16));
    CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
    *(_QWORD *)(BugCheckParameter4 + 24) = -1LL;
  }
  v4 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
  *(_DWORD *)(BugCheckParameter4 + 8) |= 1u;
  v5 = (__int64 **)qword_1402FD558;
  v6 = (__int64 *)(BugCheckParameter4 + 216);
  *v6 = (__int64)&CmpDelayDerefKCBListHead;
  v6[1] = (__int64)v5;
  if ( *v5 != &CmpDelayDerefKCBListHead )
    __fastfail(3u);
  v7 = CmpDelayDerefKCBWorkItemActive == 0;
  *v5 = v6;
  qword_1402FD558 = (__int64)v6;
  if ( v7 )
  {
    CmpDelayDerefKCBWorkItemActive = 1;
    v4 = 1;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
  if ( v4 )
    CmpArmDelayDerefKCBWorker();
}
