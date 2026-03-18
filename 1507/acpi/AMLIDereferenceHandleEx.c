/*
 * XREFs of AMLIDereferenceHandleEx @ 0x1C000C960
 * Callers:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0004A44 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     ACPIThermalActivateConstraint @ 0x1C0004D2C (ACPIThermalActivateConstraint.c)
 *     ACPIInitDosDeviceName @ 0x1C0006908 (ACPIInitDosDeviceName.c)
 *     EnableDisableCMOSRegions @ 0x1C0006F70 (EnableDisableCMOSRegions.c)
 *     OSNotifyCreateProcessor @ 0x1C00072FC (OSNotifyCreateProcessor.c)
 *     AMLIIterateParentNext @ 0x1C0007700 (AMLIIterateParentNext.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0007BB0 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIInitStartDevice @ 0x1C0007D8C (ACPIInitStartDevice.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00090D0 (PciConfigSpaceHandlerWorker.c)
 *     IsPciDeviceWorker @ 0x1C0009AF0 (IsPciDeviceWorker.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000A110 (OSNotifyCreateOperationRegion.c)
 *     GetOpRegionScopeWorker @ 0x1C000A1B0 (GetOpRegionScopeWorker.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C000A290 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     IsPciBusAsyncWorker @ 0x1C000A950 (IsPciBusAsyncWorker.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000B3C0 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000B440 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000B5A0 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C000B660 (ACPIBuildProcessDevicePhaseHrv.c)
 *     OSNotifyCreateDevice @ 0x1C000B8EC (OSNotifyCreateDevice.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000B980 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C000BAB0 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIIoctlEvalControlMethodEx @ 0x1C000BBBC (ACPIIoctlEvalControlMethodEx.c)
 *     ACPIIoctlEvalPreProcessingEx @ 0x1C000BCA8 (ACPIIoctlEvalPreProcessingEx.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C000BE10 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C000BF80 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000C1B0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C000C300 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlEvalPreProcessing @ 0x1C000C40C (ACPIIoctlEvalPreProcessing.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000C690 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000CB88 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000D190 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000D2B0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ParseCall @ 0x1C0010E80 (ParseCall.c)
 *     LinkNodeCrackPrt @ 0x1C00163F8 (LinkNodeCrackPrt.c)
 *     ACPIThermalGetSensorDevice @ 0x1C001A680 (ACPIThermalGetSensorDevice.c)
 *     ACPIBuildProcessGenericComplete @ 0x1C001BC00 (ACPIBuildProcessGenericComplete.c)
 *     ACPIDeviceRecordDependencies @ 0x1C001C5E4 (ACPIDeviceRecordDependencies.c)
 *     ACPIGetProcessorStatus @ 0x1C001CD60 (ACPIGetProcessorStatus.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C001E4C0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C001EE10 (ACPIBuildProcessDevicePhaseHid.c)
 *     AreDependenciesSatisfied @ 0x1C001FAEC (AreDependenciesSatisfied.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0020C70 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0021010 (ACPIBuildDevicePowerNodes.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C0022144 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0022710 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0022B30 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIFilterIrpSetPower @ 0x1C0022F20 (ACPIFilterIrpSetPower.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0023190 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C0034684 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0034BB0 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C00350C0 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0035200 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0035600 (ACPIBuildProcessThermalZoneUid.c)
 *     CmosConfigSpaceHandler @ 0x1C0036A20 (CmosConfigSpaceHandler.c)
 *     CmosConfigSpaceHandlerWorker @ 0x1C0036B3C (CmosConfigSpaceHandlerWorker.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C00380B0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0038480 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0038590 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C0038C2C (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIEcRemoveDevice @ 0x1C0039C00 (ACPIEcRemoveDevice.c)
 *     ACPIEcRunQueryMethod @ 0x1C003A0C8 (ACPIEcRunQueryMethod.c)
 *     ACPIFanLoop @ 0x1C003B218 (ACPIFanLoop.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C003C0DC (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInitRemovePowerNodes @ 0x1C003C4C4 (ACPIInitRemovePowerNodes.c)
 *     ACPIInternalEvaluateOST @ 0x1C003C84C (ACPIInternalEvaluateOST.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C003CA70 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C003D3B0 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C003D558 (ACPIIoctlAsyncEvalControlMethodEx.c)
 *     OSNotifyDeviceCheck @ 0x1C003DEA8 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C003DFD0 (OSNotifyDeviceEnum.c)
 *     AcpiHandleInternalNotify @ 0x1C003F74C (AcpiHandleInternalNotify.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C003F930 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 *     AcpiSetupNativeMethodContext @ 0x1C003FCE0 (AcpiSetupNativeMethodContext.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0040290 (EnableDisableDeviceRegionSpace.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C00403E0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C00407D0 (ACPIRootIrpQueryPower.c)
 *     ACPITableNotifyFreeObject @ 0x1C0040AC0 (ACPITableNotifyFreeObject.c)
 *     ACPIThermalStopZoneWorker @ 0x1C0041100 (ACPIThermalStopZoneWorker.c)
 *     Simulator_RemoveNode @ 0x1C0043288 (Simulator_RemoveNode.c)
 *     FreeOwnedObjects @ 0x1C0044F44 (FreeOwnedObjects.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C004A620 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C004A810 (LinkNodepRunSrsWorker.c)
 *     RegisterOperationRegionHandler @ 0x1C0065B00 (RegisterOperationRegionHandler.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0065F90 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0066098 (ACPIAmliEvaluateOsc.c)
 *     ACPIRootInitialize @ 0x1C006640C (ACPIRootInitialize.c)
 *     EnableDisableRegions @ 0x1C0069918 (EnableDisableRegions.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0069AD0 (AcpiGetIdleWakeInfo.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C006A150 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     LinkNodeWriteStateToHardware @ 0x1C006DEF0 (LinkNodeWriteStateToHardware.c)
 *     ACPIAmliEvaluateDsm @ 0x1C006DFF0 (ACPIAmliEvaluateDsm.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C006E660 (LinkNodepAddLinkNodeWorker.c)
 *     ACPIThermalWorker @ 0x1C006F0F0 (ACPIThermalWorker.c)
 *     ACPIDockIrpEject @ 0x1C0078370 (ACPIDockIrpEject.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0078B7C (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcGetGpeVector @ 0x1C0079F80 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C007A02C (ACPIEcGetUid.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C007A7A0 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C007A9F8 (ExternalRequestBiosNameDeviceAssociation.c)
 *     ACPIInitStopDevice @ 0x1C007B020 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C007B3FC (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C007B790 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C007B840 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C007B910 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C007B9EC (ACPIQuerySpareDsm.c)
 *     UnRegisterOperationRegionHandler @ 0x1C007C38C (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0086A48 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     HeapFree @ 0x1C0010E2C (HeapFree.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 */

__int64 __fastcall AMLIDereferenceHandleEx(volatile signed __int32 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  dword_1C005A218 = 0;
  result = (unsigned int)gdwfAMLI;
  byte_1C005A21C = 0;
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
