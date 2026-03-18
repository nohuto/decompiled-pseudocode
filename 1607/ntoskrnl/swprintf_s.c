/*
 * XREFs of swprintf_s @ 0x140151960
 * Callers:
 *     RtlIpv4AddressToStringW @ 0x140126360 (RtlIpv4AddressToStringW.c)
 *     RtlIpv6AddressToStringW @ 0x14012FEAC (RtlIpv6AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x140214344 (RtlEthernetAddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x1402143AC (RtlIpv4AddressToStringExW.c)
 *     RtlIpv6AddressToStringExW @ 0x14021446C (RtlIpv6AddressToStringExW.c)
 *     RtlStringFromGUIDEx @ 0x1403F7E8C (RtlStringFromGUIDEx.c)
 *     _PnpSetPropertyWorker @ 0x140486DF8 (_PnpSetPropertyWorker.c)
 *     SeGetTokenDeviceMap @ 0x1404CABA0 (SeGetTokenDeviceMap.c)
 *     PnpInitializeNotifyEntry @ 0x14052BF78 (PnpInitializeNotifyEntry.c)
 *     BiUnloadHiveByName @ 0x140533CB4 (BiUnloadHiveByName.c)
 *     BiAddStoreFromFile @ 0x14053B9D0 (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x14053CA90 (BiGetNtPartitionPath.c)
 *     BiGetDriveLayoutBlock @ 0x14053CE58 (BiGetDriveLayoutBlock.c)
 *     SiGetFirmwareBootDeviceName @ 0x14054207C (SiGetFirmwareBootDeviceName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140549C74 (SepCleanupLUIDDeviceMapDirectory.c)
 *     CmSetAcpiHwProfile @ 0x14055B9E8 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14057C8C8 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpSaveBootControlSet @ 0x1405F9094 (CmpSaveBootControlSet.c)
 *     CmpAddAcpiAliasEntry @ 0x140606F54 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1406071B0 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140607904 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x140607BC4 (CmpMoveBiosAliasTable.c)
 *     PspShutdownCsrProcess @ 0x14067EA7C (PspShutdownCsrProcess.c)
 *     ExpConvertSignatureName @ 0x1406B0104 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x1406B06A4 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x1406B0B24 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1406B0D04 (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x1406B16BC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1406B1E74 (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x1406B278C (ExpTranslateEfiPath.c)
 *     NtDeleteBootEntry @ 0x1406B348C (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1406B360C (NtDeleteDriverEntry.c)
 *     WheapWriteTriageDump @ 0x1406BB1F8 (WheapWriteTriageDump.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406CAE68 (LocalConvertSDToStringSD_Rev1.c)
 *     SddlpUuidToString @ 0x1406CC544 (SddlpUuidToString.c)
 *     BiCreateBootEntry @ 0x1406D3FB4 (BiCreateBootEntry.c)
 *     SiGetBiosSystemPartition @ 0x1406D6BC8 (SiGetBiosSystemPartition.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1406D77C4 (_CmCreateOrdinalInstanceKey.c)
 *     CreateMiniNtBootKey @ 0x1407CCE70 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x140151980 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
