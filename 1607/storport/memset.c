/*
 * XREFs of memset @ 0x1C001AD80
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001000 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C0001664 (RaUnitAtaPassThroughValidateInput.c)
 *     RaidAllocateSrb @ 0x1C0002320 (RaidAllocateSrb.c)
 *     RaidZeroXrb @ 0x1C00024B0 (RaidZeroXrb.c)
 *     RaidStartIoPacket @ 0x1C0003FF0 (RaidStartIoPacket.c)
 *     StorSubmitIoGatewayItem @ 0x1C00077A0 (StorSubmitIoGatewayItem.c)
 *     StorpTelemetryCollectErrorData @ 0x1C0007970 (StorpTelemetryCollectErrorData.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C0007BA4 (StorpTelemetryConstructErrorEntry.c)
 *     StorpInitializePerfTelemetry @ 0x1C000CC0C (StorpInitializePerfTelemetry.c)
 *     McGenControlCallbackV2 @ 0x1C000D090 (McGenControlCallbackV2.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C000DBC4 (InitializeBusesWithVmLunsBitmap.c)
 *     RaidInitializePerfOptsPassive @ 0x1C000DC5C (RaidInitializePerfOptsPassive.c)
 *     RaidAllocateAddressMapping @ 0x1C000E700 (RaidAllocateAddressMapping.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C000EF80 (RaidRegisterForRuntimePowerManagement.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C000F4E4 (RaidQueryCrashdumpFunctions.c)
 *     RaidAdapterRescanBus @ 0x1C000FF70 (RaidAdapterRescanBus.c)
 *     RaidQueryD3ColdInterface @ 0x1C001059C (RaidQueryD3ColdInterface.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C00107C0 (RaidBusEnumeratorProcessNewUnit.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001162C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0011FD0 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C0012204 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidAdapterEnumerateBus @ 0x1C0012294 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C00123A0 (RaidBusEnumeratorGetLunList.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0012704 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0012A78 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C0013114 (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C0013498 (RaidBusEnumeratorBuildReportLuns.c)
 *     StorDeleteScsiIdentity @ 0x1C0013B7C (StorDeleteScsiIdentity.c)
 *     RtlStringCchPrintfExW @ 0x1C0013EE0 (RtlStringCchPrintfExW.c)
 *     RaidUnitAllocateResources @ 0x1C00147A8 (RaidUnitAllocateResources.c)
 *     RaidZeroUnit @ 0x1C0014BE0 (RaidZeroUnit.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C001508C (RaidGetTelemetryLogPageIds.c)
 *     RaidAdapterHack @ 0x1C0015B44 (RaidAdapterHack.c)
 *     RaidCreateAdapter @ 0x1C0015D30 (RaidCreateAdapter.c)
 *     RaidCreateDeferredQueue @ 0x1C0015EC8 (RaidCreateDeferredQueue.c)
 *     StorCreateIoGateway @ 0x1C0015EF8 (StorCreateIoGateway.c)
 *     PortMiniportRegistryRead @ 0x1C0016454 (PortMiniportRegistryRead.c)
 *     PortBuildRegKeyName @ 0x1C00165A8 (PortBuildRegKeyName.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C0016D5C (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     PortAllocateRegistryBuffer @ 0x1C0016F80 (PortAllocateRegistryBuffer.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0017004 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C00174C8 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     StorPortFreeRegistryBuffer @ 0x1C00175D0 (StorPortFreeRegistryBuffer.c)
 *     StorpInitializeTimer @ 0x1C00177B4 (StorpInitializeTimer.c)
 *     DllInitialize @ 0x1C00178E0 (DllInitialize.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00184CC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     StorpInitializeWorkItem @ 0x1C0018568 (StorpInitializeWorkItem.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C0019138 (StorpAdapterInitializePoFxPower.c)
 *     StorPortDebugPrint @ 0x1C0019810 (StorPortDebugPrint.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C0019D24 (StorPortpSetPowerSettingNotificationGuids.c)
 *     RaidMachineRequireIoPortResource @ 0x1C0019EB0 (RaidMachineRequireIoPortResource.c)
 *     RaGetProtocolCommandEffects @ 0x1C002650C (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C00272F4 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterLogIoError @ 0x1C0027474 (RaidAdapterLogIoError.c)
 *     RaidAdapterRpmbRequest @ 0x1C0027F7C (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C002827C (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0028520 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterTargetedRescan @ 0x1C0029414 (RaidAdapterTargetedRescan.c)
 *     RaSqmLogAdapterStatistics @ 0x1C002B738 (RaSqmLogAdapterStatistics.c)
 *     RaSqmLogScsiPassthroughStatistics @ 0x1C002BA00 (RaSqmLogScsiPassthroughStatistics.c)
 *     RaidAddATADeviceIdMapping @ 0x1C002C0CC (RaidAddATADeviceIdMapping.c)
 *     StorpUnitInitializePoFxPower @ 0x1C002F9A8 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterPerfStates @ 0x1C0030C00 (RaidRegisterPerfStates.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C00313DC (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     StorPortAdapterPowerControl @ 0x1C0031920 (StorPortAdapterPowerControl.c)
 *     QueryFeatureOverride @ 0x1C0033738 (QueryFeatureOverride.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C0033834 (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C0033960 (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C0033B18 (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C0033BEC (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C0033D5C (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaBuildSetTemperatureThresholdBufferForMiniport @ 0x1C0033E58 (RaBuildSetTemperatureThresholdBufferForMiniport.c)
 *     RaidLogAllocationFailure @ 0x1C00345A4 (RaidLogAllocationFailure.c)
 *     StorCreateSystemLogEntry @ 0x1C003479C (StorCreateSystemLogEntry.c)
 *     StorLogIoError @ 0x1C0034A58 (StorLogIoError.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0034E60 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaUnitGetQOSIoctl @ 0x1C00353A8 (RaUnitGetQOSIoctl.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0037760 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C0037874 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C0038884 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C0038D3C (RaidUnitUnRegisterInterfaces.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C0038E64 (RtlStringExHandleOtherFlagsW.c)
 *     StorpAdapterTopologyWorkItemRoutine @ 0x1C003BE90 (StorpAdapterTopologyWorkItemRoutine.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C003D238 (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetryDeviceStatisticsCommand @ 0x1C003DAD4 (StorpTelemetryDeviceStatisticsCommand.c)
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0040278 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     StorpTelemetrySendUnitErrorData @ 0x1C0040640 (StorpTelemetrySendUnitErrorData.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C00408B4 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C0040FC0 (StorpTelemetrySendUnitPerfData.c)
 *     StorpTelemetrySendUnitQos @ 0x1C004144C (StorpTelemetrySendUnitQos.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C00415F8 (StorpTelemetrySendUnitSmartAttributes.c)
 *     StorpTelemetrySmartCommand @ 0x1C0041C30 (StorpTelemetrySmartCommand.c)
 *     FillBufferWithDriverTelemetryDump @ 0x1C0042840 (FillBufferWithDriverTelemetryDump.c)
 *     ReplaceDeviceId @ 0x1C0043064 (ReplaceDeviceId.c)
 *     AsciiToWChar @ 0x1C0043510 (AsciiToWChar.c)
 *     PortMiniportRegistryWrite @ 0x1C004357C (PortMiniportRegistryWrite.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C004463C (PortpPassThroughZeroUnusedBuffers.c)
 *     PortTraceInitGlobalLogger @ 0x1C0044788 (PortTraceInitGlobalLogger.c)
 *     PortTraceInitTracing @ 0x1C00449EC (PortTraceInitTracing.c)
 *     StorSqmAddToStream @ 0x1C0044BC0 (StorSqmAddToStream.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C0057164 (RaGetUnitStorageDeviceProperty.c)
 *     RaCreateBus @ 0x1C005776C (RaCreateBus.c)
 *     RaCreateDriver @ 0x1C0057A10 (RaCreateDriver.c)
 *     RaSaveDriverInitData @ 0x1C0057A54 (RaSaveDriverInitData.c)
 *     RaInitializeConfiguration @ 0x1C0057C08 (RaInitializeConfiguration.c)
 *     RaidAdapterConnectMSIInterrupt @ 0x1C0057EC4 (RaidAdapterConnectMSIInterrupt.c)
 *     RaidInitializeDma @ 0x1C00581F8 (RaidInitializeDma.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0058960 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0058AB4 (RaUnitRegisterForIdleDetection.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C0058F64 (StorpInititalizePerUnitPerfTelemetry.c)
 *     RaidPrepareSrbForReuse @ 0x1C0059498 (RaidPrepareSrbForReuse.c)
 *     RaidInitializeAdapter @ 0x1C00596D8 (RaidInitializeAdapter.c)
 *     PortRegistryReadWithHandle @ 0x1C0059FA0 (PortRegistryReadWithHandle.c)
 *     PortRegistryRead @ 0x1C005A108 (PortRegistryRead.c)
 *     RaidUnitGetDeviceParameters @ 0x1C005A2F4 (RaidUnitGetDeviceParameters.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C005AAD8 (RiAllocateMiniportDeviceExtension.c)
 *     RaDeleteBus @ 0x1C005AB54 (RaDeleteBus.c)
 *     RaidCreateDma @ 0x1C005ABB0 (RaidCreateDma.c)
 *     RaCreateMiniport @ 0x1C005ABCC (RaCreateMiniport.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C005ACEC (RaUnitQueryCapabilitiesIrp.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C005B068 (PortWdmGetDeviceCapabilities.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1C005BCF8 (RaGetUnitStorageDeviceIdProperty.c)
 *     RaidGetStorageMiniportProperty @ 0x1C005C194 (RaidGetStorageMiniportProperty.c)
 *     RaidAdapterConnectNonMSIInterrupt @ 0x1C005DF70 (RaidAdapterConnectNonMSIInterrupt.c)
 *     RaidDeleteDma @ 0x1C005E8BC (RaidDeleteDma.c)
 *     WppTraceCallback @ 0x1C005ED20 (WppTraceCallback.c)
 *     RaidUnitAddAclToVmDevices @ 0x1C005F8F0 (RaidUnitAddAclToVmDevices.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C005FFF4 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughSrbInitialize @ 0x1C0060C08 (PortPassThroughSrbInitialize.c)
 *     PortpErrorInitRecords @ 0x1C0060FAC (PortpErrorInitRecords.c)
 *     StorPortNotificationVrfy @ 0x1C0062320 (StorPortNotificationVrfy.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  size_t v4; // r9
  size_t i; // r8
  unsigned int v6; // ecx
  _QWORD *v7; // rcx
  size_t v8; // r10
  size_t j; // r8

  result = a1;
  if ( Size < 8 )
  {
mset20:
    for ( i = Size & 7; i; --i )
      *((char *)a1 + i - 1) = Val;
    return result;
  }
  *(_QWORD *)&Val = 0x101010101010101LL * (unsigned __int8)Val;
  if ( Size < 0x47 )
  {
    v4 = Size & 0x78;
    a1 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
    do
    {
      *(_QWORD *)((char *)result + v4 - 8) = *(_QWORD *)&Val;
      v4 -= 8LL;
    }
    while ( v4 );
    goto mset20;
  }
  v6 = -(int)a1 & 7;
  if ( v6 )
  {
    Size -= v6;
    *(_QWORD *)result = *(_QWORD *)&Val;
  }
  v7 = (char *)result + v6;
  v8 = Size >> 6;
  if ( ((Size >> 3) & 7) != 0 )
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C001AE3D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
                     &v7[((Size >> 3) & 7) - 8],
                     *(_QWORD *)&Val);
  do
  {
    *v7 = *(_QWORD *)&Val;
    v7[1] = *(_QWORD *)&Val;
    v7[2] = *(_QWORD *)&Val;
    v7[3] = *(_QWORD *)&Val;
    v7[4] = *(_QWORD *)&Val;
    v7[5] = *(_QWORD *)&Val;
    v7[6] = *(_QWORD *)&Val;
    v7[7] = *(_QWORD *)&Val;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  for ( j = Size & 7; j; --j )
    *((_BYTE *)v7 + j - 1) = Val;
  return result;
}
