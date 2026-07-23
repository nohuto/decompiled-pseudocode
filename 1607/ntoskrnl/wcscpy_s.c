/*
 * XREFs of wcscpy_s @ 0x140153654
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x1403F75D0 (RtlConvertSidToUnicodeString.c)
 *     BiGetSystemStorePath @ 0x14053BCA4 (BiGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14053CE68 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14053EC9C (BiConvertNtDeviceToBootEnvironment.c)
 *     RtlLockBootStatusData @ 0x140547E3C (RtlLockBootStatusData.c)
 *     NtLockProductActivationKeys @ 0x140567ED8 (NtLockProductActivationKeys.c)
 *     CmDeleteKeyRecursive @ 0x140606EA4 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1406079B8 (CmpCreateHwProfileFriendlyName.c)
 *     PnprGetPluginDriverImagePath @ 0x1406445C0 (PnprGetPluginDriverImagePath.c)
 *     ExpWatchLicenseInfoWork @ 0x1406ACB24 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x1406B0088 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x1406B044C (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x1406B0710 (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x1406B07DC (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1406B0998 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x1406B1174 (ExpParseArcPathName.c)
 *     ExpTranslateEfiPath @ 0x1406B28C4 (ExpTranslateEfiPath.c)
 *     AslPathToNetworkPathNt @ 0x1406C61EC (AslPathToNetworkPathNt.c)
 *     LocalConvertAclToString @ 0x1406CA4C0 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406CAFA0 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1406CB830 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x1406CB950 (LocalGetStringForSid.c)
 *     BiCreateFileDeviceElement @ 0x1406D2F88 (BiCreateFileDeviceElement.c)
 *     HdlspKernelAddLogEntry @ 0x14072371C (HdlspKernelAddLogEntry.c)
 *     ExpWatchProductTypeInitialization @ 0x1407A9F80 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 */

errno_t __cdecl wcscpy_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  wchar_t v6; // ax

  if ( Dst && SizeInWords )
  {
    if ( !Src )
    {
      v4 = 22;
LABEL_10:
      *Dst = 0;
      xHalFreeMessageTarget();
      return v4;
    }
    v5 = (char *)Dst - (char *)Src;
    do
    {
      v6 = *Src;
      *(const wchar_t *)((char *)Src + v5) = *Src;
      ++Src;
      if ( !v6 )
        break;
      --SizeInWords;
    }
    while ( SizeInWords );
    if ( !SizeInWords )
    {
      v4 = 34;
      goto LABEL_10;
    }
    return 0;
  }
  else
  {
    xHalFreeMessageTarget();
    return 22;
  }
}
