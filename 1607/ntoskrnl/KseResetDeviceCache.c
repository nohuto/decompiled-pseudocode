/*
 * XREFs of KseResetDeviceCache @ 0x14065258C
 * Callers:
 *     KseQueryDeviceData @ 0x140535190 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140652418 (KseQueryDeviceDataList.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KsepCacheLock @ 0x14050CE94 (KsepCacheLock.c)
 *     KsepCacheReset @ 0x140653EE0 (KsepCacheReset.c)
 */

__int64 KseResetDeviceCache()
{
  volatile signed __int64 *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  if ( dword_140328F34 == 2 )
  {
    KsepCacheLock((unsigned __int64 *)qword_140328F78);
    KsepCacheReset(qword_140328F78);
    v0 = (volatile signed __int64 *)qword_140328F78;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140328F78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v0);
    KeAbPostRelease((ULONG_PTR)v0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v1, v2, v3);
  }
  return 0LL;
}
