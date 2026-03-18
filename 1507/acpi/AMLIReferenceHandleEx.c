/*
 * XREFs of AMLIReferenceHandleEx @ 0x1C0008ED4
 * Callers:
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C0004958 (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0004A44 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     GetPciAddress @ 0x1C0006C58 (GetPciAddress.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0007BB0 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     GetOpRegionScope @ 0x1C00081A4 (GetOpRegionScope.c)
 *     IsPciDevice @ 0x1C0008244 (IsPciDevice.c)
 *     PciConfigInternal @ 0x1C0008C74 (PciConfigInternal.c)
 *     IsPciBusAsync @ 0x1C0008EF4 (IsPciBusAsync.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00090D0 (PciConfigSpaceHandlerWorker.c)
 *     GetOpRegionScopeWorker @ 0x1C000A1B0 (GetOpRegionScopeWorker.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000D190 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000D2B0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000D4F0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0022710 (ACPIBuildProcessThermalZoneCheckType.c)
 *     CacheBBNResult @ 0x1C00230D0 (CacheBBNResult.c)
 *     ACPIBuildPowerResourceExtension @ 0x1C0034E20 (ACPIBuildPowerResourceExtension.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C00350C0 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0035200 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     CmosConfigSpaceHandler @ 0x1C0036A20 (CmosConfigSpaceHandler.c)
 *     ACPIEcStartDevice @ 0x1C0039C80 (ACPIEcStartDevice.c)
 *     OSNotifyDeviceEnum @ 0x1C003DFD0 (OSNotifyDeviceEnum.c)
 *     AcpiHandleInternalNotify @ 0x1C003F74C (AcpiHandleInternalNotify.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C00403E0 (InternalRawAccessOpRegionHandler.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0078B7C (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIReferenceHandleEx(__int64 a1)
{
  __int64 result; // rax

  dword_1C005A218 = 0;
  result = (unsigned int)gdwfAMLI;
  byte_1C005A21C = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  return result;
}
