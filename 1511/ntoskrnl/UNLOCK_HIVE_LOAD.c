/*
 * XREFs of UNLOCK_HIVE_LOAD @ 0x1403DE3F0
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x1400D2844 (CmpTryToRundownHive.c)
 *     CmpResolveHiveLoadConflict @ 0x1403B57A8 (CmpResolveHiveLoadConflict.c)
 *     CmLoadAppKey @ 0x1403DC3A0 (CmLoadAppKey.c)
 *     CmReleaseLoadKeyContext @ 0x1403DDA68 (CmReleaseLoadKeyContext.c)
 *     CmpDoFlushNextHive @ 0x1403DE1A0 (CmpDoFlushNextHive.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x140498D48 (CmpLateUnloadHiveWorker.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 *     CmKtmNotification @ 0x1404BA500 (CmKtmNotification.c)
 *     NtUnloadKey2 @ 0x14050ABE0 (NtUnloadKey2.c)
 *     CmShutdownSystem @ 0x1405DE7A4 (CmShutdownSystem.c)
 *     CmpLazyCommitWorker @ 0x1405E3968 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 UNLOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 v1; // rcx
  ULONG_PTR v2; // rtt

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  CmpLoadHiveLockOwner = 0LL;
  _m_prefetchw(&CmpLoadHiveLock);
  if ( (CmpLoadHiveLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v1 = CmpLoadHiveLock - 16;
  if ( (CmpLoadHiveLock & 2) != 0
    || (v2 = CmpLoadHiveLock,
        v2 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpLoadHiveLock, v1, CmpLoadHiveLock)) )
  {
    ExfReleasePushLock(&CmpLoadHiveLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpLoadHiveLock);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
}
