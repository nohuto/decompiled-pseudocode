/*
 * XREFs of memset @ 0x1C0013300
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001000 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C0001530 (RaUnitAtaPassThroughValidateInput.c)
 *     RaidStartIoPacket @ 0x1C0001C90 (RaidStartIoPacket.c)
 *     StorSubmitIoGatewayItem @ 0x1C000319C (StorSubmitIoGatewayItem.c)
 *     RaidAllocateSrb @ 0x1C0003B2C (RaidAllocateSrb.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C0008198 (InitializeBusesWithVmLunsBitmap.c)
 *     RaidInitializePerfOptsPassive @ 0x1C0008230 (RaidInitializePerfOptsPassive.c)
 *     RaidAllocateAddressMapping @ 0x1C0008570 (RaidAllocateAddressMapping.c)
 *     RaidCreateAdapter @ 0x1C0008A24 (RaidCreateAdapter.c)
 *     RaidCreateDeferredQueue @ 0x1C0008BA4 (RaidCreateDeferredQueue.c)
 *     StorCreateIoGateway @ 0x1C0008BD4 (StorCreateIoGateway.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C000902C (RaidQueryCrashdumpFunctions.c)
 *     RaidAdapterRescanBus @ 0x1C0009A14 (RaidAdapterRescanBus.c)
 *     RaidQueryD3ColdInterface @ 0x1C0009FB8 (RaidQueryD3ColdInterface.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C000A1DC (RaidBusEnumeratorProcessNewUnit.c)
 *     StorpInitializePerfTelemetry @ 0x1C000AE68 (StorpInitializePerfTelemetry.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000B640 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C000BDD8 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C000BFC4 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidAdapterEnumerateBus @ 0x1C000C054 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C000C160 (RaidBusEnumeratorGetLunList.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C000C4E0 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C000C854 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C000CD3C (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C000D0C0 (RaidBusEnumeratorBuildReportLuns.c)
 *     StorDeleteScsiIdentity @ 0x1C000D3E8 (StorDeleteScsiIdentity.c)
 *     RtlStringCchPrintfExW @ 0x1C000DCA8 (RtlStringCchPrintfExW.c)
 *     RaidUnitAllocateResources @ 0x1C000E10C (RaidUnitAllocateResources.c)
 *     RaidZeroXrb @ 0x1C000F074 (RaidZeroXrb.c)
 *     RaidZeroUnit @ 0x1C000F344 (RaidZeroUnit.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C000F47C (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C000FC6C (RaidGetTelemetryLogPageIds.c)
 *     PortMiniportRegistryRead @ 0x1C00110D0 (PortMiniportRegistryRead.c)
 *     PortBuildRegKeyName @ 0x1C00111EC (PortBuildRegKeyName.c)
 *     PortAllocateRegistryBuffer @ 0x1C0011400 (PortAllocateRegistryBuffer.c)
 *     StorPortFreeRegistryBuffer @ 0x1C0011490 (StorPortFreeRegistryBuffer.c)
 *     StorpInitializeTimer @ 0x1C001176C (StorpInitializeTimer.c)
 *     DllInitialize @ 0x1C0011BF0 (DllInitialize.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0012530 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     StorpInitializeWorkItem @ 0x1C001266C (StorpInitializeWorkItem.c)
 *     StorPortDebugPrint @ 0x1C0012AE0 (StorPortDebugPrint.c)
 *     RaGetProtocolCommandEffects @ 0x1C0020D90 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHack @ 0x1C00214D8 (RaidAdapterHack.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C00218C8 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterLogIoError @ 0x1C0021A48 (RaidAdapterLogIoError.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C00227FC (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterTargetedRescan @ 0x1C0023430 (RaidAdapterTargetedRescan.c)
 *     McGenControlCallbackV2 @ 0x1C0025EA0 (McGenControlCallbackV2.c)
 *     RaSqmLogAdapterStatistics @ 0x1C0026118 (RaSqmLogAdapterStatistics.c)
 *     RaSqmLogScsiPassthroughStatistics @ 0x1C00263E0 (RaSqmLogScsiPassthroughStatistics.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C0028764 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C00288C4 (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C0029EA8 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C002AEEC (RaidRegisterForRuntimePowerManagement.c)
 *     RaidRegisterPerfStates @ 0x1C002B3F8 (RaidRegisterPerfStates.c)
 *     QueryFeatureOverride @ 0x1C002F23C (QueryFeatureOverride.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C002F338 (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C002F464 (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C002F61C (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C002F72C (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C002F800 (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C002F970 (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaBuildSetTemperatureThresholdBufferForMiniport @ 0x1C002FA6C (RaBuildSetTemperatureThresholdBufferForMiniport.c)
 *     RaidLogAllocationFailure @ 0x1C0030148 (RaidLogAllocationFailure.c)
 *     StorCreateSystemLogEntry @ 0x1C00304A8 (StorCreateSystemLogEntry.c)
 *     StorLogIoError @ 0x1C0030764 (StorLogIoError.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0030ABC (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0030FB0 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0032C80 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C0032D08 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C0033DF8 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C00342AC (RaidUnitUnRegisterInterfaces.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C0034358 (RtlStringExHandleOtherFlagsW.c)
 *     StorpAdapterTopologyWorkItemRoutine @ 0x1C00362C0 (StorpAdapterTopologyWorkItemRoutine.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C00375D4 (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C0038048 (StorpTelemetryConstructErrorEntry.c)
 *     StorpTelemetrySendUnitErrorData @ 0x1C0038584 (StorpTelemetrySendUnitErrorData.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C003896C (StorpTelemetrySendUnitPerfData.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C0038FE0 (StorpTelemetrySendUnitSmartAttributes.c)
 *     FillBufferWithDriverTelemetryDump @ 0x1C003965C (FillBufferWithDriverTelemetryDump.c)
 *     DeviceIdShimStorageDeviceIdCompletionHook @ 0x1C0039B50 (DeviceIdShimStorageDeviceIdCompletionHook.c)
 *     RaidMachineRequireIoPortResource @ 0x1C0039FC0 (RaidMachineRequireIoPortResource.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C003AAEC (PortpPassThroughZeroUnusedBuffers.c)
 *     AsciiToWChar @ 0x1C003ACDC (AsciiToWChar.c)
 *     PortMiniportRegistryWrite @ 0x1C003AD48 (PortMiniportRegistryWrite.c)
 *     PortTraceInitGlobalLogger @ 0x1C003AF50 (PortTraceInitGlobalLogger.c)
 *     PortTraceInitTracing @ 0x1C003B1A4 (PortTraceInitTracing.c)
 *     StorSqmAddToStream @ 0x1C003B488 (StorSqmAddToStream.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C004C200 (RaGetUnitStorageDeviceProperty.c)
 *     RaCreateMiniport @ 0x1C004C748 (RaCreateMiniport.c)
 *     RaCreateBus @ 0x1C004C790 (RaCreateBus.c)
 *     RaCreateDriver @ 0x1C004CB1C (RaCreateDriver.c)
 *     RaSaveDriverInitData @ 0x1C004CB60 (RaSaveDriverInitData.c)
 *     RaidAdapterConnectMSIInterrupt @ 0x1C004CE4C (RaidAdapterConnectMSIInterrupt.c)
 *     RaidCreateDma @ 0x1C004D098 (RaidCreateDma.c)
 *     RaidInitializeDma @ 0x1C004D0B4 (RaidInitializeDma.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C004D334 (RaUnitRegisterForIdleDetection.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C004D5E8 (StorpInititalizePerUnitPerfTelemetry.c)
 *     RaidPrepareSrbForReuse @ 0x1C004D9EC (RaidPrepareSrbForReuse.c)
 *     RaidInitializeAdapter @ 0x1C004DBB8 (RaidInitializeAdapter.c)
 *     PortRegistryReadWithHandle @ 0x1C004E360 (PortRegistryReadWithHandle.c)
 *     PortRegistryRead @ 0x1C004E574 (PortRegistryRead.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C004E658 (RaUnitQueryCapabilitiesIrp.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C004E9D4 (PortWdmGetDeviceCapabilities.c)
 *     RaidUnitGetDeviceParameters @ 0x1C004F668 (RaidUnitGetDeviceParameters.c)
 *     RaInitializeConfiguration @ 0x1C004FD58 (RaInitializeConfiguration.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1C004FF44 (RaGetUnitStorageDeviceIdProperty.c)
 *     RaidGetStorageMiniportProperty @ 0x1C005058C (RaidGetStorageMiniportProperty.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C0050B78 (RiAllocateMiniportDeviceExtension.c)
 *     RaidAdapterConnectNonMSIInterrupt @ 0x1C0052CB4 (RaidAdapterConnectNonMSIInterrupt.c)
 *     RaDeleteBus @ 0x1C00535E4 (RaDeleteBus.c)
 *     RaidDeleteDma @ 0x1C0053618 (RaidDeleteDma.c)
 *     WppTraceCallback @ 0x1C0053A80 (WppTraceCallback.c)
 *     RaidUnitAddAclToVmDevices @ 0x1C0054650 (RaidUnitAddAclToVmDevices.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C0054A54 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughSrbInitialize @ 0x1C00555A4 (PortPassThroughSrbInitialize.c)
 *     PortpErrorInitRecords @ 0x1C0055C48 (PortpErrorInitRecords.c)
 *     StorPortNotificationVrfy @ 0x1C0056320 (StorPortNotificationVrfy.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C00133BD + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
