/*
 * XREFs of swprintf_s @ 0x1401485D0
 * Callers:
 *     RtlIpv6AddressToStringW @ 0x1400F2C90 (RtlIpv6AddressToStringW.c)
 *     RtlIpv4AddressToStringW @ 0x14011787C (RtlIpv4AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x1401FA018 (RtlEthernetAddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x1401FA080 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv6AddressToStringExW @ 0x1401FA140 (RtlIpv6AddressToStringExW.c)
 *     RtlStringFromGUIDEx @ 0x140447328 (RtlStringFromGUIDEx.c)
 *     _PnpSetPropertyWorker @ 0x14045CE24 (_PnpSetPropertyWorker.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14049B9C8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SeGetTokenDeviceMap @ 0x1404A7BCC (SeGetTokenDeviceMap.c)
 *     PnpInitializeNotifyEntry @ 0x1404E9528 (PnpInitializeNotifyEntry.c)
 *     BiUnloadHiveByName @ 0x1404F4D38 (BiUnloadHiveByName.c)
 *     BiAddStoreFromFile @ 0x1404FB0A0 (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x1404FC190 (BiGetNtPartitionPath.c)
 *     BiGetDriveLayoutBlock @ 0x1404FC554 (BiGetDriveLayoutBlock.c)
 *     SiGetFirmwareBootDeviceName @ 0x140506740 (SiGetFirmwareBootDeviceName.c)
 *     CmpSaveBootControlSet @ 0x14050EC14 (CmpSaveBootControlSet.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1405177F8 (_CmCreateOrdinalInstanceKey.c)
 *     CmSetAcpiHwProfile @ 0x14051CDBC (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140548134 (CmpUpdateReorganizeRegistryValues.c)
 *     CmpAddAcpiAliasEntry @ 0x1405E7844 (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x1405E7AA0 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1405E81F0 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x1405E84B0 (CmpMoveBiosAliasTable.c)
 *     PspShutdownCsrProcess @ 0x140640950 (PspShutdownCsrProcess.c)
 *     ExpConvertSignatureName @ 0x14066D3E8 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x14066D98C (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x14066DE0C (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x14066DFEC (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x14066E9A4 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14066F160 (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x14066FA84 (ExpTranslateEfiPath.c)
 *     NtDeleteBootEntry @ 0x14067079C (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14067091C (NtDeleteDriverEntry.c)
 *     WheapWriteTriageDump @ 0x140678AC8 (WheapWriteTriageDump.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140684C48 (LocalConvertSDToStringSD_Rev1.c)
 *     SddlpUuidToString @ 0x140687CC4 (SddlpUuidToString.c)
 *     BiCreateBootEntry @ 0x14068F824 (BiCreateBootEntry.c)
 *     SiGetBiosSystemPartition @ 0x140692430 (SiGetBiosSystemPartition.c)
 *     CreateMiniNtBootKey @ 0x140781A50 (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x1401485F0 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
