/*
 * XREFs of KiReleaseSecondaryPassiveConnectLock @ 0x1401D5F88
 * Callers:
 *     KiConnectSecondaryInterrupt @ 0x1401D5A88 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1401D5BD8 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 */

__int64 __fastcall KiReleaseSecondaryPassiveConnectLock(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v1, v2, v3);
}
