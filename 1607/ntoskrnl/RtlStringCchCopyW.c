/*
 * XREFs of RtlStringCchCopyW @ 0x140084F38
 * Callers:
 *     PopLogNotifyDevice @ 0x1402073C8 (PopLogNotifyDevice.c)
 *     SdbpCreateSearchDBContext @ 0x1404853AC (SdbpCreateSearchDBContext.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140486454 (_CmGetDeviceContainerIdFromBase.c)
 *     AslPathSplit @ 0x140486A70 (AslPathSplit.c)
 *     AslFileMappingCreate @ 0x14049D54C (AslFileMappingCreate.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x1404C4600 (PnpNotifyUserModeDeviceRemoval.c)
 *     ExpGetGlobalLocaleSection @ 0x1404D2D90 (ExpGetGlobalLocaleSection.c)
 *     WmipMangleInstanceName @ 0x140537EB8 (WmipMangleInstanceName.c)
 *     IoWMIOpenBlock @ 0x1405456CC (IoWMIOpenBlock.c)
 *     TtmNotifyDeviceArrival @ 0x140546A1C (TtmNotifyDeviceArrival.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140562834 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140562C98 (_CmEnumSubkeyCallback.c)
 *     PipMakeGloballyUniqueId @ 0x14056F5C4 (PipMakeGloballyUniqueId.c)
 *     AslFileMappingCreateFromImageView @ 0x1405712F8 (AslFileMappingCreateFromImageView.c)
 *     PpmRegisterProfiles @ 0x1405784E0 (PpmRegisterProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14061BB3C (DbgkWerCaptureLiveKernelDump.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14066C59C (PopFxInitializeSocSubsystemStaticInfo.c)
 *     TtmpPublishDeviceEvent @ 0x140677444 (TtmpPublishDeviceEvent.c)
 *     RtlFormatMessageEx @ 0x140686F50 (RtlFormatMessageEx.c)
 *     SdbQueryDataExTagID @ 0x1406C19DC (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1406C256C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbGetAppPatchDirEx @ 0x1406C440C (SdbGetAppPatchDirEx.c)
 *     AslStringDuplicate @ 0x1406C5378 (AslStringDuplicate.c)
 *     AslPathToSystemPath @ 0x1406C618C (AslPathToSystemPath.c)
 *     AslEnvResolveVars @ 0x1406C66D4 (AslEnvResolveVars.c)
 *     AslpFileQueryVersionString @ 0x1406C8E7C (AslpFileQueryVersionString.c)
 *     GetPrintableOperandValue @ 0x1406CD89C (GetPrintableOperandValue.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1406E1AC8 (DrvDbGetObjectSubKeyCallback.c)
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
