/*
 * XREFs of ZwQuerySystemInformation @ 0x14015A340
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1400052E8 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     HvlpProcessIommu @ 0x1401BF944 (HvlpProcessIommu.c)
 *     SmKmStoreTerminateWorker @ 0x140220D48 (SmKmStoreTerminateWorker.c)
 *     PopGetHwConfigurationSignature @ 0x1403D21C4 (PopGetHwConfigurationSignature.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     PspDetectComplusILImage @ 0x1404E1528 (PspDetectComplusILImage.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x1404EF5F4 (ExpHwidBiosIfGetFirmwareTable.c)
 *     PfpPrivSourceEnum @ 0x140508A08 (PfpPrivSourceEnum.c)
 *     RtlQueryModuleInformation @ 0x1405381A4 (RtlQueryModuleInformation.c)
 *     SiQuerySystemPartitionInformation @ 0x14053B914 (SiQuerySystemPartitionInformation.c)
 *     BiGetFirmwareType @ 0x14053C0EC (BiGetFirmwareType.c)
 *     BiGetNtPartitionPath @ 0x14053CA90 (BiGetNtPartitionPath.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x14053F080 (BiGetCurrentBootEntryIdentifier.c)
 *     RtlCreateHeap @ 0x140540228 (RtlCreateHeap.c)
 *     SiGetSystemDeviceName @ 0x140541F38 (SiGetSystemDeviceName.c)
 *     PoInitHiberServices @ 0x14056BEA8 (PoInitHiberServices.c)
 *     KsepGetLoadedModulesList @ 0x140570784 (KsepGetLoadedModulesList.c)
 *     RtlSystemTimeToLocalTime @ 0x14057D574 (RtlSystemTimeToLocalTime.c)
 *     SepInitQuerySigningPolicyExt @ 0x140581244 (SepInitQuerySigningPolicyExt.c)
 *     PnpGetStableSystemBootTime @ 0x14062D818 (PnpGetStableSystemBootTime.c)
 *     PopDripsWatchdogTakeAction @ 0x140675208 (PopDripsWatchdogTakeAction.c)
 *     RtlLocalTimeToSystemTime @ 0x140685938 (RtlLocalTimeToSystemTime.c)
 *     EtwpLogMemInfoWs @ 0x1406A1FFC (EtwpLogMemInfoWs.c)
 *     ExpFindDiskSignature @ 0x1406B0B24 (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1406C256C (SdbpCheckMatchingRegistryEntry.c)
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
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass, SystemInformation, *(_QWORD *)&SystemInformationLength);
}
