/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x1401E1E5C
 * Callers:
 *     MiLockVadRange @ 0x1403E8728 (MiLockVadRange.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx

  v3 = a2 + 872;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 872), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 872));
  KeAbPostRelease(v3);
  *(_BYTE *)(a1 + 1732) &= ~2u;
  return KiLeaveGuardedRegionUnsafe(a1);
}
