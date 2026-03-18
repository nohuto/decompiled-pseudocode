/*
 * XREFs of LOCK_HIVE_LOAD @ 0x1403FB8B4
 * Callers:
 *     CmpTryToRundownHive @ 0x1400876A8 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x140087994 (CmpLoadKeyCommon.c)
 *     CmpDoFlushNextHive @ 0x1403FB594 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x1403FC110 (CmLoadAppKey.c)
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 *     CmReleaseLoadKeyContext @ 0x14049C680 (CmReleaseLoadKeyContext.c)
 *     CmpLateUnloadHiveWorker @ 0x14049F6F4 (CmpLateUnloadHiveWorker.c)
 *     CmKtmNotification @ 0x1404D9B64 (CmKtmNotification.c)
 *     NtUnloadKey2 @ 0x140549F84 (NtUnloadKey2.c)
 *     CmShutdownSystem @ 0x1405FC64C (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF120 (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x140603320 (CmpLazyCommitWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *LOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rdi
  _BYTE *result; // rax
  _BYTE *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&CmpLoadHiveLock, 0LL, 0);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpLoadHiveLock, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(&CmpLoadHiveLock, result, (ULONG_PTR)&CmpLoadHiveLock);
  if ( v2 )
  {
    result = (_BYTE *)*((_QWORD *)v2 + 4);
    v2[26] |= 1u;
  }
  CmpLoadHiveLockOwner = (__int64)CurrentThread;
  return result;
}
