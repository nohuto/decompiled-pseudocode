/*
 * XREFs of ACPIBuildCompleteGeneric @ 0x1C0008660
 * Callers:
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C00069E0 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C0006A80 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C0006B00 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildDiscoverDeviceCompletion @ 0x1C0035450 (ACPIBuildDiscoverDeviceCompletion.c)
 *     ACPIBuildDiscoverPowerNodeCompletion @ 0x1C0035480 (ACPIBuildDiscoverPowerNodeCompletion.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C0035E10 (ACPIBuildProcessPowerResourcePhasePep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0035E80 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C0036020 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C0036250 (ACPIBuildProcessThermalZoneHid.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIBuildCompleteGeneric(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax

  v4 = *(_DWORD *)(a4 + 32);
  if ( a2 < 0 )
    *(_DWORD *)(a4 + 48) = a2;
  *(_DWORD *)(a4 + 32) = 2;
  return ACPIBuildCompleteCommon(a4 + 24, v4);
}
