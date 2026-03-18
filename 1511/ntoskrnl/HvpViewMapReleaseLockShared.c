/*
 * XREFs of HvpViewMapReleaseLockShared @ 0x1401AB00C
 * Callers:
 *     HvpMapHiveImageFromSystemCache @ 0x1401AB468 (HvpMapHiveImageFromSystemCache.c)
 *     CmpDoSystemCacheRead @ 0x1405E4A40 (CmpDoSystemCacheRead.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x1405E67BC (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvViewMapAddressForFileOffset @ 0x1405EAFC4 (HvViewMapAddressForFileOffset.c)
 *     HvViewMapFlush @ 0x1405EB080 (HvViewMapFlush.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall HvpViewMapReleaseLockShared(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 + 8);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
