/*
 * XREFs of RaidAllocatePool @ 0x1C0004A6C
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001000 (RaUnitAtaPassThroughIoctl.c)
 *     RaidUnitCompleteRequest @ 0x1C00016A0 (RaidUnitCompleteRequest.c)
 *     StorUnmapSenseInfo @ 0x1C0002950 (StorUnmapSenseInfo.c)
 *     RaidStartIoPacket @ 0x1C00037C0 (RaidStartIoPacket.c)
 *     RaidAllocateSrb @ 0x1C00049EC (RaidAllocateSrb.c)
 *     RaidBusEnumeratorProcessAtaInformation @ 0x1C0009780 (RaidBusEnumeratorProcessAtaInformation.c)
 *     StorpInitializeTimer @ 0x1C00098CC (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C000A02C (StorpInitializeWorkItem.c)
 *     RaidAdjustDeferredQueueDepth @ 0x1C000A8B0 (RaidAdjustDeferredQueueDepth.c)
 *     RaDuplicateUnicodeString @ 0x1C000AF40 (RaDuplicateUnicodeString.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C000B970 (RaidpBuildAdapterBusRelations.c)
 *     RaidGetD3ColdInterface @ 0x1C000C0F4 (RaidGetD3ColdInterface.c)
 *     RaidUnitGetInstanceId @ 0x1C000C6F8 (RaidUnitGetInstanceId.c)
 *     RaidUnitGetDeviceId @ 0x1C000C7E8 (RaidUnitGetDeviceId.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000D8A8 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C000EFAC (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorAllocateReportLunsResources @ 0x1C000F3F4 (RaidBusEnumeratorAllocateReportLunsResources.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x1C000F52C (RaidBusEnumeratorProcessBusUnit.c)
 *     RaidUnitGetCompatibleIds @ 0x1C000F8DC (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C000FC9C (RaidUnitGetHardwareIds.c)
 *     RaidUnitAllocateResources @ 0x1C001037C (RaidUnitAllocateResources.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C0011958 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaInitializeRaidResources @ 0x1C001239C (RaInitializeRaidResources.c)
 *     RaidAllocateAddressMapping @ 0x1C0012CE0 (RaidAllocateAddressMapping.c)
 *     StorCreateAnsiString @ 0x1C0013BF8 (StorCreateAnsiString.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0014630 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaGetProtocolCommandEffects @ 0x1C002314C (RaGetProtocolCommandEffects.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C0023508 (RaidAdapterCheckWaitTimeout.c)
 *     RaidBusEnumeratorReAllocateDataBufferResource @ 0x1C0027AC8 (RaidBusEnumeratorReAllocateDataBufferResource.c)
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
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0031BDC (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaidUnitHandleReportLunsDataChanged @ 0x1C0034290 (RaidUnitHandleReportLunsDataChanged.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C0034674 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0035A50 (RaidUnitSubmitResetRequest.c)
 *     RaidAdapterWmiDeferredRoutine @ 0x1C0036300 (RaidAdapterWmiDeferredRoutine.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C0036568 (RaAttemptHighWaterMarkIncrease.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C003AC14 (StorpTelemetrySendUnitPerfData.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1C00504DC (RaUnitQueryDeviceRelationsIrp.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C00511C4 (StorpInititalizePerUnitPerfTelemetry.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0051378 (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0052234 (RaUnitRegisterForIdleDetection.c)
 *     RaInitializeTagList @ 0x1C00528A8 (RaInitializeTagList.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0057F80 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     RaidLogAllocationFailure @ 0x1C0031284 (RaidLogAllocationFailure.c)
 */

PVOID __fastcall RaidAllocatePool(POOL_TYPE a1, SIZE_T a2, ULONG a3, __int64 a4)
{
  PVOID PoolWithTag; // rbx

  PoolWithTag = ExAllocatePoolWithTag(a1, a2, a3);
  if ( !PoolWithTag )
    RaidLogAllocationFailure(a4, (unsigned int)a1, a2, a3);
  return PoolWithTag;
}
