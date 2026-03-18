/*
 * XREFs of PspUnlockJobAssignment @ 0x1404F2FC0
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x1404F28A4 (PspGetJobLockHierarchyForDeletion.c)
 *     PspAssignProcessToJob @ 0x1404F2C60 (PspAssignProcessToJob.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockJobAssignment(__int64 a1)
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobAssignmentLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspJobAssignmentLock);
  KeAbPostRelease((ULONG_PTR)&PspJobAssignmentLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
