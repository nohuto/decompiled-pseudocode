/*
 * XREFs of AMLIGetNamedChild @ 0x1C000DB40
 * Callers:
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0007410 (ACPIBuildProcessDevicePhaseHid.c)
 *     EnableDisableCMOSRegions @ 0x1C0007690 (EnableDisableCMOSRegions.c)
 *     ACPIInitStartDevice @ 0x1C00083A0 (ACPIInitStartDevice.c)
 *     IsPciDeviceWorker @ 0x1C00097D0 (IsPciDeviceWorker.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C000A1B0 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     IsPciBusAsyncWorker @ 0x1C000AA20 (IsPciBusAsyncWorker.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000B250 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000B490 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000B510 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000B670 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C000B730 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000B8E0 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000BD60 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C000BE90 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C000C320 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C000C490 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000C6C0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000CBA0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000D540 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000D870 (ACPIBuildProcessDeviceGenericEval.c)
 *     LinkNodeCrackPrt @ 0x1C00172D4 (LinkNodeCrackPrt.c)
 *     ACPIThermalGetSensorDevice @ 0x1C001AA64 (ACPIThermalGetSensorDevice.c)
 *     ACPIGetWorkerForInteger @ 0x1C001CBB0 (ACPIGetWorkerForInteger.c)
 *     ACPIGetProcessorStatus @ 0x1C001CF80 (ACPIGetProcessorStatus.c)
 *     ACPIInitDosDeviceName @ 0x1C001DAC0 (ACPIInitDosDeviceName.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0021360 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0022E90 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C00232B0 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIFilterIrpSetPower @ 0x1C00235F0 (ACPIFilterIrpSetPower.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0023860 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0035830 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0035D40 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0035E80 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0036280 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0038CA0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0039070 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0039180 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C003ACD8 (ACPIEcRunQueryMethod.c)
 *     ACPIInternalEvaluateOST @ 0x1C003CBDC (ACPIInternalEvaluateOST.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C003FD40 (EnableDisableDeviceRegionSpace.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C0049F30 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C004A120 (LinkNodepRunSrsWorker.c)
 *     ACPIRootInitialize @ 0x1C0065EA0 (ACPIRootInitialize.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0066154 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0066990 (ACPIAmliEvaluateOsc.c)
 *     EnableDisableRegions @ 0x1C0066F60 (EnableDisableRegions.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0067750 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0068760 (AcpiGetIdleWakeInfo.c)
 *     LinkNodeWriteStateToHardware @ 0x1C006BA74 (LinkNodeWriteStateToHardware.c)
 *     ACPIAmliEvaluateDsm @ 0x1C006BC54 (ACPIAmliEvaluateDsm.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C006C3B0 (LinkNodepAddLinkNodeWorker.c)
 *     ACPIThermalStartDevice @ 0x1C006CB30 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C006CD70 (ACPIThermalWorker.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0072B50 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIDockIrpEject @ 0x1C00784D0 (ACPIDockIrpEject.c)
 *     ACPIEcGetGpeVector @ 0x1C007A0E0 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C007A18C (ACPIEcGetUid.c)
 *     ACPIFanStartDevice @ 0x1C007ACA0 (ACPIFanStartDevice.c)
 *     ACPIInitStopDevice @ 0x1C007B200 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C007B5DC (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C007B970 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C007BA20 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C007BAF0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C007BBCC (ACPIQuerySpareDsm.c)
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
  dword_1C005A228 = 0;
  byte_1C005A22C = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 120));
  return result;
}
