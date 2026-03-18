/*
 * XREFs of AMLIFreeDataBuffs @ 0x1C0004D14
 * Callers:
 *     ACPIAmliEvaluatePcch @ 0x1C0065F90 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0066098 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalBuildConstraints @ 0x1C0066214 (ACPIThermalBuildConstraints.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0069AD0 (AcpiGetIdleWakeInfo.c)
 *     ACPIProcessorDeviceControl @ 0x1C0069B70 (ACPIProcessorDeviceControl.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0069EBC (ACPIProcessPhysicalDeviceLocation.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C006D598 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIThermalStartDevice @ 0x1C006EEB0 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C006F0F0 (ACPIThermalWorker.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C006FB44 (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0072B80 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIEcGetGpeVector @ 0x1C0079F80 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C007A02C (ACPIEcGetUid.c)
 *     ACPIGetUniqueId @ 0x1C007B790 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C007B840 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C007B910 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C007B9EC (ACPIQuerySpareDsm.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C007DFE8 (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIFreeDataBuffs(__int64 a1)
{
  dword_1C005A218 = 0;
  byte_1C005A21C = 0;
  return FreeDataBuffs(a1, 1LL);
}
