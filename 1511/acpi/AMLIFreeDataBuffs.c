/*
 * XREFs of AMLIFreeDataBuffs @ 0x1C00079D0
 * Callers:
 *     ACPIAmliEvaluatePcch @ 0x1C0066154 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0066990 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalBuildConstraints @ 0x1C0066D3C (ACPIThermalBuildConstraints.c)
 *     ACPIProcessorDeviceControl @ 0x1C0067120 (ACPIProcessorDeviceControl.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C00674BC (ACPIProcessPhysicalDeviceLocation.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0068760 (AcpiGetIdleWakeInfo.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C006B1F8 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIThermalStartDevice @ 0x1C006CB30 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C006CD70 (ACPIThermalWorker.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C006D7A8 (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0072B50 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIEcGetGpeVector @ 0x1C007A0E0 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C007A18C (ACPIEcGetUid.c)
 *     ACPIGetUniqueId @ 0x1C007B970 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C007BA20 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C007BAF0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C007BBCC (ACPIQuerySpareDsm.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C007E1C8 (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIFreeDataBuffs(__int64 a1)
{
  dword_1C005A228 = 0;
  byte_1C005A22C = 0;
  return FreeDataBuffs(a1, 1LL);
}
