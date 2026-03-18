/*
 * XREFs of AMLIDereferenceHandleEx @ 0x1C000CE88
 * Callers:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0004F54 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AreDependenciesSatisfied @ 0x1C0006980 (AreDependenciesSatisfied.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0007410 (ACPIBuildProcessDevicePhaseHid.c)
 *     EnableDisableCMOSRegions @ 0x1C0007690 (EnableDisableCMOSRegions.c)
 *     ACPIThermalActivateConstraint @ 0x1C00079E8 (ACPIThermalActivateConstraint.c)
 *     AMLIIterateParentNext @ 0x1C00081F4 (AMLIIterateParentNext.c)
 *     ACPIInitStartDevice @ 0x1C00083A0 (ACPIInitStartDevice.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0008D90 (PciConfigSpaceHandlerWorker.c)
 *     IsPciDeviceWorker @ 0x1C00097D0 (IsPciDeviceWorker.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000A030 (OSNotifyCreateOperationRegion.c)
 *     GetOpRegionScopeWorker @ 0x1C000A0D0 (GetOpRegionScopeWorker.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C000A1B0 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     IsPciBusAsyncWorker @ 0x1C000AA20 (IsPciBusAsyncWorker.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000B490 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000B510 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000B670 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C000B730 (ACPIBuildProcessDevicePhaseHrv.c)
 *     OSNotifyCreateDevice @ 0x1C000BCD0 (OSNotifyCreateDevice.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000BD60 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C000BE90 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIIoctlEvalControlMethodEx @ 0x1C000C0CC (ACPIIoctlEvalControlMethodEx.c)
 *     ACPIIoctlEvalPreProcessingEx @ 0x1C000C1B8 (ACPIIoctlEvalPreProcessingEx.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C000C320 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C000C490 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000C6C0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C000C810 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlEvalPreProcessing @ 0x1C000C91C (ACPIIoctlEvalPreProcessing.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000CBA0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000CEB4 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000D870 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000D990 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ParseCall @ 0x1C0013900 (ParseCall.c)
 *     LinkNodeCrackPrt @ 0x1C00172D4 (LinkNodeCrackPrt.c)
 *     ACPIThermalGetSensorDevice @ 0x1C001AA64 (ACPIThermalGetSensorDevice.c)
 *     ACPIBuildProcessGenericComplete @ 0x1C001BE70 (ACPIBuildProcessGenericComplete.c)
 *     ACPIDeviceRecordDependencies @ 0x1C001C82C (ACPIDeviceRecordDependencies.c)
 *     ACPIGetProcessorStatus @ 0x1C001CF80 (ACPIGetProcessorStatus.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C001D300 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIInitDosDeviceName @ 0x1C001DAC0 (ACPIInitDosDeviceName.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C001F350 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0021360 (ACPIBuildProcessDevicePhaseUid.c)
 *     OSNotifyCreateProcessor @ 0x1C0021458 (OSNotifyCreateProcessor.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0021828 (ACPIBuildDevicePowerNodes.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C00228C4 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0022E90 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C00232B0 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIFilterIrpSetPower @ 0x1C00235F0 (ACPIFilterIrpSetPower.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0023860 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0024420 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C0035304 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0035830 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0035D40 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0035E80 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0036280 (ACPIBuildProcessThermalZoneUid.c)
 *     CmosConfigSpaceHandler @ 0x1C0037610 (CmosConfigSpaceHandler.c)
 *     CmosConfigSpaceHandlerWorker @ 0x1C003772C (CmosConfigSpaceHandlerWorker.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0038CA0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0039070 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0039180 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C003982C (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIEcRemoveDevice @ 0x1C003A810 (ACPIEcRemoveDevice.c)
 *     ACPIEcRunQueryMethod @ 0x1C003ACD8 (ACPIEcRunQueryMethod.c)
 *     ACPIFanLoop @ 0x1C003B5A8 (ACPIFanLoop.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C003C46C (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInitRemovePowerNodes @ 0x1C003C854 (ACPIInitRemovePowerNodes.c)
 *     ACPIInternalEvaluateOST @ 0x1C003CBDC (ACPIInternalEvaluateOST.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C003CFA0 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C003D148 (ACPIIoctlAsyncEvalControlMethodEx.c)
 *     OSNotifyDeviceCheck @ 0x1C003DA98 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C003DBC0 (OSNotifyDeviceEnum.c)
 *     AcpiHandleInternalNotify @ 0x1C003F28C (AcpiHandleInternalNotify.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C003F470 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 *     AcpiSetupNativeMethodContext @ 0x1C003F820 (AcpiSetupNativeMethodContext.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C003FD40 (EnableDisableDeviceRegionSpace.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C003FE90 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C0040280 (ACPIRootIrpQueryPower.c)
 *     ACPITableNotifyFreeObject @ 0x1C0040570 (ACPITableNotifyFreeObject.c)
 *     ACPIThermalStopZoneWorker @ 0x1C0040BB0 (ACPIThermalStopZoneWorker.c)
 *     Simulator_RemoveNode @ 0x1C0042CA8 (Simulator_RemoveNode.c)
 *     FreeOwnedObjects @ 0x1C0044974 (FreeOwnedObjects.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C0049F30 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C004A120 (LinkNodepRunSrsWorker.c)
 *     RegisterOperationRegionHandler @ 0x1C0065B10 (RegisterOperationRegionHandler.c)
 *     ACPIRootInitialize @ 0x1C0065EA0 (ACPIRootInitialize.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0066154 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0066990 (ACPIAmliEvaluateOsc.c)
 *     EnableDisableRegions @ 0x1C0066F60 (EnableDisableRegions.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0067750 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0068760 (AcpiGetIdleWakeInfo.c)
 *     LinkNodeWriteStateToHardware @ 0x1C006BA74 (LinkNodeWriteStateToHardware.c)
 *     ACPIAmliEvaluateDsm @ 0x1C006BC54 (ACPIAmliEvaluateDsm.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C006C3B0 (LinkNodepAddLinkNodeWorker.c)
 *     ACPIThermalWorker @ 0x1C006CD70 (ACPIThermalWorker.c)
 *     ACPIDockIrpEject @ 0x1C00784D0 (ACPIDockIrpEject.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0078CDC (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcGetGpeVector @ 0x1C007A0E0 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C007A18C (ACPIEcGetUid.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C007A900 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C007AB58 (ExternalRequestBiosNameDeviceAssociation.c)
 *     ACPIInitStopDevice @ 0x1C007B200 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C007B5DC (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C007B970 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C007BA20 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C007BAF0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C007BBCC (ACPIQuerySpareDsm.c)
 *     UnRegisterOperationRegionHandler @ 0x1C007C56C (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0086A64 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C00144F8 (HeapFree.c)
 */

__int64 __fastcall AMLIDereferenceHandleEx(volatile signed __int32 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  dword_1C005A228 = 0;
  result = (unsigned int)gdwfAMLI;
  byte_1C005A22C = 0;
  if ( (gdwfAMLI & 4) != 0 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v3 = *(_QWORD *)a1;
      if ( a1 == (volatile signed __int32 *)(v3 + 112) )
      {
        return DereferenceObjectEx(v3);
      }
      else
      {
        DereferenceObjectEx(v3);
        return HeapFree(a1);
      }
    }
  }
  return result;
}
