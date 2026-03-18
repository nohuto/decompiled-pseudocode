/*
 * XREFs of LOCK_HIVE_LOAD @ 0x1403DE4C0
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x1400D2844 (CmpTryToRundownHive.c)
 *     CmpResolveHiveLoadConflict @ 0x1403B57A8 (CmpResolveHiveLoadConflict.c)
 *     CmLoadAppKey @ 0x1403DC3A0 (CmLoadAppKey.c)
 *     CmReleaseLoadKeyContext @ 0x1403DDA68 (CmReleaseLoadKeyContext.c)
 *     CmpDoFlushNextHive @ 0x1403DE1A0 (CmpDoFlushNextHive.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x140498D48 (CmpLateUnloadHiveWorker.c)
 *     CmKtmNotification @ 0x1404BA500 (CmKtmNotification.c)
 *     NtUnloadKey2 @ 0x14050ABE0 (NtUnloadKey2.c)
 *     CmShutdownSystem @ 0x1405DE7A4 (CmShutdownSystem.c)
 *     CmpLazyCommitWorker @ 0x1405E3968 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 LOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((ULONG_PTR)&CmpLoadHiveLock, 0LL, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpLoadHiveLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpLoadHiveLock, result, (ULONG_PTR)&CmpLoadHiveLock);
  if ( v2 )
  {
    result = *(_QWORD *)(v2 + 32);
    *(_BYTE *)(v2 + 26) |= 1u;
  }
  CmpLoadHiveLockOwner = (__int64)CurrentThread;
  return result;
}
