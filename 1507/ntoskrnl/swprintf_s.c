/*
 * XREFs of swprintf_s @ 0x140176650
 * Callers:
 *     RtlIpv6AddressToStringW @ 0x14012FFB0 (RtlIpv6AddressToStringW.c)
 *     RtlIpv4AddressToStringW @ 0x14014C728 (RtlIpv4AddressToStringW.c)
 *     RtlEthernetAddressToStringW @ 0x140248DAC (RtlEthernetAddressToStringW.c)
 *     RtlIpv4AddressToStringExW @ 0x140248E14 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv6AddressToStringExW @ 0x140248ED4 (RtlIpv6AddressToStringExW.c)
 *     SeGetTokenDeviceMap @ 0x140461F64 (SeGetTokenDeviceMap.c)
 *     _PnpSetPropertyWorker @ 0x1404DAFEC (_PnpSetPropertyWorker.c)
 *     RtlStringFromGUIDEx @ 0x1404FFEB8 (RtlStringFromGUIDEx.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14052E744 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PnpInitializeNotifyEntry @ 0x1405619FC (PnpInitializeNotifyEntry.c)
 *     BiUnloadHiveByName @ 0x140569140 (BiUnloadHiveByName.c)
 *     BiAddStoreFromFile @ 0x14056D638 (BiAddStoreFromFile.c)
 *     BiGetNtPartitionPath @ 0x14056EC30 (BiGetNtPartitionPath.c)
 *     BiGetDriveLayoutBlock @ 0x14056EFF4 (BiGetDriveLayoutBlock.c)
 *     SiGetFirmwareBootDeviceName @ 0x14057FA0C (SiGetFirmwareBootDeviceName.c)
 *     CmpSaveBootControlSet @ 0x140584D98 (CmpSaveBootControlSet.c)
 *     _CmCreateOrdinalInstanceKey @ 0x14058A6E4 (_CmCreateOrdinalInstanceKey.c)
 *     CmSetAcpiHwProfile @ 0x1405A2B5C (CmSetAcpiHwProfile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1405BF98C (CmpUpdateReorganizeRegistryValues.c)
 *     CmpAddAcpiAliasEntry @ 0x14065ED5C (CmpAddAcpiAliasEntry.c)
 *     CmpCloneHwProfile @ 0x14065EFB8 (CmpCloneHwProfile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14065F708 (CmpCreateHwProfileFriendlyName.c)
 *     CmpMoveBiosAliasTable @ 0x14065F9C8 (CmpMoveBiosAliasTable.c)
 *     CsrShutdownSynchronization @ 0x1406C094C (CsrShutdownSynchronization.c)
 *     ExpConvertSignatureName @ 0x1406F0CF4 (ExpConvertSignatureName.c)
 *     ExpCreateOutputSIGNATURE @ 0x1406F1298 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindDiskSignature @ 0x1406F1718 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1406F18F8 (ExpGetDriveGeometry.c)
 *     ExpSetBootEntry @ 0x1406F235C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1406F2BC8 (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x1406F3630 (ExpTranslateEfiPath.c)
 *     NtDeleteBootEntry @ 0x1406F4348 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1406F4564 (NtDeleteDriverEntry.c)
 *     WheapWriteTriageDump @ 0x1406FD2E4 (WheapWriteTriageDump.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1407097E4 (LocalConvertSDToStringSD_Rev1.c)
 *     SddlpUuidToString @ 0x14070A584 (SddlpUuidToString.c)
 *     BiCreateBootEntry @ 0x14070F33C (BiCreateBootEntry.c)
 *     SiGetBiosSystemPartition @ 0x140711F48 (SiGetBiosSystemPartition.c)
 *     CreateMiniNtBootKey @ 0x1407F7DAC (CreateMiniNtBootKey.c)
 * Callees:
 *     vswprintf_s @ 0x140176670 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Dst, SizeInWords, Format, ArgList);
}
