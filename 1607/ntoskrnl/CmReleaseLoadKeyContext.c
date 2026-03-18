/*
 * XREFs of CmReleaseLoadKeyContext @ 0x14049C680
 * Callers:
 *     CmLoadDifferencingKey @ 0x14049B648 (CmLoadDifferencingKey.c)
 * Callees:
 *     UNLOCK_HIVE_LOAD @ 0x1403FB7E4 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1403FB8B4 (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404047A0 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140437DB0 (CmpDereferenceKeyControlBlock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140514594 (CmpDoQueueLateUnloadWorker.c)
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
