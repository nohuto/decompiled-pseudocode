/*
 * XREFs of memset @ 0x1C0015EC0
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001000 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C0001554 (RaUnitAtaPassThroughValidateInput.c)
 *     RaidUnitCompleteRequest @ 0x1C00016A0 (RaidUnitCompleteRequest.c)
 *     RaidStartIoPacket @ 0x1C00037C0 (RaidStartIoPacket.c)
 *     RaidAllocateSrb @ 0x1C00049EC (RaidAllocateSrb.c)
 *     StorpInitializeTimer @ 0x1C00098CC (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C000A02C (StorpInitializeWorkItem.c)
 *     McGenControlCallbackV2 @ 0x1C000A1E0 (McGenControlCallbackV2.c)
 *     RaidAdapterHack @ 0x1C000AAD8 (RaidAdapterHack.c)
 *     RaidCreateAdapter @ 0x1C000AC10 (RaidCreateAdapter.c)
 *     RaidCreateDeferredQueue @ 0x1C000ADA8 (RaidCreateDeferredQueue.c)
 *     StorCreateIoGateway @ 0x1C000ADD8 (StorCreateIoGateway.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C000AFF4 (RaidGetTelemetryLogPageIds.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C000B1BC (RaidQueryCrashdumpFunctions.c)
 *     RaidAdapterRescanBus @ 0x1C000BC4C (RaidAdapterRescanBus.c)
 *     RaidQueryD3ColdInterface @ 0x1C000C1F0 (RaidQueryD3ColdInterface.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C000C414 (RaidBusEnumeratorProcessNewUnit.c)
 *     StorpInitializePerfTelemetry @ 0x1C000D094 (StorpInitializePerfTelemetry.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000D8A8 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C000E040 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C000E22C (RaidBusEnumeratorProbeLunZero.c)
 *     RaidAdapterEnumerateBus @ 0x1C000E2BC (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C000E3D0 (RaidBusEnumeratorGetLunList.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C000E750 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C000EAC4 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C000EFAC (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C000F330 (RaidBusEnumeratorBuildReportLuns.c)
 *     StorDeleteScsiIdentity @ 0x1C000F658 (StorDeleteScsiIdentity.c)
 *     RtlStringCchPrintfExW @ 0x1C000FF18 (RtlStringCchPrintfExW.c)
 *     RaidUnitAllocateResources @ 0x1C001037C (RaidUnitAllocateResources.c)
 *     RaidZeroXrb @ 0x1C0011444 (RaidZeroXrb.c)
 *     RaidZeroUnit @ 0x1C0011820 (RaidZeroUnit.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C0011958 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C0012908 (InitializeBusesWithVmLunsBitmap.c)
 *     RaidInitializePerfOptsPassive @ 0x1C00129A0 (RaidInitializePerfOptsPassive.c)
 *     RaidAllocateAddressMapping @ 0x1C0012CE0 (RaidAllocateAddressMapping.c)
 *     PortMiniportRegistryRead @ 0x1C0013690 (PortMiniportRegistryRead.c)
 *     PortBuildRegKeyName @ 0x1C00137AC (PortBuildRegKeyName.c)
 *     PortAllocateRegistryBuffer @ 0x1C00139A0 (PortAllocateRegistryBuffer.c)
 *     StorPortFreeRegistryBuffer @ 0x1C0013A30 (StorPortFreeRegistryBuffer.c)
 *     DllInitialize @ 0x1C0013D00 (DllInitialize.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0014630 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     StorPortDebugPrint @ 0x1C0014B30 (StorPortDebugPrint.c)
 *     RaGetProtocolCommandEffects @ 0x1C002314C (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0023F08 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterLogIoError @ 0x1C0024088 (RaidAdapterLogIoError.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C0024D3C (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterTargetedRescan @ 0x1C0025970 (RaidAdapterTargetedRescan.c)
 *     RaSqmLogAdapterStatistics @ 0x1C00280B8 (RaSqmLogAdapterStatistics.c)
 *     RaSqmLogScsiPassthroughStatistics @ 0x1C0028380 (RaSqmLogScsiPassthroughStatistics.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C002A9D4 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C002AA9C (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C002BE68 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C002CEAC (RaidRegisterForRuntimePowerManagement.c)
 *     RaidRegisterPerfStates @ 0x1C002D3B8 (RaidRegisterPerfStates.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C0030520 (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C003064C (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C0030804 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C0030914 (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C00309E8 (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C0030B10 (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaBuildSetTemperatureThresholdBufferForMiniport @ 0x1C0030BF8 (RaBuildSetTemperatureThresholdBufferForMiniport.c)
 *     RaidLogAllocationFailure @ 0x1C0031284 (RaidLogAllocationFailure.c)
 *     StorCreateSystemLogEntry @ 0x1C00315CC (StorCreateSystemLogEntry.c)
 *     StorLogIoError @ 0x1C0031888 (StorLogIoError.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0031BDC (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaUnitGetQOSIoctl @ 0x1C0032070 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0032244 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0034560 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C0034674 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C0035838 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C0035CEC (RaidUnitUnRegisterInterfaces.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C0035E14 (RtlStringExHandleOtherFlagsW.c)
 *     StorpAdapterTopologyWorkItemRoutine @ 0x1C0038120 (StorpAdapterTopologyWorkItemRoutine.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0039458 (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetryCollectErrorData @ 0x1C0039D28 (StorpTelemetryCollectErrorData.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C0039F10 (StorpTelemetryConstructErrorEntry.c)
 *     StorpTelemetrySendUnitErrorData @ 0x1C003A7D8 (StorpTelemetrySendUnitErrorData.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C003AC14 (StorpTelemetrySendUnitPerfData.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C003B6BC (StorpTelemetrySendUnitSmartAttributes.c)
 *     FillBufferWithDriverTelemetryDump @ 0x1C003C090 (FillBufferWithDriverTelemetryDump.c)
 *     DeviceIdShimStorageDeviceIdCompletionHook @ 0x1C003C580 (DeviceIdShimStorageDeviceIdCompletionHook.c)
 *     RaidMachineRequireIoPortResource @ 0x1C003C9F0 (RaidMachineRequireIoPortResource.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C003D4BC (PortpPassThroughZeroUnusedBuffers.c)
 *     AsciiToWChar @ 0x1C003D6AC (AsciiToWChar.c)
 *     PortMiniportRegistryWrite @ 0x1C003D718 (PortMiniportRegistryWrite.c)
 *     PortTraceInitGlobalLogger @ 0x1C003D920 (PortTraceInitGlobalLogger.c)
 *     PortTraceInitTracing @ 0x1C003DB74 (PortTraceInitTracing.c)
 *     StorSqmAddToStream @ 0x1C003DE58 (StorSqmAddToStream.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C0050240 (RaGetUnitStorageDeviceProperty.c)
 *     RaCreateBus @ 0x1C00507F4 (RaCreateBus.c)
 *     RaCreateDriver @ 0x1C0050A98 (RaCreateDriver.c)
 *     RaSaveDriverInitData @ 0x1C0050ADC (RaSaveDriverInitData.c)
 *     RaDeleteBus @ 0x1C0050E94 (RaDeleteBus.c)
 *     RaidCreateDma @ 0x1C0050EF0 (RaidCreateDma.c)
 *     RaCreateMiniport @ 0x1C0050F0C (RaCreateMiniport.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C00511C4 (StorpInititalizePerUnitPerfTelemetry.c)
 *     RaidPrepareSrbForReuse @ 0x1C00515C8 (RaidPrepareSrbForReuse.c)
 *     RaidInitializeAdapter @ 0x1C0051794 (RaidInitializeAdapter.c)
 *     PortRegistryReadWithHandle @ 0x1C0051F3C (PortRegistryReadWithHandle.c)
 *     PortRegistryRead @ 0x1C0052150 (PortRegistryRead.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0052234 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C00523C0 (RaUnitQueryCapabilitiesIrp.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C005273C (PortWdmGetDeviceCapabilities.c)
 *     RaidUnitGetDeviceParameters @ 0x1C00533C8 (RaidUnitGetDeviceParameters.c)
 *     RaidInitializeDma @ 0x1C0053A14 (RaidInitializeDma.c)
 *     RaidAdapterConnectMSIInterrupt @ 0x1C0053B38 (RaidAdapterConnectMSIInterrupt.c)
 *     RaInitializeConfiguration @ 0x1C0053DCC (RaInitializeConfiguration.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1C0053FB8 (RaGetUnitStorageDeviceIdProperty.c)
 *     RaidGetStorageMiniportProperty @ 0x1C005460C (RaidGetStorageMiniportProperty.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C0054BF8 (RiAllocateMiniportDeviceExtension.c)
 *     RaidAdapterConnectNonMSIInterrupt @ 0x1C0056C1C (RaidAdapterConnectNonMSIInterrupt.c)
 *     RaidDeleteDma @ 0x1C0057554 (RaidDeleteDma.c)
 *     WppTraceCallback @ 0x1C00579C0 (WppTraceCallback.c)
 *     RaidUnitAddAclToVmDevices @ 0x1C0058590 (RaidUnitAddAclToVmDevices.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C0058994 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughSrbInitialize @ 0x1C0059470 (PortPassThroughSrbInitialize.c)
 *     PortpErrorInitRecords @ 0x1C0059B0C (PortpErrorInitRecords.c)
 *     StorPortNotificationVrfy @ 0x1C005A320 (StorPortNotificationVrfy.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C0015F7D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
