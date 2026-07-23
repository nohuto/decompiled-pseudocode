/*
 * XREFs of PspUnlockThreadSecurityExclusive @ 0x14020F394
 * Callers:
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockThreadSecurityExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  v3 = a1 + 1712;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1712), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1712));
  KeAbPostRelease(v3);
  return KiLeaveCriticalRegionUnsafe(a2, v4, v5, v6);
}
