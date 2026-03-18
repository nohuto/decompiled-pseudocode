/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x1401F53F0
 * Callers:
 *     MiLockVadRange @ 0x1404F38DC (MiLockVadRange.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx

  v3 = a2 + 872;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 872), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 872));
  KeAbPostRelease(v3);
  *(_BYTE *)(a1 + 1736) &= ~2u;
  return KiLeaveGuardedRegionUnsafe(a1);
}
