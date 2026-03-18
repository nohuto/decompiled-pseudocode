/*
 * XREFs of AMLIReferenceHandleEx @ 0x1C0016AC0
 * Callers:
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C0004E68 (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0004F54 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     GetPciAddress @ 0x1C00070A8 (GetPciAddress.c)
 *     GetOpRegionScope @ 0x1C00087E4 (GetOpRegionScope.c)
 *     IsPciDevice @ 0x1C0008884 (IsPciDevice.c)
 *     PciConfigInternal @ 0x1C0008950 (PciConfigInternal.c)
 *     IsPciBusAsync @ 0x1C0008BB0 (IsPciBusAsync.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0008D90 (PciConfigSpaceHandlerWorker.c)
 *     GetOpRegionScopeWorker @ 0x1C000A0D0 (GetOpRegionScopeWorker.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000BF10 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000D870 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000D990 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C001D300 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0022E90 (ACPIBuildProcessThermalZoneCheckType.c)
 *     CacheBBNResult @ 0x1C00237A0 (CacheBBNResult.c)
 *     ACPIBuildPowerResourceExtension @ 0x1C0035AA0 (ACPIBuildPowerResourceExtension.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0035D40 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0035E80 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     CmosConfigSpaceHandler @ 0x1C0037610 (CmosConfigSpaceHandler.c)
 *     ACPIEcStartDevice @ 0x1C003A890 (ACPIEcStartDevice.c)
 *     OSNotifyDeviceEnum @ 0x1C003DBC0 (OSNotifyDeviceEnum.c)
 *     AcpiHandleInternalNotify @ 0x1C003F28C (AcpiHandleInternalNotify.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C003FE90 (InternalRawAccessOpRegionHandler.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0078CDC (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIReferenceHandleEx(__int64 a1)
{
  __int64 result; // rax

  dword_1C005A228 = 0;
  result = (unsigned int)gdwfAMLI;
  byte_1C005A22C = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  return result;
}
