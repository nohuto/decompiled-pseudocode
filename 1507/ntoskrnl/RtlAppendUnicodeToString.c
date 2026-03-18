/*
 * XREFs of RtlAppendUnicodeToString @ 0x1400151B4
 * Callers:
 *     LdrpGetResourceFileName @ 0x14016FA64 (LdrpGetResourceFileName.c)
 *     KsepEvntLogShimsApplied @ 0x14020C348 (KsepEvntLogShimsApplied.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x1402453EC (RtlGetAppContainerNamedObjectPath.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14026CFDC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14026DA4C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14026DE14 (AdtpFormatPrefix.c)
 *     CmRealKCBToVirtualPath @ 0x140407BD4 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x140407F88 (CmpGetVirtualizationID.c)
 *     CmpOpenHiveFile @ 0x14044B07C (CmpOpenHiveFile.c)
 *     RtlpGetRegistryHandle @ 0x1404AAC78 (RtlpGetRegistryHandle.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1404E3A00 (IopBuildGlobalSymbolicLinkString.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404E76EC (IopGetDriverNameFromKeyNode.c)
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1404EC358 (CmpQueryHiveRedirectionFileList.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1404FF914 (RtlFormatCurrentUserKeyPath.c)
 *     IopSymlinkRememberJunction @ 0x14054891C (IopSymlinkRememberJunction.c)
 *     MmCallDllInitialize @ 0x140571780 (MmCallDllInitialize.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     pIoQueryDeviceDescription @ 0x14057D9B0 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14057DF20 (pIoQueryBusDescription.c)
 *     AdtpBuildAccessesString @ 0x1405862D4 (AdtpBuildAccessesString.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14058D558 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbCreateNode @ 0x1405956B0 (PiDrvDbCreateNode.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceList @ 0x14059CAA8 (PnpBuildCmResourceList.c)
 *     CmpMountPreloadedHives @ 0x1405A4DC4 (CmpMountPreloadedHives.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405B9910 (CmpInitializeSystemHivesLoad.c)
 *     IoReportRootDevice @ 0x1405BA7DC (IoReportRootDevice.c)
 *     AslRegistryBuildMachinePath @ 0x1405C5260 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1405C5300 (AslRegistryBuildUserPath.c)
 *     CmpFlushBackupHive @ 0x14065BE6C (CmpFlushBackupHive.c)
 *     CmpLoadHiveVolatile @ 0x140661E7C (CmpLoadHiveVolatile.c)
 *     IopSafebootDriverLoad @ 0x14067249C (IopSafebootDriverLoad.c)
 *     IoWMISuggestInstanceName @ 0x1406E0180 (IoWMISuggestInstanceName.c)
 *     ExpValidateLocale @ 0x1406EF500 (ExpValidateLocale.c)
 *     SdbResolveDatabase @ 0x140704364 (SdbResolveDatabase.c)
 *     AdtpBuildSidListString @ 0x14070CA9C (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x14070CD88 (AdtpBuildStringListString.c)
 *     AdtpBuildReplacementString @ 0x14070CFE0 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14070D078 (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x14070DB84 (BiResolveLocateDevice.c)
 *     CmpAddDriverToList @ 0x1407BAEFC (CmpAddDriverToList.c)
 *     CmpInitializePreloadedHive @ 0x1407D74A8 (CmpInitializePreloadedHive.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1407F9E94 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x140195740 (memmove.c)
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
