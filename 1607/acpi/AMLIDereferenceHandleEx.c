/*
 * XREFs of AMLIDereferenceHandleEx @ 0x1C0013578
 * Callers:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C000526C (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     EnableDisableCMOSRegions @ 0x1C0006EB0 (EnableDisableCMOSRegions.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C0007898 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlEvalPreProcessing @ 0x1C0007998 (ACPIIoctlEvalPreProcessing.c)
 *     ACPIThermalActivateConstraint @ 0x1C00080EC (ACPIThermalActivateConstraint.c)
 *     ACPIInitStartDevice @ 0x1C0009FCC (ACPIInitStartDevice.c)
 *     ACPIThermalGetSensorDevice @ 0x1C000A438 (ACPIThermalGetSensorDevice.c)
 *     OSNotifyCreateProcessor @ 0x1C000B1B0 (OSNotifyCreateProcessor.c)
 *     AMLIIterateParentNext @ 0x1C000B518 (AMLIIterateParentNext.c)
 *     ACPIInitDosDeviceName @ 0x1C000BB70 (ACPIInitDosDeviceName.c)
 *     IsPciDeviceWorker @ 0x1C000BCF0 (IsPciDeviceWorker.c)
 *     GetOpRegionScopeWorker @ 0x1C000C430 (GetOpRegionScopeWorker.c)
 *     OSNotifyCreateDevice @ 0x1C000CC5C (OSNotifyCreateDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000D088 (OSNotifyCreateOperationRegion.c)
 *     IsPciBusAsyncWorker @ 0x1C000DD00 (IsPciBusAsyncWorker.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000EAE0 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000EF40 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000F370 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000F530 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C000FA70 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000FE50 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C0010000 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C0010E20 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C0011410 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0011640 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C0011BB0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessGenericComplete @ 0x1C0012160 (ACPIBuildProcessGenericComplete.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C00135A4 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ParseCall @ 0x1C0019F80 (ParseCall.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C001CF10 (PciConfigSpaceHandlerWorker.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C001F0A0 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C001FB80 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0020C20 (ACPIBuildProcessDevicePhaseHid.c)
 *     LinkNodeCrackPrt @ 0x1C0021C44 (LinkNodeCrackPrt.c)
 *     ACPIIoctlEvalControlMethodEx @ 0x1C00248B0 (ACPIIoctlEvalControlMethodEx.c)
 *     ACPIIoctlEvalPreProcessingEx @ 0x1C002499C (ACPIIoctlEvalPreProcessingEx.c)
 *     ACPIDeviceRecordDependencies @ 0x1C0025914 (ACPIDeviceRecordDependencies.c)
 *     ACPIGetProcessorStatus @ 0x1C0025B70 (ACPIGetProcessorStatus.c)
 *     AreDependenciesSatisfied @ 0x1C00266BC (AreDependenciesSatisfied.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0026720 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00267F0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0028000 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0028100 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C00285EC (ACPIBuildDevicePowerNodes.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00286B8 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C0029580 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0029600 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIFilterIrpSetPower @ 0x1C002A600 (ACPIFilterIrpSetPower.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C002B530 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C0043B48 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C00444EC (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0044AB0 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0044CA0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0045230 (ACPIBuildProcessThermalZoneUid.c)
 *     CmosConfigSpaceHandler @ 0x1C0048090 (CmosConfigSpaceHandler.c)
 *     CmosConfigSpaceHandlerWorker @ 0x1C00481AC (CmosConfigSpaceHandlerWorker.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0049E20 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C004A3D0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C004A560 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C004B088 (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIEcRemoveDevice @ 0x1C004CBF0 (ACPIEcRemoveDevice.c)
 *     ACPIEcRunQueryMethod @ 0x1C004D258 (ACPIEcRunQueryMethod.c)
 *     ACPIFanLoop @ 0x1C004E2AC (ACPIFanLoop.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F634 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInitRemovePowerNodes @ 0x1C004FAA8 (ACPIInitRemovePowerNodes.c)
 *     ACPIInternalEvaluateOST @ 0x1C004FE38 (ACPIInternalEvaluateOST.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C0050500 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodEx @ 0x1C00506A8 (ACPIIoctlAsyncEvalControlMethodEx.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C0050AE4 (ACPIIoctlGetDeviceSpecificData.c)
 *     OSNotifyDeviceCheck @ 0x1C00512D0 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C00514B8 (OSNotifyDeviceEnum.c)
 *     AcpiHandleInternalNotify @ 0x1C0053634 (AcpiHandleInternalNotify.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C0053850 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0053C90 (AcpiSetupNativeMethodContext.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0054D1C (EnableDisableDeviceRegionSpace.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0054EC0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C00560E0 (ACPIRootIrpQueryPower.c)
 *     ACPITableNotifyFreeObject @ 0x1C0056A20 (ACPITableNotifyFreeObject.c)
 *     ACPIThermalStopZoneWorker @ 0x1C0057384 (ACPIThermalStopZoneWorker.c)
 *     Simulator_RemoveNode @ 0x1C005A378 (Simulator_RemoveNode.c)
 *     FreeOwnedObjects @ 0x1C005C0F4 (FreeOwnedObjects.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C0061AC0 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C0061CB0 (LinkNodepRunSrsWorker.c)
 *     ACPIRootInitialize @ 0x1C0081114 (ACPIRootInitialize.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0081418 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0081520 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalWorker @ 0x1C0081BD0 (ACPIThermalWorker.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0082E98 (ACPIAmliEvaluateDsm.c)
 *     EnableDisableRegions @ 0x1C0086E6C (EnableDisableRegions.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0087560 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     AcpiGetIdleWakeInfo @ 0x1C00881A0 (AcpiGetIdleWakeInfo.c)
 *     LinkNodeWriteStateToHardware @ 0x1C008C208 (LinkNodeWriteStateToHardware.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C008C880 (LinkNodepAddLinkNodeWorker.c)
 *     RegisterOperationRegionHandler @ 0x1C008DF98 (RegisterOperationRegionHandler.c)
 *     ACPIDockIrpEject @ 0x1C0097EE0 (ACPIDockIrpEject.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0099468 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcGetGpeVector @ 0x1C009AE70 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C009AF1C (ACPIEcGetUid.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C009B700 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C009B958 (ExternalRequestBiosNameDeviceAssociation.c)
 *     ACPIInitStopDevice @ 0x1C009C360 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C009C834 (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C009CBD0 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C009CC80 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C009CD50 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C009CE2C (ACPIQuerySpareDsm.c)
 *     UnRegisterOperationRegionHandler @ 0x1C009D98C (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00A92B8 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C001B8A0 (HeapFree.c)
 */

__int64 __fastcall AMLIDereferenceHandleEx(volatile signed __int32 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  dword_1C0074698 = 0;
  result = (unsigned int)gdwfAMLI;
  byte_1C007469C = 0;
  if ( (gdwfAMLI & 4) != 0 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v4 = *(_QWORD *)a1;
      if ( a1 == (volatile signed __int32 *)(v4 + 120) )
      {
        return DereferenceObjectEx(v4, a2);
      }
      else
      {
        DereferenceObjectEx(v4, a2);
        return HeapFree(a1);
      }
    }
  }
  return result;
}
