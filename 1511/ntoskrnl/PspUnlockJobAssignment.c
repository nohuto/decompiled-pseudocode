/*
 * XREFs of PspUnlockJobAssignment @ 0x140486FB8
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x140486B2C (PspGetJobLockHierarchyForDeletion.c)
 *     PspAssignProcessToJob @ 0x140486CD0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall PspUnlockJobAssignment(__int64 a1)
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobAssignmentLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspJobAssignmentLock);
  KeAbPostRelease((ULONG_PTR)&PspJobAssignmentLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
