/*
 * XREFs of ACPIBuildProcessThermalZoneHid @ 0x1C00355D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteGeneric @ 0x1C001F8A0 (ACPIBuildCompleteGeneric.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneHid(__int64 a1)
{
  _InterlockedOr64(*(volatile signed __int64 **)(a1 + 40), 0x200000000000uLL);
  *(_DWORD *)(a1 + 32) = 0;
  ACPIBuildCompleteGeneric(0LL, 0, 0LL, a1);
  return 0LL;
}
