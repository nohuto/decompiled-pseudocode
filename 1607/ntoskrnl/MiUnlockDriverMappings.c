/*
 * XREFs of MiUnlockDriverMappings @ 0x1400A1214
 * Callers:
 *     MiReserveDriverPtes @ 0x1404B2B08 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x140544E78 (MiReleaseDriverPtes.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiUnlockDriverMappings(__int64 a1)
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326888, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140326888);
  KeAbPostRelease((ULONG_PTR)&qword_140326888);
  return KiLeaveGuardedRegionUnsafe(a1);
}
