/*
 * XREFs of ACPIBuildCompleteGeneric @ 0x1C001F8A0
 * Callers:
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C001F6A0 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C001F740 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C001F7C0 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildDiscoverDeviceCompletion @ 0x1C00347D0 (ACPIBuildDiscoverDeviceCompletion.c)
 *     ACPIBuildDiscoverPowerNodeCompletion @ 0x1C0034800 (ACPIBuildDiscoverPowerNodeCompletion.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C0035190 (ACPIBuildProcessPowerResourcePhasePep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0035200 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C00353A0 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C00355D0 (ACPIBuildProcessThermalZoneHid.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIBuildCompleteGeneric(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // eax

  v4 = *(_DWORD *)(a4 + 32);
  if ( a2 < 0 )
    *(_DWORD *)(a4 + 48) = a2;
  *(_DWORD *)(a4 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a4 + 24), v4);
}
