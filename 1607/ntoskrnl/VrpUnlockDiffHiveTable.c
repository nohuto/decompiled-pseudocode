/*
 * XREFs of VrpUnlockDiffHiveTable @ 0x1406179C8
 * Callers:
 *     VrpDereferenceDiffHiveEntry @ 0x140616FDC (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x1406172B8 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpUnloadDifferencingHive @ 0x140617878 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 */

__int64 VrpUnlockDiffHiveTable()
{
  signed __int64 v0; // rcx
  ULONG_PTR v1; // rtt
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  _m_prefetchw(&gLoadedDiffHivesLock);
  if ( (gLoadedDiffHivesLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  else
    v0 = gLoadedDiffHivesLock - 16;
  if ( (gLoadedDiffHivesLock & 2) != 0
    || (v1 = gLoadedDiffHivesLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&gLoadedDiffHivesLock, v0, gLoadedDiffHivesLock)) )
  {
    ExfReleasePushLock(&gLoadedDiffHivesLock);
  }
  KeAbPostRelease((ULONG_PTR)&gLoadedDiffHivesLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v2, v3, v4);
}
