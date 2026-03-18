/*
 * XREFs of KseResetDeviceCache @ 0x14061D1B4
 * Callers:
 *     KseQueryDeviceData @ 0x1404FA6D4 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x14061D040 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KsepCacheLock @ 0x1404F1228 (KsepCacheLock.c)
 *     KsepCacheReset @ 0x14061EB84 (KsepCacheReset.c)
 */

__int64 KseResetDeviceCache()
{
  volatile signed __int64 *v0; // rbx

  if ( dword_140305F14 == 2 )
  {
    KsepCacheLock((unsigned __int64 *)qword_140305F58);
    KsepCacheReset(qword_140305F58);
    v0 = (volatile signed __int64 *)qword_140305F58;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140305F58, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v0);
    KeAbPostRelease((ULONG_PTR)v0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
