/*
 * XREFs of AMLIGetNamedChild @ 0x1C000D460
 * Callers:
 *     ACPIInitDosDeviceName @ 0x1C0006908 (ACPIInitDosDeviceName.c)
 *     EnableDisableCMOSRegions @ 0x1C0006F70 (EnableDisableCMOSRegions.c)
 *     ACPIInitStartDevice @ 0x1C0007D8C (ACPIInitStartDevice.c)
 *     IsPciDeviceWorker @ 0x1C0009AF0 (IsPciDeviceWorker.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C000A290 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     IsPciBusAsyncWorker @ 0x1C000A950 (IsPciBusAsyncWorker.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000B180 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000B3C0 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000B440 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000B5A0 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C000B660 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000B810 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000B980 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C000BAB0 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C000BE10 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C000BF80 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000C1B0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000C690 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000CE60 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000D190 (ACPIBuildProcessDeviceGenericEval.c)
 *     LinkNodeCrackPrt @ 0x1C00163F8 (LinkNodeCrackPrt.c)
 *     ACPIThermalGetSensorDevice @ 0x1C001A680 (ACPIThermalGetSensorDevice.c)
 *     ACPIGetWorkerForInteger @ 0x1C001C990 (ACPIGetWorkerForInteger.c)
 *     ACPIGetProcessorStatus @ 0x1C001CD60 (ACPIGetProcessorStatus.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C001EE10 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0020C70 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0022710 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0022B30 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIFilterIrpSetPower @ 0x1C0022F20 (ACPIFilterIrpSetPower.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0023190 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0034BB0 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C00350C0 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0035200 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0035600 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C00380B0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0038480 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0038590 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C003A0C8 (ACPIEcRunQueryMethod.c)
 *     ACPIInternalEvaluateOST @ 0x1C003C84C (ACPIInternalEvaluateOST.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0040290 (EnableDisableDeviceRegionSpace.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C004A620 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C004A810 (LinkNodepRunSrsWorker.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0065F90 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0066098 (ACPIAmliEvaluateOsc.c)
 *     ACPIRootInitialize @ 0x1C006640C (ACPIRootInitialize.c)
 *     EnableDisableRegions @ 0x1C0069918 (EnableDisableRegions.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0069AD0 (AcpiGetIdleWakeInfo.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C006A150 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     LinkNodeWriteStateToHardware @ 0x1C006DEF0 (LinkNodeWriteStateToHardware.c)
 *     ACPIAmliEvaluateDsm @ 0x1C006DFF0 (ACPIAmliEvaluateDsm.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C006E660 (LinkNodepAddLinkNodeWorker.c)
 *     ACPIThermalStartDevice @ 0x1C006EEB0 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C006F0F0 (ACPIThermalWorker.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0072B80 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIDockIrpEject @ 0x1C0078370 (ACPIDockIrpEject.c)
 *     ACPIEcGetGpeVector @ 0x1C0079F80 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C007A02C (ACPIEcGetUid.c)
 *     ACPIFanStartDevice @ 0x1C007AB40 (ACPIFanStartDevice.c)
 *     ACPIInitStopDevice @ 0x1C007B020 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C007B3FC (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C007B790 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C007B840 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C007B910 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C007B9EC (ACPIQuerySpareDsm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNamedChild(__int64 a1, int a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 result; // rax

  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  v6 = v5;
  if ( v5 )
  {
    while ( a2 != *(_DWORD *)(v6 + 32) )
    {
      v6 = *(_QWORD *)(v6 + 8);
      if ( v6 == v5 )
      {
        v6 = 0LL;
        break;
      }
      if ( !v6 )
        break;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  if ( !v6 )
    return 0LL;
  result = v6 + 112;
  dword_1C005A218 = 0;
  byte_1C005A21C = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 120));
  return result;
}
