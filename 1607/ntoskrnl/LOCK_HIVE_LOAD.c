/*
 * XREFs of LOCK_HIVE_LOAD @ 0x1403FA774
 * Callers:
 *     CmpTryToRundownHive @ 0x14010B8A0 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x14010BB8C (CmpLoadKeyCommon.c)
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     CmpDoFlushNextHive @ 0x1403FA454 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x1403FAFD0 (CmLoadAppKey.c)
 *     CmReleaseLoadKeyContext @ 0x1404A4818 (CmReleaseLoadKeyContext.c)
 *     CmKtmNotification @ 0x1404BD168 (CmKtmNotification.c)
 *     CmpLateUnloadHiveWorker @ 0x140517B00 (CmpLateUnloadHiveWorker.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 *     CmShutdownSystem @ 0x1405FC700 (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF1D4 (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x1406033D4 (CmpLazyCommitWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
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
