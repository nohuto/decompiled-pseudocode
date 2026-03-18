/*
 * XREFs of UNLOCK_HIVE_LOAD @ 0x1403FB7E4
 * Callers:
 *     CmpTryToRundownHive @ 0x1400876A8 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x140087994 (CmpLoadKeyCommon.c)
 *     CmpDoFlushNextHive @ 0x1403FB594 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x1403FC110 (CmLoadAppKey.c)
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 *     CmReleaseLoadKeyContext @ 0x14049C680 (CmReleaseLoadKeyContext.c)
 *     CmpLateUnloadHiveWorker @ 0x14049F6F4 (CmpLateUnloadHiveWorker.c)
 *     CmUnloadKey @ 0x14049F858 (CmUnloadKey.c)
 *     CmKtmNotification @ 0x1404D9B64 (CmKtmNotification.c)
 *     NtUnloadKey2 @ 0x140549F84 (NtUnloadKey2.c)
 *     CmShutdownSystem @ 0x1405FC64C (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF120 (CmpResolveHiveLoadConflict.c)
 *     CmpLazyCommitWorker @ 0x140603320 (CmpLazyCommitWorker.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
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
