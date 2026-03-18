/*
 * XREFs of AMLIFreeDataBuffs @ 0x1C00080D4
 * Callers:
 *     ACPIAmliEvaluatePcch @ 0x1C0081418 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0081520 (ACPIAmliEvaluateOsc.c)
 *     ACPIProcessorDeviceControl @ 0x1C00816A0 (ACPIProcessorDeviceControl.c)
 *     ACPIThermalBuildConstraints @ 0x1C00817DC (ACPIThermalBuildConstraints.c)
 *     ACPIThermalStartDevice @ 0x1C0081910 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C0081BD0 (ACPIThermalWorker.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C0083108 (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C00872CC (ACPIProcessPhysicalDeviceLocation.c)
 *     AcpiGetIdleWakeInfo @ 0x1C00881A0 (AcpiGetIdleWakeInfo.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0088340 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0090384 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIEcGetGpeVector @ 0x1C009AE70 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C009AF1C (ACPIEcGetUid.c)
 *     ACPIGetUniqueId @ 0x1C009CBD0 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C009CC80 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C009CD50 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C009CE2C (ACPIQuerySpareDsm.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C009FA38 (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIFreeDataBuffs(__int64 a1)
{
  dword_1C0074698 = 0;
  byte_1C007469C = 0;
  return FreeDataBuffs(a1, 1LL);
}
