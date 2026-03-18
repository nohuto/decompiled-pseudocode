/*
 * XREFs of RtlAppendUnicodeToString @ 0x14008FA78
 * Callers:
 *     LdrpGetResourceFileName @ 0x140141A88 (LdrpGetResourceFileName.c)
 *     KsepEvntLogShimsApplied @ 0x1401CCFE4 (KsepEvntLogShimsApplied.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x1401F66E8 (RtlGetAppContainerNamedObjectPath.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14021DBB4 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14021E624 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14021E9EC (AdtpFormatPrefix.c)
 *     CmpLinkHiveToMaster @ 0x1403BAC9C (CmpLinkHiveToMaster.c)
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 *     CmpVEExecuteParseLogic @ 0x1403BC378 (CmpVEExecuteParseLogic.c)
 *     IopGetDriverNameFromKeyNode @ 0x1403BC9F4 (IopGetDriverNameFromKeyNode.c)
 *     CmRealKCBToVirtualPath @ 0x1403BCD04 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x1403BD028 (CmpGetVirtualizationID.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1403BD5A0 (RtlFormatCurrentUserKeyPath.c)
 *     CmpOpenHiveFile @ 0x1403DD4E4 (CmpOpenHiveFile.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140456068 (IopBuildGlobalSymbolicLinkString.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1404BF0E0 (CmpQueryHiveRedirectionFileList.c)
 *     IopSymlinkRememberJunction @ 0x1404C0A58 (IopSymlinkRememberJunction.c)
 *     RtlpGetRegistryHandle @ 0x1404C9018 (RtlpGetRegistryHandle.c)
 *     pIoQueryDeviceDescription @ 0x1405071C8 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140507738 (pIoQueryBusDescription.c)
 *     MmCallDllInitialize @ 0x14050A338 (MmCallDllInitialize.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140519EF0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpMountPreloadedHives @ 0x14051EACC (CmpMountPreloadedHives.c)
 *     PiDrvDbCreateNode @ 0x140525298 (PiDrvDbCreateNode.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     PnpBuildCmResourceList @ 0x14052A17C (PnpBuildCmResourceList.c)
 *     CmpInitializeSystemHivesLoad @ 0x14054307C (CmpInitializeSystemHivesLoad.c)
 *     IoReportRootDevice @ 0x140543AF4 (IoReportRootDevice.c)
 *     AslRegistryBuildMachinePath @ 0x14054DB20 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x14054DBC0 (AslRegistryBuildUserPath.c)
 *     CmpFlushBackupHive @ 0x1405E4F58 (CmpFlushBackupHive.c)
 *     CmpLoadHiveVolatile @ 0x1405EA5F4 (CmpLoadHiveVolatile.c)
 *     IopSafebootDriverLoad @ 0x1405F8504 (IopSafebootDriverLoad.c)
 *     IoWMISuggestInstanceName @ 0x14065D8D8 (IoWMISuggestInstanceName.c)
 *     ExpValidateLocale @ 0x14066BE6C (ExpValidateLocale.c)
 *     SdbResolveDatabase @ 0x14067F510 (SdbResolveDatabase.c)
 *     AdtpBuildSidListString @ 0x14068C724 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x14068CA10 (AdtpBuildStringListString.c)
 *     AdtpBuildAccessesString @ 0x14068CE4C (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14068D4C8 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14068D560 (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x14068E06C (BiResolveLocateDevice.c)
 *     CmpInitializePreloadedHive @ 0x140745898 (CmpInitializePreloadedHive.c)
 *     CmpAddDriverToList @ 0x1407547E0 (CmpAddDriverToList.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140783710 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x140166980 (memmove.c)
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
