/*
 * XREFs of CmReleaseLoadKeyContext @ 0x1404A4818
 * Callers:
 *     CmLoadDifferencingKey @ 0x1404A37E0 (CmLoadDifferencingKey.c)
 * Callees:
 *     UNLOCK_HIVE_LOAD @ 0x1403FA6A4 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1403FA774 (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140436C80 (CmpDereferenceKeyControlBlock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1404F7984 (CmpDoQueueLateUnloadWorker.c)
 */

__int64 __fastcall CmReleaseLoadKeyContext(ULONG_PTR BugCheckParameter4, int a2)
{
  if ( a2 >= 0 )
    return CmpDereferenceKeyControlBlock(BugCheckParameter4);
  LOCK_HIVE_LOAD();
  CmpLockRegistry();
  if ( *(_BYTE *)(*(_QWORD *)(BugCheckParameter4 + 24) + 4112LL) == 1 )
  {
    CmpDereferenceKeyControlBlock(BugCheckParameter4);
    CmpDoQueueLateUnloadWorker(*(_QWORD *)(BugCheckParameter4 + 24));
  }
  else
  {
    CmpDereferenceKeyControlBlock(BugCheckParameter4);
  }
  CmpUnlockRegistry();
  return UNLOCK_HIVE_LOAD();
}
