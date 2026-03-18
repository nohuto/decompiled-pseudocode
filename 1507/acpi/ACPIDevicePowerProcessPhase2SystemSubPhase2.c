/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x1C00382F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000C280 (ACPIDeviceCompleteGenericPhase.c)
 *     LinkNodeRestoreHardwareState @ 0x1C004A554 (LinkNodeRestoreHardwareState.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase2(__int64 a1)
{
  int v1; // eax

  v1 = 0;
  *(_DWORD *)(a1 + 212) = 5;
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    v1 = LinkNodeRestoreHardwareState(a1, a1);
    if ( v1 == 259 )
      return 259LL;
  }
  ACPIDeviceCompleteGenericPhase(0LL, v1, 0LL, a1);
  return 0LL;
}
