/*
 * XREFs of AMLIGetNamedChild @ 0x1C0013EA0
 * Callers:
 *     EnableDisableCMOSRegions @ 0x1C0006EB0 (EnableDisableCMOSRegions.c)
 *     ACPIInitStartDevice @ 0x1C0009FCC (ACPIInitStartDevice.c)
 *     ACPIThermalGetSensorDevice @ 0x1C000A438 (ACPIThermalGetSensorDevice.c)
 *     ACPIInitDosDeviceName @ 0x1C000BB70 (ACPIInitDosDeviceName.c)
 *     IsPciDeviceWorker @ 0x1C000BCF0 (IsPciDeviceWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C000DD00 (IsPciBusAsyncWorker.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000EAE0 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000EC80 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000EF40 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000F270 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000F370 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000F530 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C000FA70 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000FE50 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C0010000 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C0011BB0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0013AE0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIGetWorkerForInteger @ 0x1C001C030 (ACPIGetWorkerForInteger.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C001F0A0 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C001FB80 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0020C20 (ACPIBuildProcessDevicePhaseHid.c)
 *     LinkNodeCrackPrt @ 0x1C0021C44 (LinkNodeCrackPrt.c)
 *     ACPIGetProcessorStatus @ 0x1C0025B70 (ACPIGetProcessorStatus.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0026720 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00267F0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0028000 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0028100 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0029600 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIFilterIrpSetPower @ 0x1C002A600 (ACPIFilterIrpSetPower.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C00444EC (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0044AB0 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0044CA0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0045230 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0049E20 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C004A3D0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C004A560 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C004D258 (ACPIEcRunQueryMethod.c)
 *     ACPIInternalEvaluateOST @ 0x1C004FE38 (ACPIInternalEvaluateOST.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0054D1C (EnableDisableDeviceRegionSpace.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C0061AC0 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C0061CB0 (LinkNodepRunSrsWorker.c)
 *     ACPIRootInitialize @ 0x1C0081114 (ACPIRootInitialize.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0081418 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0081520 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalStartDevice @ 0x1C0081910 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C0081BD0 (ACPIThermalWorker.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0082E98 (ACPIAmliEvaluateDsm.c)
 *     EnableDisableRegions @ 0x1C0086E6C (EnableDisableRegions.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0087560 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     AcpiGetIdleWakeInfo @ 0x1C00881A0 (AcpiGetIdleWakeInfo.c)
 *     LinkNodeWriteStateToHardware @ 0x1C008C208 (LinkNodeWriteStateToHardware.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C008C880 (LinkNodepAddLinkNodeWorker.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0090384 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIDockIrpEject @ 0x1C0097EE0 (ACPIDockIrpEject.c)
 *     ACPIEcGetGpeVector @ 0x1C009AE70 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C009AF1C (ACPIEcGetUid.c)
 *     ACPIFanStartDevice @ 0x1C009BAF0 (ACPIFanStartDevice.c)
 *     ACPIInitStopDevice @ 0x1C009C360 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C009C834 (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C009CBD0 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C009CC80 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C009CD50 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C009CE2C (ACPIQuerySpareDsm.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall AMLIGetNamedChild(__int64 *a1, int a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 *v6; // rbx
  __int64 *v7; // r8
  __int64 *result; // rax

  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = *a1;
  v6 = *(__int64 **)(*a1 + 24);
  v7 = (__int64 *)(v5 + 24);
  if ( v7 == v6 )
  {
LABEL_4:
    v6 = 0LL;
  }
  else
  {
    while ( a2 != *((_DWORD *)v6 + 10) )
    {
      v6 = (__int64 *)*v6;
      if ( v7 == v6 )
        goto LABEL_4;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  if ( !v6 )
    return 0LL;
  result = v6 + 15;
  dword_1C0074698 = 0;
  byte_1C007469C = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v6 + 32);
  return result;
}
