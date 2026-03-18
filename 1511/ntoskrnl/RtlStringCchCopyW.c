/*
 * XREFs of RtlStringCchCopyW @ 0x140002AB0
 * Callers:
 *     PopLogNotifyDevice @ 0x1401EE8BC (PopLogNotifyDevice.c)
 *     AslFileMappingCreate @ 0x1403B6E64 (AslFileMappingCreate.c)
 *     SdbpCreateSearchDBContext @ 0x1403B83B4 (SdbpCreateSearchDBContext.c)
 *     AslPathSplit @ 0x1403B8D2C (AslPathSplit.c)
 *     ExpGetGlobalLocaleSection @ 0x140464988 (ExpGetGlobalLocaleSection.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x1404A07E0 (PnpNotifyUserModeDeviceRemoval.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1404EEB20 (_CmGetDeviceContainerIdFromBase.c)
 *     WmipMangleInstanceName @ 0x1405022CC (WmipMangleInstanceName.c)
 *     IoWMIOpenBlock @ 0x14050B130 (IoWMIOpenBlock.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140517310 (DrvDbGetObjectSubKeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140531D0C (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140532164 (_CmEnumSubkeyCallback.c)
 *     AslEnvResolveVars @ 0x140535A6C (AslEnvResolveVars.c)
 *     PipMakeGloballyUniqueId @ 0x14053AE10 (PipMakeGloballyUniqueId.c)
 *     AslFileMappingCreateFromImageView @ 0x14053FBC4 (AslFileMappingCreateFromImageView.c)
 *     PpmRegisterProfiles @ 0x140543F34 (PpmRegisterProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1405F18E4 (DbgkWerCaptureLiveKernelDump.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140634184 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     RtlFormatMessageEx @ 0x140647624 (RtlFormatMessageEx.c)
 *     SdbQueryDataExTagID @ 0x14067D158 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14067DA2C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbGetAppPatchDirEx @ 0x14067F470 (SdbGetAppPatchDirEx.c)
 *     AslStringDuplicate @ 0x1406802AC (AslStringDuplicate.c)
 *     AslPathToSystemPath @ 0x140680DB0 (AslPathToSystemPath.c)
 *     AslpFileQueryVersionString @ 0x1406832F8 (AslpFileQueryVersionString.c)
 *     AslpFileVerQueryValue @ 0x1406834D4 (AslpFileVerQueryValue.c)
 *     GetPrintableOperandValue @ 0x140689058 (GetPrintableOperandValue.c)
 *     IopStoreSystemPartitionInformation @ 0x14075363C (IopStoreSystemPartitionInformation.c)
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
