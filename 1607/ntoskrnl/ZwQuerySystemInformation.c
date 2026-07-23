/*
 * XREFs of ZwQuerySystemInformation @ 0x14015A8B0
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14000545C (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     HvlpProcessIommu @ 0x1401BF828 (HvlpProcessIommu.c)
 *     SmKmStoreTerminateWorker @ 0x140220B74 (SmKmStoreTerminateWorker.c)
 *     PopGetHwConfigurationSignature @ 0x1403D21C4 (PopGetHwConfigurationSignature.c)
 *     PspDetectComplusILImage @ 0x1404C4B2C (PspDetectComplusILImage.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x1404D16B8 (ExpHwidBiosIfGetFirmwareTable.c)
 *     PfpPrivSourceEnum @ 0x1404EB998 (PfpPrivSourceEnum.c)
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 *     RtlQueryModuleInformation @ 0x1405386E4 (RtlQueryModuleInformation.c)
 *     SiQuerySystemPartitionInformation @ 0x14053BE54 (SiQuerySystemPartitionInformation.c)
 *     BiGetFirmwareType @ 0x14053C62C (BiGetFirmwareType.c)
 *     BiGetNtPartitionPath @ 0x14053CFD0 (BiGetNtPartitionPath.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x14053F5C0 (BiGetCurrentBootEntryIdentifier.c)
 *     RtlCreateHeap @ 0x140540768 (RtlCreateHeap.c)
 *     SiGetSystemDeviceName @ 0x140542478 (SiGetSystemDeviceName.c)
 *     PoInitHiberServices @ 0x14056C3E8 (PoInitHiberServices.c)
 *     KsepGetLoadedModulesList @ 0x140570CC4 (KsepGetLoadedModulesList.c)
 *     RtlSystemTimeToLocalTime @ 0x14057DA20 (RtlSystemTimeToLocalTime.c)
 *     SepInitQuerySigningPolicyExt @ 0x1405816F0 (SepInitQuerySigningPolicyExt.c)
 *     PnpGetStableSystemBootTime @ 0x14062D8CC (PnpGetStableSystemBootTime.c)
 *     PopDripsWatchdogTakeAction @ 0x1406752EC (PopDripsWatchdogTakeAction.c)
 *     RtlLocalTimeToSystemTime @ 0x140685A1C (RtlLocalTimeToSystemTime.c)
 *     EtwpLogMemInfoWs @ 0x1406A2134 (EtwpLogMemInfoWs.c)
 *     ExpFindDiskSignature @ 0x1406B0C5C (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1406C26A4 (SdbpCheckMatchingRegistryEntry.c)
 *     HdlspAddLogEntry @ 0x140722ADC (HdlspAddLogEntry.c)
 *     SepInitializeDebugOptions @ 0x1407B9C50 (SepInitializeDebugOptions.c)
 *     PopInitPlatformSettings @ 0x1407BAB80 (PopInitPlatformSettings.c)
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
