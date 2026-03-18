/*
 * XREFs of VrpUnlockJobContextShared @ 0x14061309C
 * Callers:
 *     VrpHandleIoctlGetComRootKey @ 0x140613584 (VrpHandleIoctlGetComRootKey.c)
 *     VrpPostEnumerateKey @ 0x140614D90 (VrpPostEnumerateKey.c)
 *     VrpPreOpenOrCreate @ 0x1406163E4 (VrpPreOpenOrCreate.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall VrpUnlockJobContextShared(__int64 a1)
{
  signed __int64 *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  v1 = (signed __int64 *)(a1 + 16);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v2, v3, v4);
}
