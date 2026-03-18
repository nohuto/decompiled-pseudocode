/*
 * XREFs of AMLIReferenceHandleEx @ 0x1C000E210
 * Callers:
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C0005180 (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C000526C (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     GetOpRegionScope @ 0x1C000C06C (GetOpRegionScope.c)
 *     IsPciDevice @ 0x1C000C35C (IsPciDevice.c)
 *     GetOpRegionScopeWorker @ 0x1C000C430 (GetOpRegionScopeWorker.c)
 *     PciConfigInternal @ 0x1C000D9C4 (PciConfigInternal.c)
 *     IsPciBusAsync @ 0x1C000DC28 (IsPciBusAsync.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C0010E20 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C0011410 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0011640 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C0013050 (ACPIBuildProcessDevicePhasePrx.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C001CF10 (PciConfigSpaceHandlerWorker.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00267F0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     GetPciAddress @ 0x1C002A0B8 (GetPciAddress.c)
 *     CacheBBNResult @ 0x1C002A9E0 (CacheBBNResult.c)
 *     ACPIBuildPowerResourceExtension @ 0x1C0044754 (ACPIBuildPowerResourceExtension.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0044AB0 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0044CA0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     CmosConfigSpaceHandler @ 0x1C0048090 (CmosConfigSpaceHandler.c)
 *     ACPIEcStartDevice @ 0x1C004CC70 (ACPIEcStartDevice.c)
 *     OSNotifyDeviceEnum @ 0x1C00514B8 (OSNotifyDeviceEnum.c)
 *     AcpiHandleInternalNotify @ 0x1C0053634 (AcpiHandleInternalNotify.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0054EC0 (InternalRawAccessOpRegionHandler.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0099468 (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIReferenceHandleEx(__int64 a1)
{
  __int64 result; // rax

  dword_1C0074698 = 0;
  result = (unsigned int)gdwfAMLI;
  byte_1C007469C = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  return result;
}
