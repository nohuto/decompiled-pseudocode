/*
 * XREFs of MiUnlockSystemCacheInit @ 0x14014C8D0
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400196F0 (MiObtainSystemCacheView.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiUnlockSystemCacheInit(__int64 a1)
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140326DA0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_140326DA0);
  KeAbPostRelease((ULONG_PTR)qword_140326DA0);
  return KiLeaveGuardedRegionUnsafe(a1);
}
