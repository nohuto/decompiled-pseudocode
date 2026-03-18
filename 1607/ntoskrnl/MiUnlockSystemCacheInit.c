/*
 * XREFs of MiUnlockSystemCacheInit @ 0x14014C360
 * Callers:
 *     MiObtainSystemCacheView @ 0x140019B70 (MiObtainSystemCacheView.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiUnlockSystemCacheInit(__int64 a1)
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140326D60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_140326D60);
  KeAbPostRelease((ULONG_PTR)qword_140326D60);
  return KiLeaveGuardedRegionUnsafe(a1);
}
