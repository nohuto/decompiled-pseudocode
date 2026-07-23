/*
 * XREFs of KiReleaseSecondaryPassiveConnectLock @ 0x1401D5DB4
 * Callers:
 *     KiConnectSecondaryInterrupt @ 0x1401D58B4 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1401D5A04 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 */

__int64 __fastcall KiReleaseSecondaryPassiveConnectLock(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v1, v2, v3);
}
