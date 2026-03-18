/*
 * XREFs of MiUnlockDriverMappings @ 0x1400A28EC
 * Callers:
 *     MiReserveDriverPtes @ 0x1404CD0DC (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x140544938 (MiReleaseDriverPtes.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiUnlockDriverMappings(__int64 a1)
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326848, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140326848);
  KeAbPostRelease((ULONG_PTR)&qword_140326848);
  return KiLeaveGuardedRegionUnsafe(a1);
}
