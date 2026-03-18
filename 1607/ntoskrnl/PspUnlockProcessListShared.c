/*
 * XREFs of PspUnlockProcessListShared @ 0x1400C976C
 * Callers:
 *     PsGetNextProcess @ 0x140508FFC (PsGetNextProcess.c)
 *     PsChangeQuantumTable @ 0x140545094 (PsChangeQuantumTable.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspUnlockProcessListShared(__int64 a1)
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
