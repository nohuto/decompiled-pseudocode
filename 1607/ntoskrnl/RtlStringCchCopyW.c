/*
 * XREFs of RtlStringCchCopyW @ 0x14010B1EC
 * Callers:
 *     PopLogNotifyDevice @ 0x1402071F4 (PopLogNotifyDevice.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x1404851F8 (PnpNotifyUserModeDeviceRemoval.c)
 *     ExpGetGlobalLocaleSection @ 0x1404B6830 (ExpGetGlobalLocaleSection.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140513264 (_CmGetDeviceContainerIdFromBase.c)
 *     AslPathSplit @ 0x140513880 (AslPathSplit.c)
 *     SdbpCreateSearchDBContext @ 0x140514734 (SdbpCreateSearchDBContext.c)
 *     AslFileMappingCreate @ 0x1405153C4 (AslFileMappingCreate.c)
 *     WmipMangleInstanceName @ 0x1405383F8 (WmipMangleInstanceName.c)
 *     IoWMIOpenBlock @ 0x140545C0C (IoWMIOpenBlock.c)
 *     TtmNotifyDeviceArrival @ 0x140546F5C (TtmNotifyDeviceArrival.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140562D74 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1405631D8 (_CmEnumSubkeyCallback.c)
 *     PipMakeGloballyUniqueId @ 0x14056FB04 (PipMakeGloballyUniqueId.c)
 *     AslFileMappingCreateFromImageView @ 0x140571838 (AslFileMappingCreateFromImageView.c)
 *     PpmRegisterProfiles @ 0x140578A20 (PpmRegisterProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14061BBF0 (DbgkWerCaptureLiveKernelDump.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14066C680 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     TtmpPublishDeviceEvent @ 0x140677528 (TtmpPublishDeviceEvent.c)
 *     RtlFormatMessageEx @ 0x140687034 (RtlFormatMessageEx.c)
 *     SdbQueryDataExTagID @ 0x1406C1B14 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1406C26A4 (SdbpCheckMatchingRegistryEntry.c)
 *     SdbGetAppPatchDirEx @ 0x1406C4544 (SdbGetAppPatchDirEx.c)
 *     AslStringDuplicate @ 0x1406C54B0 (AslStringDuplicate.c)
 *     AslPathToSystemPath @ 0x1406C62C4 (AslPathToSystemPath.c)
 *     AslEnvResolveVars @ 0x1406C680C (AslEnvResolveVars.c)
 *     AslpFileQueryVersionString @ 0x1406C8FB4 (AslpFileQueryVersionString.c)
 *     GetPrintableOperandValue @ 0x1406CD9D4 (GetPrintableOperandValue.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1406E1C00 (DrvDbGetObjectSubKeyCallback.c)
 *     IopStoreSystemPartitionInformation @ 0x140798C34 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v4; // r10
  signed __int64 v5; // r8
  wchar_t v6; // ax

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( !cchDest )
      return v3;
  }
  else
  {
    v3 = 0;
    if ( !cchDest )
      goto LABEL_12;
    v4 = 2147483646 - cchDest;
    v5 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v4 + cchDest) )
        break;
      v6 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v5);
      if ( !v6 )
        break;
      *pszDest++ = v6;
      --cchDest;
    }
    while ( cchDest );
    if ( !cchDest )
    {
LABEL_12:
      --pszDest;
      v3 = -2147483643;
    }
  }
  *pszDest = 0;
  return v3;
}
