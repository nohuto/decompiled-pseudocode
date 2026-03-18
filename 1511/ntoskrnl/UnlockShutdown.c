/*
 * XREFs of UnlockShutdown @ 0x1403BABE4
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmShutdownSystem @ 0x1405DE7A4 (CmShutdownSystem.c)
 *     CmpLazyCommitWorker @ 0x1405E3968 (CmpLazyCommitWorker.c)
 *     CmpSyncNextBackupHive @ 0x1405E57D8 (CmpSyncNextBackupHive.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 UnlockShutdown()
{
  signed __int64 v0; // rcx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpShutdownLock);
  if ( (CmpShutdownLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v0 = CmpShutdownLock - 16;
  else
    v0 = 0LL;
  if ( (CmpShutdownLock & 2) != 0
    || (v1 = CmpShutdownLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpShutdownLock, v0, CmpShutdownLock)) )
  {
    ExfReleasePushLock(&CmpShutdownLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpShutdownLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
