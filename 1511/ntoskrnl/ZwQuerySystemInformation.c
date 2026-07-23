/*
 * XREFs of ZwQuerySystemInformation @ 0x140150CE0
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1400F9A24 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     HvlpProcessIommu @ 0x1401B3E24 (HvlpProcessIommu.c)
 *     IopInitializeInMemoryDumpData @ 0x1401B9788 (IopInitializeInMemoryDumpData.c)
 *     SmKmStoreTerminateWorker @ 0x140208928 (SmKmStoreTerminateWorker.c)
 *     PopGetHwConfigurationSignature @ 0x14039DB44 (PopGetHwConfigurationSignature.c)
 *     PfpPrivSourceEnum @ 0x14044B238 (PfpPrivSourceEnum.c)
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     PspDetectComplusILImage @ 0x1404B321C (PspDetectComplusILImage.c)
 *     sub_1404C56A0 @ 0x1404C56A0 (sub_1404C56A0.c)
 *     SiQuerySystemPartitionInformation @ 0x1404FAFE4 (SiQuerySystemPartitionInformation.c)
 *     BiGetFirmwareType @ 0x1404FB870 (BiGetFirmwareType.c)
 *     BiGetNtPartitionPath @ 0x1404FC190 (BiGetNtPartitionPath.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x1404FE7A4 (BiGetCurrentBootEntryIdentifier.c)
 *     RtlQueryModuleInformation @ 0x14050290C (RtlQueryModuleInformation.c)
 *     SiGetSystemDeviceName @ 0x1405065FC (SiGetSystemDeviceName.c)
 *     RtlCreateHeap @ 0x1405093C8 (RtlCreateHeap.c)
 *     KsepGetLoadedModulesList @ 0x140524EF8 (KsepGetLoadedModulesList.c)
 *     PoInitHiberServices @ 0x1405466A8 (PoInitHiberServices.c)
 *     RtlSystemTimeToLocalTime @ 0x140548BEC (RtlSystemTimeToLocalTime.c)
 *     SepInitQuerySigningPolicyExt @ 0x14054B48C (SepInitQuerySigningPolicyExt.c)
 *     PnpGetStableSystemBootTime @ 0x140603480 (PnpGetStableSystemBootTime.c)
 *     PopDripsWatchdogTakeAction @ 0x14063CAA4 (PopDripsWatchdogTakeAction.c)
 *     RtlLocalTimeToSystemTime @ 0x1406481A0 (RtlLocalTimeToSystemTime.c)
 *     EtwpLogMemInfoWs @ 0x1406612D8 (EtwpLogMemInfoWs.c)
 *     ExpFindDiskSignature @ 0x14066DE0C (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14067DA2C (SdbpCheckMatchingRegistryEntry.c)
 *     VfZwQuerySystemInformation @ 0x1406D3D64 (VfZwQuerySystemInformation.c)
 *     HdlspAddLogEntry @ 0x1406D6ADC (HdlspAddLogEntry.c)
 *     PopInitPlatformSettings @ 0x14076812C (PopInitPlatformSettings.c)
 *     SeCodeIntegrityInitializePolicy @ 0x140770B8C (SeCodeIntegrityInitializePolicy.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass);
}
