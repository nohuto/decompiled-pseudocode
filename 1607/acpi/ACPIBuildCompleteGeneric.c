/*
 * XREFs of ACPIBuildCompleteGeneric @ 0x1C0026470
 * Callers:
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C0026120 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C0026230 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C0026360 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildDiscoverDeviceCompletion @ 0x1C0043D80 (ACPIBuildDiscoverDeviceCompletion.c)
 *     ACPIBuildDiscoverPowerNodeCompletion @ 0x1C0043E60 (ACPIBuildDiscoverPowerNodeCompletion.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C0044B80 (ACPIBuildProcessPowerResourcePhasePep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0044CA0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C0044E40 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C0045180 (ACPIBuildProcessThermalZoneHid.c)
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
