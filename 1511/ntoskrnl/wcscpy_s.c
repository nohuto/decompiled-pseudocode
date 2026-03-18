/*
 * XREFs of wcscpy_s @ 0x140149D04
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x1403BD6A8 (RtlConvertSidToUnicodeString.c)
 *     BiGetSystemStorePath @ 0x1404FAE38 (BiGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1404FC02C (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x1404FDCF4 (BiConvertNtDeviceToBootEnvironment.c)
 *     RtlLockBootStatusData @ 0x14050CBEC (RtlLockBootStatusData.c)
 *     NtLockProductActivationKeys @ 0x1405343A4 (NtLockProductActivationKeys.c)
 *     AslPathToNetworkPathNt @ 0x1405361CC (AslPathToNetworkPathNt.c)
 *     CmDeleteKeyRecursive @ 0x1405E76E0 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1405E81F0 (CmpCreateHwProfileFriendlyName.c)
 *     PnprGetPluginDriverImagePath @ 0x1406100D0 (PnprGetPluginDriverImagePath.c)
 *     sub_14066C188 @ 0x14066C188 (sub_14066C188.c)
 *     ExpConvertArcName @ 0x14066D234 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x14066D5F8 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x14066D8C0 (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x14066D98C (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x14066DB48 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x14066E324 (ExpParseArcPathName.c)
 *     ExpTranslateEfiPath @ 0x14066FA84 (ExpTranslateEfiPath.c)
 *     LocalConvertAclToString @ 0x140684128 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140684C48 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x140686A00 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x140686B20 (LocalGetStringForSid.c)
 *     BiCreateFileDeviceElement @ 0x14068E664 (BiCreateFileDeviceElement.c)
 *     HdlspKernelAddLogEntry @ 0x1406D771C (HdlspKernelAddLogEntry.c)
 *     sub_14076925C @ 0x14076925C (sub_14076925C.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
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
      PopPoCoalescinCallback();
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
    PopPoCoalescinCallback();
    return 22;
  }
}
