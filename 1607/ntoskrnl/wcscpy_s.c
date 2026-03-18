/*
 * XREFs of wcscpy_s @ 0x140153094
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x1403F8710 (RtlConvertSidToUnicodeString.c)
 *     BiGetSystemStorePath @ 0x14053B764 (BiGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14053C928 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14053E75C (BiConvertNtDeviceToBootEnvironment.c)
 *     RtlLockBootStatusData @ 0x1405478FC (RtlLockBootStatusData.c)
 *     NtLockProductActivationKeys @ 0x140567998 (NtLockProductActivationKeys.c)
 *     CmDeleteKeyRecursive @ 0x140606DF0 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140607904 (CmpCreateHwProfileFriendlyName.c)
 *     PnprGetPluginDriverImagePath @ 0x1406444DC (PnprGetPluginDriverImagePath.c)
 *     ExpWatchLicenseInfoWork @ 0x1406AC9EC (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x1406AFF50 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x1406B0314 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x1406B05D8 (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x1406B06A4 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1406B0860 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x1406B103C (ExpParseArcPathName.c)
 *     ExpTranslateEfiPath @ 0x1406B278C (ExpTranslateEfiPath.c)
 *     AslPathToNetworkPathNt @ 0x1406C60B4 (AslPathToNetworkPathNt.c)
 *     LocalConvertAclToString @ 0x1406CA388 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406CAE68 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1406CB6F8 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x1406CB818 (LocalGetStringForSid.c)
 *     BiCreateFileDeviceElement @ 0x1406D2E50 (BiCreateFileDeviceElement.c)
 *     HdlspKernelAddLogEntry @ 0x14072371C (HdlspKernelAddLogEntry.c)
 *     ExpWatchProductTypeInitialization @ 0x1407A9F80 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x140130D64 (xHalFreeMessageTarget.c)
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
