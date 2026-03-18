/*
 * XREFs of KseResetDeviceCache @ 0x1406524A8
 * Callers:
 *     KseQueryDeviceData @ 0x140534C50 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140652334 (KseQueryDeviceDataList.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     KsepCacheLock @ 0x1404E3A3C (KsepCacheLock.c)
 *     KsepCacheReset @ 0x140653DFC (KsepCacheReset.c)
 */

__int64 KseResetDeviceCache()
{
  volatile signed __int64 *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  if ( dword_140328EF4 == 2 )
  {
    KsepCacheLock((unsigned __int64 *)qword_140328F38);
    KsepCacheReset(qword_140328F38);
    v0 = (volatile signed __int64 *)qword_140328F38;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140328F38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v0);
    KeAbPostRelease((ULONG_PTR)v0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v1, v2, v3);
  }
  return 0LL;
}
