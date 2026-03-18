/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x1400D1F10
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14020C348 (KsepEvntLogShimsApplied.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x1402453EC (RtlGetAppContainerNamedObjectPath.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14026CFDC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14026DA4C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14026DE14 (AdtpFormatPrefix.c)
 *     CmpVEExecuteParseLogic @ 0x1404071F8 (CmpVEExecuteParseLogic.c)
 *     CmRealKCBToVirtualPath @ 0x140407BD4 (CmRealKCBToVirtualPath.c)
 *     CmpNameFromAttributes @ 0x14044565C (CmpNameFromAttributes.c)
 *     CmpOpenHiveFile @ 0x14044B07C (CmpOpenHiveFile.c)
 *     RtlpGetRegistryHandle @ 0x1404AAC78 (RtlpGetRegistryHandle.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404E76EC (IopGetDriverNameFromKeyNode.c)
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     CmpQueryNameString @ 0x1404EC478 (CmpQueryNameString.c)
 *     IopSymlinkRememberJunction @ 0x14054891C (IopSymlinkRememberJunction.c)
 *     MmCallDllInitialize @ 0x140571780 (MmCallDllInitialize.c)
 *     IopBootLog @ 0x140572968 (IopBootLog.c)
 *     MiGenerateSystemImageNames @ 0x140574DD8 (MiGenerateSystemImageNames.c)
 *     MiResolveImageReferences @ 0x1405753E4 (MiResolveImageReferences.c)
 *     pIoQueryDeviceDescription @ 0x14057D9B0 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x14057DE14 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14057DF20 (pIoQueryBusDescription.c)
 *     AdtpAppendString @ 0x14058615C (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x1405862D4 (AdtpBuildAccessesString.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14058CBA8 (CmpAddRemoveContainerToCLFSLog.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14058D558 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14058D9C4 (PnpQueryRemoveLockedDeviceNode.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     CmpStartCLFSLog @ 0x1405B9014 (CmpStartCLFSLog.c)
 *     IoReportRootDevice @ 0x1405BA7DC (IoReportRootDevice.c)
 *     AslRegistryBuildMachinePath @ 0x1405C5260 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1405C5300 (AslRegistryBuildUserPath.c)
 *     PopCreateHiberFile @ 0x1405C5930 (PopCreateHiberFile.c)
 *     CmVirtualKCBToRealPath @ 0x140657A00 (CmVirtualKCBToRealPath.c)
 *     CmpLoadHiveVolatile @ 0x140661E7C (CmpLoadHiveVolatile.c)
 *     IopSafebootDriverLoad @ 0x14067249C (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x14067350C (IopValidateJunctionTarget.c)
 *     SdbResolveDatabase @ 0x140704364 (SdbResolveDatabase.c)
 *     AdtpBuildSidListString @ 0x14070CA9C (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x14070CD88 (AdtpBuildStringListString.c)
 *     AdtpBuildReplacementString @ 0x14070CFE0 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14070D078 (AdtpBuildUserAccountControlString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140719880 (_SysCtxRegOpenCurrentUserKey.c)
 *     CmpAddDriverToList @ 0x1407BAEFC (CmpAddDriverToList.c)
 *     ExpandKnownDllsPath @ 0x1407BD718 (ExpandKnownDllsPath.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1407F9E94 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeStringToString(PUNICODE_STRING Destination, PCUNICODE_STRING Source)
{
  unsigned __int16 Length; // si
  unsigned __int64 v4; // rcx
  wchar_t *v5; // r14

  Length = Source->Length;
  if ( !Source->Length )
    return 0;
  v4 = Destination->Length;
  if ( (int)(v4 + Length) <= Destination->MaximumLength )
  {
    v5 = &Destination->Buffer[v4 >> 1];
    memmove(v5, Source->Buffer, Length);
    Destination->Length += Length;
    if ( Destination->Length + 1 < Destination->MaximumLength )
      v5[(unsigned __int64)Length >> 1] = 0;
    return 0;
  }
  return -1073741789;
}
