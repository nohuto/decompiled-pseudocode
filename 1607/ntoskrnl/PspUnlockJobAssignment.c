/*
 * XREFs of PspUnlockJobAssignment @ 0x1404D5F4C
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x1404D5830 (PspGetJobLockHierarchyForDeletion.c)
 *     PspAssignProcessToJob @ 0x1404D5BEC (PspAssignProcessToJob.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockJobAssignment(__int64 a1)
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobAssignmentLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspJobAssignmentLock);
  KeAbPostRelease((ULONG_PTR)&PspJobAssignmentLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
