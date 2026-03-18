/*
 * XREFs of RtlAppendUnicodeToString @ 0x1400C3920
 * Callers:
 *     LdrpGetResourceFileName @ 0x14014AFC0 (LdrpGetResourceFileName.c)
 *     QueryFeatureOverride @ 0x1401B8A54 (QueryFeatureOverride.c)
 *     KsepEvntLogShimsApplied @ 0x1401DCC68 (KsepEvntLogShimsApplied.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x14021091C (RtlGetAppContainerNamedObjectPath.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140238284 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140238CF4 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1402390BC (AdtpFormatPrefix.c)
 *     CmRealKCBToVirtualPath @ 0x1403E1950 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x1403E1B4C (CmpGetVirtualizationID.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1403F2484 (IopBuildGlobalSymbolicLinkString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1403F7A20 (RtlFormatCurrentUserKeyPath.c)
 *     CmpOpenHiveFile @ 0x1403F9400 (CmpOpenHiveFile.c)
 *     CmpQueryHiveRedirectionFileList @ 0x14049C69C (CmpQueryHiveRedirectionFileList.c)
 *     IopLoadDriver @ 0x14049E388 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x14049F27C (IopGetDriverNameFromKeyNode.c)
 *     RtlpGetRegistryHandle @ 0x1404FADEC (RtlpGetRegistryHandle.c)
 *     pIoQueryDeviceDescription @ 0x14053F6C0 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14053FC30 (pIoQueryBusDescription.c)
 *     IopSymlinkRememberJunction @ 0x140540AD0 (IopSymlinkRememberJunction.c)
 *     MmCallDllInitialize @ 0x1405442A0 (MmCallDllInitialize.c)
 *     PiDrvDbCreateNode @ 0x140551BDC (PiDrvDbCreateNode.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceList @ 0x1405563CC (PnpBuildCmResourceList.c)
 *     CmpMountPreloadedHives @ 0x14055E464 (CmpMountPreloadedHives.c)
 *     AslRegistryBuildMachinePath @ 0x1405735D4 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140573674 (AslRegistryBuildUserPath.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405770F4 (CmpInitializeSystemHivesLoad.c)
 *     IoReportRootDevice @ 0x140577E18 (IoReportRootDevice.c)
 *     CmpFlushBackupHive @ 0x1406044B0 (CmpFlushBackupHive.c)
 *     CmpLoadHiveVolatile @ 0x14060D2DC (CmpLoadHiveVolatile.c)
 *     VrpPreLoadKey @ 0x140615D08 (VrpPreLoadKey.c)
 *     VrpBuildKeyPath @ 0x140617AE4 (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x14062238C (IopSafebootDriverLoad.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14064C2B4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IoWMISuggestInstanceName @ 0x14069CF14 (IoWMISuggestInstanceName.c)
 *     ExpValidateLocale @ 0x1406AC70C (ExpValidateLocale.c)
 *     SdbResolveDatabase @ 0x1406C44AC (SdbResolveDatabase.c)
 *     AdtpBuildSidListString @ 0x1406D0F58 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x1406D1244 (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x1406D1680 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x1406D1CFC (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1406D1D94 (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x1406D28CC (BiResolveLocateDevice.c)
 *     CmpInitializePreloadedHive @ 0x1407AE20C (CmpInitializePreloadedHive.c)
 *     CmpAddDriverToList @ 0x1407AFE90 (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1407CEF34 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C39C0 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x140171280 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeToString(PUNICODE_STRING Destination, PCWSTR Source)
{
  unsigned __int16 Length; // bp
  wchar_t *v5; // r14
  UNICODE_STRING v7; // [rsp+20h] [rbp-28h] BYREF

  if ( !Source )
    return 0;
  if ( RtlInitUnicodeStringEx(&v7, Source) >= 0 )
  {
    Length = v7.Length;
    if ( Destination->Length + v7.Length <= Destination->MaximumLength )
    {
      v5 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
      memmove(v5, Source, v7.Length);
      Destination->Length += Length;
      if ( Destination->Length + 1 < Destination->MaximumLength )
        v5[(unsigned __int64)Length >> 1] = 0;
      return 0;
    }
  }
  return -1073741789;
}
