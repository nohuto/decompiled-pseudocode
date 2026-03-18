/*
 * XREFs of HvpViewMapReleaseLockShared @ 0x1401B6AF8
 * Callers:
 *     HvpMapHiveImageFromSystemCache @ 0x1401B72D8 (HvpMapHiveImageFromSystemCache.c)
 *     CmpDoSystemCacheRead @ 0x140603F98 (CmpDoSystemCacheRead.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140605D14 (HvExtendHivePrimaryFileValidDataLength.c)
 *     HvViewMapAddressForFileOffset @ 0x14060FA68 (HvViewMapAddressForFileOffset.c)
 *     HvViewMapFlush @ 0x14060FB24 (HvViewMapFlush.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall HvpViewMapReleaseLockShared(__int64 a1)
{
  signed __int64 *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  v1 = (signed __int64 *)(a1 + 8);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v2, v3, v4);
}
