/*
 * XREFs of RtlStringCchCopyW @ 0x14011BAF4
 * Callers:
 *     PopLogNotifyDevice @ 0x14023CF74 (PopLogNotifyDevice.c)
 *     ExpGetGlobalLocaleSection @ 0x140464DB4 (ExpGetGlobalLocaleSection.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x140536EEC (PnpNotifyUserModeDeviceRemoval.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140537BF4 (_CmGetDeviceContainerIdFromBase.c)
 *     WmipMangleInstanceName @ 0x14057BE58 (WmipMangleInstanceName.c)
 *     IoWMIOpenBlock @ 0x14058240C (IoWMIOpenBlock.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405A8E28 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1405A9344 (_CmEnumSubkeyCallback.c)
 *     AslEnvResolveVars @ 0x1405AA358 (AslEnvResolveVars.c)
 *     AslFileMappingCreate @ 0x1405AAB1C (AslFileMappingCreate.c)
 *     SdbpCreateSearchDBContext @ 0x1405AAEC8 (SdbpCreateSearchDBContext.c)
 *     AslPathSplit @ 0x1405AB068 (AslPathSplit.c)
 *     PipMakeGloballyUniqueId @ 0x1405B1CF8 (PipMakeGloballyUniqueId.c)
 *     PpmRegisterProfiles @ 0x1405B9F50 (PpmRegisterProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14066A574 (DbgkWerCaptureLiveKernelDump.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1406B3808 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     RtlFormatMessageEx @ 0x1406CA708 (RtlFormatMessageEx.c)
 *     SdbQueryDataExTagID @ 0x140701FC4 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140702898 (SdbpCheckMatchingRegistryEntry.c)
 *     SdbGetAppPatchDirEx @ 0x1407042C4 (SdbGetAppPatchDirEx.c)
 *     AslStringDuplicate @ 0x1407050E0 (AslStringDuplicate.c)
 *     AslPathToSystemPath @ 0x140705B6C (AslPathToSystemPath.c)
 *     AslpFileQueryVersionString @ 0x140707F9C (AslpFileQueryVersionString.c)
 *     AslpFileVerQueryValue @ 0x140708178 (AslpFileVerQueryValue.c)
 *     GetPrintableOperandValue @ 0x14070AA38 (GetPrintableOperandValue.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x14071B63C (DrvDbGetObjectSubKeyCallback.c)
 *     IopStoreSystemPartitionInformation @ 0x1407B634C (IopStoreSystemPartitionInformation.c)
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
