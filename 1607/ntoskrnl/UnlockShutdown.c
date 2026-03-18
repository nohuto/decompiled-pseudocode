/*
 * XREFs of UnlockShutdown @ 0x1404A0FFC
 * Callers:
 *     CmpLoadKeyCommon @ 0x140087994 (CmpLoadKeyCommon.c)
 *     CmShutdownSystem @ 0x1405FC64C (CmShutdownSystem.c)
 *     CmpLazyCommitWorker @ 0x140603320 (CmpLazyCommitWorker.c)
 *     CmpSyncNextBackupHive @ 0x140604D28 (CmpSyncNextBackupHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 */

__int64 UnlockShutdown()
{
  signed __int64 v0; // rcx
  ULONG_PTR v1; // rtt
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

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
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v2, v3, v4);
}
