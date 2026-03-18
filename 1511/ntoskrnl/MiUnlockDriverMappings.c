/*
 * XREFs of MiUnlockDriverMappings @ 0x1400E27CC
 * Callers:
 *     MiReleaseDriverPtes @ 0x1404A6BE4 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x1404A6DA8 (MiReserveDriverPtes.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall MiUnlockDriverMappings(__int64 a1)
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE578, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE578);
  KeAbPostRelease((ULONG_PTR)&qword_1402FE578);
  return KiLeaveGuardedRegionUnsafe(a1);
}
