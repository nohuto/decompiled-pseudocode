/*
 * XREFs of wcscpy_s @ 0x140177D84
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x1405006DC (RtlConvertSidToUnicodeString.c)
 *     BiGetSystemStorePath @ 0x14056D3D0 (BiGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14056E654 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14057093C (BiConvertNtDeviceToBootEnvironment.c)
 *     RtlLockBootStatusData @ 0x140583F50 (RtlLockBootStatusData.c)
 *     AslPathToNetworkPathNt @ 0x1405ABCE8 (AslPathToNetworkPathNt.c)
 *     NtLockProductActivationKeys @ 0x1405AD7FC (NtLockProductActivationKeys.c)
 *     CmDeleteKeyRecursive @ 0x14065EBF8 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14065F708 (CmpCreateHwProfileFriendlyName.c)
 *     PnprGetPluginDriverImagePath @ 0x14068FE44 (PnprGetPluginDriverImagePath.c)
 *     sub_1406EF8FC @ 0x1406EF8FC (sub_1406EF8FC.c)
 *     ExpConvertArcName @ 0x1406F0B40 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x1406F0F04 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x1406F11CC (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x1406F1298 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1406F1454 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x1406F1CDC (ExpParseArcPathName.c)
 *     ExpTranslateEfiPath @ 0x1406F3630 (ExpTranslateEfiPath.c)
 *     LocalConvertAclToString @ 0x140708CD8 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1407097E4 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x140709FDC (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x14070A0FC (LocalGetStringForSid.c)
 *     BiCreateFileDeviceElement @ 0x14070E17C (BiCreateFileDeviceElement.c)
 *     HdlspKernelAddLogEntry @ 0x14075A844 (HdlspKernelAddLogEntry.c)
 *     sub_1407DD578 @ 0x1407DD578 (sub_1407DD578.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
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
