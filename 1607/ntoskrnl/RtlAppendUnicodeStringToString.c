/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x140087614
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1401DCC68 (KsepEvntLogShimsApplied.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x14021091C (RtlGetAppContainerNamedObjectPath.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140238284 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140238CF4 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1402390BC (AdtpFormatPrefix.c)
 *     CmRealKCBToVirtualPath @ 0x1403E1950 (CmRealKCBToVirtualPath.c)
 *     IopValidateJunctionTarget @ 0x1403E2B58 (IopValidateJunctionTarget.c)
 *     CmpOpenHiveFile @ 0x1403F9400 (CmpOpenHiveFile.c)
 *     MiResolveImageReferences @ 0x14046C67C (MiResolveImageReferences.c)
 *     MiGenerateSystemImageNames @ 0x140483EFC (MiGenerateSystemImageNames.c)
 *     CmpQueryNameString @ 0x14049B4E4 (CmpQueryNameString.c)
 *     CmpNameFromAttributes @ 0x14049C2AC (CmpNameFromAttributes.c)
 *     CmpInitCmRM @ 0x14049EB58 (CmpInitCmRM.c)
 *     IopGetDriverNameFromKeyNode @ 0x14049F27C (IopGetDriverNameFromKeyNode.c)
 *     CmpStartCLFSLog @ 0x1404DAE78 (CmpStartCLFSLog.c)
 *     IopBootLog @ 0x1404EFE0C (IopBootLog.c)
 *     RtlpGetRegistryHandle @ 0x1404FADEC (RtlpGetRegistryHandle.c)
 *     pIoQueryDeviceDescription @ 0x14053F6C0 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x14053FB24 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14053FC30 (pIoQueryBusDescription.c)
 *     IopSymlinkRememberJunction @ 0x140540AD0 (IopSymlinkRememberJunction.c)
 *     MmCallDllInitialize @ 0x1405442A0 (MmCallDllInitialize.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     PopCreateHiberFile @ 0x14056CF34 (PopCreateHiberFile.c)
 *     AslRegistryBuildMachinePath @ 0x1405735D4 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140573674 (AslRegistryBuildUserPath.c)
 *     IoReportRootDevice @ 0x140577E18 (IoReportRootDevice.c)
 *     CmVirtualKCBToRealPath @ 0x14060035C (CmVirtualKCBToRealPath.c)
 *     CmpLoadHiveVolatile @ 0x14060D2DC (CmpLoadHiveVolatile.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140611640 (CmpAddRemoveContainerToCLFSLog.c)
 *     VrpPreLoadKey @ 0x140615D08 (VrpPreLoadKey.c)
 *     VrpBuildKeyPath @ 0x140617AE4 (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x14062238C (IopSafebootDriverLoad.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14062E0BC (PnpQueryRemoveLockedDeviceNode.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14064C2B4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     SdbResolveDatabase @ 0x1406C44AC (SdbResolveDatabase.c)
 *     AdtpBuildSidListString @ 0x1406D0F58 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x1406D1244 (AdtpBuildStringListString.c)
 *     AdtpAppendString @ 0x1406D149C (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x1406D1680 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x1406D1CFC (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1406D1D94 (AdtpBuildUserAccountControlString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1406DF998 (_SysCtxRegOpenCurrentUserKey.c)
 *     ObGetSiloRootDirectoryPath @ 0x1406E6284 (ObGetSiloRootDirectoryPath.c)
 *     ExpandKnownDllsPath @ 0x1407A38A0 (ExpandKnownDllsPath.c)
 *     CmpAddDriverToList @ 0x1407AFE90 (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1407CEF34 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
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
