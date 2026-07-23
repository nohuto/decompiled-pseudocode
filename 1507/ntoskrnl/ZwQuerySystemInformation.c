/*
 * XREFs of ZwQuerySystemInformation @ 0x14017F6B0
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1400D8CFC (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     HvlpProcessIommu @ 0x1401EE728 (HvlpProcessIommu.c)
 *     SmKmStoreTerminateWorker @ 0x140257BBC (SmKmStoreTerminateWorker.c)
 *     PopGetHwConfigurationSignature @ 0x1403F0020 (PopGetHwConfigurationSignature.c)
 *     PfpPrivSourceEnum @ 0x14050CF74 (PfpPrivSourceEnum.c)
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     PspDetectComplusILImage @ 0x140545C14 (PspDetectComplusILImage.c)
 *     sub_14055AB0C @ 0x14055AB0C (sub_14055AB0C.c)
 *     SiQuerySystemPartitionInformation @ 0x14056D57C (SiQuerySystemPartitionInformation.c)
 *     BiGetFirmwareType @ 0x14056DE08 (BiGetFirmwareType.c)
 *     BiGetNtPartitionPath @ 0x14056EC30 (BiGetNtPartitionPath.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x1405713EC (BiGetCurrentBootEntryIdentifier.c)
 *     RtlQueryModuleInformation @ 0x14057D670 (RtlQueryModuleInformation.c)
 *     RtlCreateHeap @ 0x14057F114 (RtlCreateHeap.c)
 *     SiGetSystemDeviceName @ 0x14057F8C8 (SiGetSystemDeviceName.c)
 *     KsepGetLoadedModulesList @ 0x1405B56F4 (KsepGetLoadedModulesList.c)
 *     PoInitHiberServices @ 0x1405BD528 (PoInitHiberServices.c)
 *     RtlSystemTimeToLocalTime @ 0x1405C0534 (RtlSystemTimeToLocalTime.c)
 *     SepInitQuerySigningPolicyExt @ 0x1405C29A0 (SepInitQuerySigningPolicyExt.c)
 *     PnpGetStableSystemBootTime @ 0x14067E2EC (PnpGetStableSystemBootTime.c)
 *     PopDripsWatchdogTakeAction @ 0x1406BD01C (PopDripsWatchdogTakeAction.c)
 *     RtlLocalTimeToSystemTime @ 0x1406CB284 (RtlLocalTimeToSystemTime.c)
 *     EtwpLogMemInfoWs @ 0x1406E4310 (EtwpLogMemInfoWs.c)
 *     ExpFindDiskSignature @ 0x1406F1718 (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140702898 (SdbpCheckMatchingRegistryEntry.c)
 *     VfZwQuerySystemInformation @ 0x14075792C (VfZwQuerySystemInformation.c)
 *     HdlspAddLogEntry @ 0x140759ADC (HdlspAddLogEntry.c)
 *     PopInitPlatformSettings @ 0x1407DBA38 (PopInitPlatformSettings.c)
 *     SeCodeIntegrityInitializePolicy @ 0x1407E5E08 (SeCodeIntegrityInitializePolicy.c)
 *     SepInitializeDebugOptions @ 0x1407E5EE4 (SepInitializeDebugOptions.c)
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
