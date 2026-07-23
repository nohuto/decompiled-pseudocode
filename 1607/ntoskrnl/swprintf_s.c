/*
 * XREFs of swprintf_s @ 0x140151F20
 * Callers:
 *     RtlIpv4AddressToStringW @ 0x1401268D0 (RtlIpv4AddressToStringW.c)
 *     RtlIpv6AddressToStringW @ 0x14013041C (RtlIpv6AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x140214170 (RtlEthernetAddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x1402141D8 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv6AddressToStringExW @ 0x140214298 (RtlIpv6AddressToStringExW.c)
 *     RtlStringFromGUIDEx @ 0x1403F6D4C (RtlStringFromGUIDEx.c)
 *     SeGetTokenDeviceMap @ 0x1404885C0 (SeGetTokenDeviceMap.c)
 *     _PnpSetPropertyWorker @ 0x140512B14 (_PnpSetPropertyWorker.c)
 *     PnpInitializeNotifyEntry @ 0x14052AE60 (PnpInitializeNotifyEntry.c)
 *     BiUnloadHiveByName @ 0x1405341F4 (BiUnloadHiveByName.c)
 *     BiAddStoreFromFile @ 0x14053BF10 (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x14053CFD0 (BiGetNtPartitionPath.c)
 *     BiGetDriveLayoutBlock @ 0x14053D398 (BiGetDriveLayoutBlock.c)
 *     SiGetFirmwareBootDeviceName @ 0x1405425BC (SiGetFirmwareBootDeviceName.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14054A1B4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     CmSetAcpiHwProfile @ 0x14055BF28 (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14057CD74 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpSaveBootControlSet @ 0x1405F9148 (CmpSaveBootControlSet.c)
 *     CmpAddAcpiAliasEntry @ 0x140607008 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x140607264 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1406079B8 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x140607C78 (CmpMoveBiosAliasTable.c)
 *     PspShutdownCsrProcess @ 0x14067EB60 (PspShutdownCsrProcess.c)
 *     ExpConvertSignatureName @ 0x1406B023C (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x1406B07DC (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x1406B0C5C (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1406B0E3C (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x1406B17F4 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1406B1FAC (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x1406B28C4 (ExpTranslateEfiPath.c)
 *     NtDeleteBootEntry @ 0x1406B35C4 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1406B3744 (NtDeleteDriverEntry.c)
 *     WheapWriteTriageDump @ 0x1406BB330 (WheapWriteTriageDump.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406CAFA0 (LocalConvertSDToStringSD_Rev1.c)
 *     SddlpUuidToString @ 0x1406CC67C (SddlpUuidToString.c)
 *     BiCreateBootEntry @ 0x1406D40EC (BiCreateBootEntry.c)
 *     SiGetBiosSystemPartition @ 0x1406D6D00 (SiGetBiosSystemPartition.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1406D78FC (_CmCreateOrdinalInstanceKey.c)
 *     CreateMiniNtBootKey @ 0x1407CCE70 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x140151F40 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
