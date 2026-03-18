/*
 * XREFs of NormalizationList__Unlock @ 0x1402193D8
 * Callers:
 *     RtlpGetNormalization @ 0x14068C59C (RtlpGetNormalization.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

__int64 NormalizationList__Unlock()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&NormalizationListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&NormalizationListLock);
  KeAbPostRelease((ULONG_PTR)&NormalizationListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v0, v1, v2);
}
