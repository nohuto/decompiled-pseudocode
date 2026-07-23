/*
 * XREFs of UNLOCK_HIVE_LOAD @ 0x1403FA6A4
 * Callers:
 *     CmpTryToRundownHive @ 0x14010B8A0 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x14010BB8C (CmpLoadKeyCommon.c)
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     CmpDoFlushNextHive @ 0x1403FA454 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x1403FAFD0 (CmLoadAppKey.c)
 *     CmReleaseLoadKeyContext @ 0x1404A4818 (CmReleaseLoadKeyContext.c)
 *     CmKtmNotification @ 0x1404BD168 (CmKtmNotification.c)
 *     CmpLateUnloadHiveWorker @ 0x140517B00 (CmpLateUnloadHiveWorker.c)
 *     CmUnloadKey @ 0x140517C64 (CmUnloadKey.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 *     CmShutdownSystem @ 0x1405FC700 (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF1D4 (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x1406033D4 (CmpLazyCommitWorker.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

__int64 UNLOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 v1; // rcx
  ULONG_PTR v2; // rtt
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

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
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v3, v4, v5);
}
