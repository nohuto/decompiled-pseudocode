/*
 * XREFs of CmReleaseLoadKeyContext @ 0x1403DDA68
 * Callers:
 *     NtLoadKeyEx @ 0x1403DB3CC (NtLoadKeyEx.c)
 * Callees:
 *     UNLOCK_HIVE_LOAD @ 0x1403DE3F0 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1403DE4C0 (LOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1403F54E0 (CmpDoQueueLateUnloadWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x1403FB8A0 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 */

__int64 __fastcall CmReleaseLoadKeyContext(ULONG_PTR BugCheckParameter4, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  if ( a2 >= 0 )
    return CmpDereferenceKeyControlBlock(BugCheckParameter4);
  LOCK_HIVE_LOAD(BugCheckParameter4);
  CmpLockRegistry(v5, v4, v6, v7);
  if ( *(_BYTE *)(*(_QWORD *)(BugCheckParameter4 + 32) + 4112LL) == 1 )
  {
    CmpDereferenceKeyControlBlock(BugCheckParameter4);
    CmpDoQueueLateUnloadWorker(*(_QWORD *)(BugCheckParameter4 + 32));
  }
  else
  {
    CmpDereferenceKeyControlBlock(BugCheckParameter4);
  }
  CmpUnlockRegistry();
  return UNLOCK_HIVE_LOAD();
}
