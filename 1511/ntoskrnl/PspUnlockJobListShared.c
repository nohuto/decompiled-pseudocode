/*
 * XREFs of PspUnlockJobListShared @ 0x1403E9B04
 * Callers:
 *     PspGetNextJob @ 0x1403E9A68 (PspGetNextJob.c)
 *     NtQueryInformationJobObject @ 0x1403E9B88 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall PspUnlockJobListShared(__int64 a1)
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspJobListLock);
  KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
