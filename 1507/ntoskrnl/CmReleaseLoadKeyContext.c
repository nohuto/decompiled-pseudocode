/*
 * XREFs of CmReleaseLoadKeyContext @ 0x1405562AC
 * Callers:
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 * Callees:
 *     UNLOCK_HIVE_LOAD @ 0x140446020 (UNLOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1404460B8 (CmpDoQueueLateUnloadWorker.c)
 *     LOCK_HIVE_LOAD @ 0x14044626C (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404C8650 (CmpDereferenceKeyControlBlock.c)
 */

void __fastcall CmReleaseLoadKeyContext(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx

  if ( (int)a2 < 0 )
  {
    LOCK_HIVE_LOAD(a1, a2, a3, a4);
    CmpLockRegistry();
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 32) + 4112LL) == 1 )
    {
      CmpDereferenceKeyControlBlock(a1);
      CmpDoQueueLateUnloadWorker(*(_QWORD *)(a1 + 32), v5, v6, v7);
    }
    else
    {
      CmpDereferenceKeyControlBlock(a1);
    }
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD(v9, v8);
  }
  else
  {
    CmpDereferenceKeyControlBlock(a1);
  }
}
