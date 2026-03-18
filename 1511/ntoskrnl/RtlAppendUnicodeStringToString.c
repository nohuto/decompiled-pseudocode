/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x1400030E4
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1401CCFE4 (KsepEvntLogShimsApplied.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x1401F66E8 (RtlGetAppContainerNamedObjectPath.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14021DBB4 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14021E624 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14021E9EC (AdtpFormatPrefix.c)
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     CmpLinkHiveToMaster @ 0x1403BAC9C (CmpLinkHiveToMaster.c)
 *     CmpVEExecuteParseLogic @ 0x1403BC378 (CmpVEExecuteParseLogic.c)
 *     IopGetDriverNameFromKeyNode @ 0x1403BC9F4 (IopGetDriverNameFromKeyNode.c)
 *     CmRealKCBToVirtualPath @ 0x1403BCD04 (CmRealKCBToVirtualPath.c)
 *     MiResolveImageReferences @ 0x1403CCAA8 (MiResolveImageReferences.c)
 *     MiGenerateSystemImageNames @ 0x1403CD67C (MiGenerateSystemImageNames.c)
 *     CmpNameFromAttributes @ 0x1403DBE88 (CmpNameFromAttributes.c)
 *     CmpOpenHiveFile @ 0x1403DD4E4 (CmpOpenHiveFile.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     IopSymlinkRememberJunction @ 0x1404C0A58 (IopSymlinkRememberJunction.c)
 *     CmpQueryNameString @ 0x1404C2294 (CmpQueryNameString.c)
 *     IopBootLog @ 0x1404C4034 (IopBootLog.c)
 *     RtlpGetRegistryHandle @ 0x1404C9018 (RtlpGetRegistryHandle.c)
 *     pIoQueryDeviceDescription @ 0x1405071C8 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x14050762C (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140507738 (pIoQueryBusDescription.c)
 *     MmCallDllInitialize @ 0x14050A338 (MmCallDllInitialize.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140518D60 (CmpAddRemoveContainerToCLFSLog.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140519EF0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PopDeleteHiberFile @ 0x14051AD40 (PopDeleteHiberFile.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     CmpStartCLFSLog @ 0x140542C50 (CmpStartCLFSLog.c)
 *     IoReportRootDevice @ 0x140543AF4 (IoReportRootDevice.c)
 *     PopCreateHiberFile @ 0x14054BA2C (PopCreateHiberFile.c)
 *     AslRegistryBuildMachinePath @ 0x14054DB20 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x14054DBC0 (AslRegistryBuildUserPath.c)
 *     CmVirtualKCBToRealPath @ 0x1405E1C6C (CmVirtualKCBToRealPath.c)
 *     CmpLoadHiveVolatile @ 0x1405EA5F4 (CmpLoadHiveVolatile.c)
 *     IopSafebootDriverLoad @ 0x1405F8504 (IopSafebootDriverLoad.c)
 *     IopValidateJunctionTarget @ 0x1405F93B0 (IopValidateJunctionTarget.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140603CC0 (PnpQueryRemoveLockedDeviceNode.c)
 *     SdbResolveDatabase @ 0x14067F510 (SdbResolveDatabase.c)
 *     AdtpBuildSidListString @ 0x14068C724 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x14068CA10 (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x14068CC68 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x14068CE4C (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14068D4C8 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14068D560 (AdtpBuildUserAccountControlString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140699A24 (_SysCtxRegOpenCurrentUserKey.c)
 *     CmpAddDriverToList @ 0x1407547E0 (CmpAddDriverToList.c)
 *     ExpandKnownDllsPath @ 0x14075CCB4 (ExpandKnownDllsPath.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140783710 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
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
