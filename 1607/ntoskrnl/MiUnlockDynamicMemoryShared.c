/*
 * XREFs of MiUnlockDynamicMemoryShared @ 0x1401E2268
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x1401FCC90 (MiCoalesceFreeLargePages.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MiUnlockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  signed __int64 *v3; // rbx

  v3 = (signed __int64 *)(a1 + 224);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 224), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return KiLeaveGuardedRegionUnsafe(a2);
}
