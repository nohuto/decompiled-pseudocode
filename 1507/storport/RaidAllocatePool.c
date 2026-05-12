/*
 * XREFs of RaidAllocatePool @ 0x1C0003BAC
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001000 (RaUnitAtaPassThroughIoctl.c)
 *     StorUnmapSenseInfo @ 0x1C0002D90 (StorUnmapSenseInfo.c)
 *     RaidAllocateSrb @ 0x1C0003B2C (RaidAllocateSrb.c)
 *     RaidAllocateAddressMapping @ 0x1C0008570 (RaidAllocateAddressMapping.c)
 *     RaDuplicateUnicodeString @ 0x1C0008ECC (RaDuplicateUnicodeString.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0009738 (RaidpBuildAdapterBusRelations.c)
 *     RaidGetD3ColdInterface @ 0x1C0009EBC (RaidGetD3ColdInterface.c)
 *     RaidUnitGetInstanceId @ 0x1C000A4C0 (RaidUnitGetInstanceId.c)
 *     RaidUnitGetDeviceId @ 0x1C000A5B0 (RaidUnitGetDeviceId.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000B640 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C000CD3C (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorAllocateReportLunsResources @ 0x1C000D184 (RaidBusEnumeratorAllocateReportLunsResources.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x1C000D2BC (RaidBusEnumeratorProcessBusUnit.c)
 *     RaidUnitGetCompatibleIds @ 0x1C000D66C (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C000DA2C (RaidUnitGetHardwareIds.c)
 *     RaidUnitAllocateResources @ 0x1C000E10C (RaidUnitAllocateResources.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C000F47C (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaInitializeRaidResources @ 0x1C00100A0 (RaInitializeRaidResources.c)
 *     RaidAdjustDeferredQueueDepth @ 0x1C001073C (RaidAdjustDeferredQueueDepth.c)
 *     RaidBusEnumeratorProcessAtaInformation @ 0x1C00114E0 (RaidBusEnumeratorProcessAtaInformation.c)
 *     StorpInitializeTimer @ 0x1C001176C (StorpInitializeTimer.c)
 *     StorCreateAnsiString @ 0x1C00118D8 (StorCreateAnsiString.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0012530 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     StorpInitializeWorkItem @ 0x1C001266C (StorpInitializeWorkItem.c)
 *     RaGetProtocolCommandEffects @ 0x1C0020D90 (RaGetProtocolCommandEffects.c)
 *     RaidBusEnumeratorReAllocateDataBufferResource @ 0x1C00259DC (RaidBusEnumeratorReAllocateDataBufferResource.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C00288C4 (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C0029EA8 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C002AEEC (RaidRegisterForRuntimePowerManagement.c)
 *     RaidRegisterPerfStates @ 0x1C002B3F8 (RaidRegisterPerfStates.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C002F338 (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C002F464 (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C002F61C (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C002F72C (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C002F800 (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C002F970 (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaBuildSetTemperatureThresholdBufferForMiniport @ 0x1C002FA6C (RaBuildSetTemperatureThresholdBufferForMiniport.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0030ABC (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaidUnitHandleReportLunsDataChanged @ 0x1C0032A00 (RaidUnitHandleReportLunsDataChanged.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C0032D08 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0034010 (RaidUnitSubmitResetRequest.c)
 *     RaidAdapterWmiDeferredRoutine @ 0x1C00347F0 (RaidAdapterWmiDeferredRoutine.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C00348E0 (RaAttemptHighWaterMarkIncrease.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C003896C (StorpTelemetrySendUnitPerfData.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1C004C4A0 (RaUnitQueryDeviceRelationsIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C004D334 (RaUnitRegisterForIdleDetection.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C004D5E8 (StorpInititalizePerUnitPerfTelemetry.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C004D79C (RaUnitQueryDeviceTextIrp.c)
 *     RaInitializeTagList @ 0x1C004EAF4 (RaInitializeTagList.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0054040 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     RaidLogAllocationFailure @ 0x1C0030148 (RaidLogAllocationFailure.c)
 */

PVOID __fastcall RaidAllocatePool(POOL_TYPE a1, SIZE_T a2, ULONG a3, __int64 a4)
{
  PVOID PoolWithTag; // rbx

  PoolWithTag = ExAllocatePoolWithTag(a1, a2, a3);
  if ( !PoolWithTag )
    RaidLogAllocationFailure(a4, (unsigned int)a1, a2, a3);
  return PoolWithTag;
}
