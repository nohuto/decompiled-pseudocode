/*
 * XREFs of PspUnlockProcessListExclusive @ 0x14007602C
 * Callers:
 *     PspInsertProcess @ 0x14045F5C0 (PspInsertProcess.c)
 *     PspProcessDelete @ 0x140460828 (PspProcessDelete.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockProcessListExclusive(__int64 a1)
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspActiveProcessLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PspActiveProcessLock);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
