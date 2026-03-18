/*
 * XREFs of KiReleaseSecondaryPassiveConnectLock @ 0x1401C6E18
 * Callers:
 *     KiConnectSecondaryInterrupt @ 0x1401C6918 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1401C6A68 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 */

__int64 __fastcall KiReleaseSecondaryPassiveConnectLock(__int64 a1)
{
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
