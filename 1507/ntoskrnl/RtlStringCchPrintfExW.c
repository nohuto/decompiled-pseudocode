/*
 * XREFs of RtlStringCchPrintfExW @ 0x140019C20
 * Callers:
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x14023E688 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14023E7B8 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14043C0E0 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x14043D5F0 (_CmGetDeviceInstanceKeyPath.c)
 *     _PnpOpenPropertiesKey @ 0x14043E2E0 (_PnpOpenPropertiesKey.c)
 *     _PnpGetGenericStoreProperty @ 0x14043E4F4 (_PnpGetGenericStoreProperty.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140440044 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpStringFromGuid @ 0x140440494 (_PnpStringFromGuid.c)
 *     _PnpSetPropertyWorker @ 0x1404DAFEC (_PnpSetPropertyWorker.c)
 *     PiProcessDriverInstance @ 0x1404E6AB0 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x1404E6E58 (PiFindDevInstMatch.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1405381D8 (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x140549804 (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x140549914 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceSoftwareKey @ 0x140549A10 (_CmGetDeviceSoftwareKey.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x14054CC68 (_CmGetDeviceLogConfKeyPath.c)
 *     _PnpDeletePropertyWorker @ 0x140563ED4 (_PnpDeletePropertyWorker.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1405895B4 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     PipMakeGloballyUniqueId @ 0x1405B1CF8 (PipMakeGloballyUniqueId.c)
 *     _CmGetDeviceControlKeyPath @ 0x1405B7E34 (_CmGetDeviceControlKeyPath.c)
 *     IoReportRootDevice @ 0x1405BA7DC (IoReportRootDevice.c)
 *     DrvDbCreateDatabaseNode @ 0x1405BB0F0 (DrvDbCreateDatabaseNode.c)
 *     PnpDriverLoadingFailed @ 0x1405C1A3C (PnpDriverLoadingFailed.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14067A2E4 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14067A3BC (PipHardwareConfigClearStartOverrides.c)
 *     PpCreateLegacyDeviceIds @ 0x14067B474 (PpCreateLegacyDeviceIds.c)
 *     PiCMGenerateDeviceInstance @ 0x140692DCC (PiCMGenerateDeviceInstance.c)
 *     PiRearrangeDeviceInstances @ 0x1406955BC (PiRearrangeDeviceInstances.c)
 *     RtlFormatMessageEx @ 0x1406CA708 (RtlFormatMessageEx.c)
 *     SdbpGetStandardDatabasePath @ 0x140704768 (SdbpGetStandardDatabasePath.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140716FC0 (_PnpGetGenericStorePropertyLocales.c)
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 * Callees:
 *     sub_140019D00 @ 0x140019D00 (sub_140019D00.c)
 *     sub_140019D80 @ 0x140019D80 (sub_140019D80.c)
 *     unknown_libname_3 @ 0x1401F9E84 (unknown_libname_3.c)
 *     sub_1401F9EA8 @ 0x1401F9EA8 (sub_1401F9EA8.c)
 */

NTSTATUS RtlStringCchPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  NTSTATUS v9; // ebx
  wchar_t *v10; // r12
  size_t v11; // rsi
  NTSTRSAFE_PCWSTR v12; // r9
  __int64 v13; // rax
  NTSTRSAFE_PWSTR v15; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, pszFormat);
  v9 = sub_140019D80(pszDest, cchDest, ppszDestEnd, dwFlags);
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v15 = pszDest;
    v10 = pszDest;
    v16[0] = cchDest;
    v11 = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = (NTSTRSAFE_PCWSTR)&word_140196B30;
      if ( pszFormat )
        v12 = pszFormat;
    }
    else
    {
      v12 = pszFormat;
    }
    v9 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      v16[0] = 0LL;
      v9 = sub_140019D00(pszDest, cchDest, v16, v12, va);
      v13 = v16[0];
      v11 = cchDest - v16[0];
      v16[0] = cchDest - v16[0];
      v10 = &pszDest[v13];
      v15 = v10;
      if ( v9 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v11 > 1 )
          unknown_libname_3(&pszDest[v13], 2 * v11, dwFlags);
        goto LABEL_8;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_8:
        if ( ppszDestEnd )
          *ppszDestEnd = v10;
        if ( pcchRemaining )
          *pcchRemaining = v11;
        return v9;
      }
      v9 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      sub_1401F9EA8(pszDest, 2 * cchDest, 0LL, &v15, v16, dwFlags);
      v10 = v15;
      v11 = v16[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_8;
  }
  return v9;
}
