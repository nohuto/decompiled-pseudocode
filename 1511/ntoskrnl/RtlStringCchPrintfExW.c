/*
 * XREFs of RtlStringCchPrintfExW @ 0x14008FB80
 * Callers:
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1401F029C (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x1401F03CC (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PiProcessDriverInstance @ 0x1403B9744 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x1403B9AEC (PiFindDevInstMatch.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x14043C3B0 (_CmGetDeviceInstanceKeyPath.c)
 *     _PnpOpenPropertiesKey @ 0x14043F144 (_PnpOpenPropertiesKey.c)
 *     _PnpGetGenericStoreProperty @ 0x14043F704 (_PnpGetGenericStoreProperty.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x140442490 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _PnpStringFromGuid @ 0x14045C050 (_PnpStringFromGuid.c)
 *     _PnpSetPropertyWorker @ 0x14045CE24 (_PnpSetPropertyWorker.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1404AF46C (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceSoftwareKey @ 0x1404AF568 (_CmGetDeviceSoftwareKey.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x1404B593C (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1404DD4B4 (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1404DE404 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x1404E7C60 (_CmGetDeviceLogConfKeyPath.c)
 *     _PnpDeletePropertyWorker @ 0x1404EBCF8 (_PnpDeletePropertyWorker.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x14051A13C (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     DrvDbCreateDatabaseNode @ 0x140524640 (DrvDbCreateDatabaseNode.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     PipMakeGloballyUniqueId @ 0x14053AE10 (PipMakeGloballyUniqueId.c)
 *     _CmGetDeviceControlKeyPath @ 0x140541BA0 (_CmGetDeviceControlKeyPath.c)
 *     IoReportRootDevice @ 0x140543AF4 (IoReportRootDevice.c)
 *     PnpDriverLoadingFailed @ 0x140549F80 (PnpDriverLoadingFailed.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x1405FF720 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x1405FF7F8 (PipHardwareConfigClearStartOverrides.c)
 *     PpCreateLegacyDeviceIds @ 0x140600864 (PpCreateLegacyDeviceIds.c)
 *     PiCMGenerateDeviceInstance @ 0x1406132A8 (PiCMGenerateDeviceInstance.c)
 *     PiRearrangeDeviceInstances @ 0x140616D1C (PiRearrangeDeviceInstances.c)
 *     RtlFormatMessageEx @ 0x140647624 (RtlFormatMessageEx.c)
 *     SdbpGetStandardDatabasePath @ 0x14067F914 (SdbpGetStandardDatabasePath.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14069712C (_PnpGetGenericStorePropertyLocales.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 * Callees:
 *     _vsnwprintf @ 0x1401439B8 (_vsnwprintf.c)
 *     unknown_libname_3 @ 0x1401BE61C (unknown_libname_3.c)
 *     sub_1401BE640 @ 0x1401BE640 (sub_1401BE640.c)
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
  NTSTATUS v9; // r10d
  wchar_t *v10; // rbp
  size_t v11; // rdi
  NTSTRSAFE_PCWSTR v12; // r8
  NTSTATUS v13; // r14d
  size_t v14; // rbx
  int v15; // eax
  NTSTATUS result; // eax
  NTSTRSAFE_PWSTR v17; // [rsp+30h] [rbp-58h] BYREF
  size_t v18[2]; // [rsp+38h] [rbp-50h] BYREF
  va_list Args; // [rsp+C0h] [rbp+38h] BYREF

  va_start(Args, pszFormat);
  v9 = 0;
  if ( (dwFlags & 0x100) == 0 )
  {
    if ( cchDest - 1 <= 0x7FFFFFFE )
      goto LABEL_3;
    goto LABEL_23;
  }
  if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
LABEL_23:
    v9 = -1073741811;
LABEL_3:
  if ( v9 >= 0 )
  {
    v10 = pszDest;
    v11 = cchDest;
    v17 = pszDest;
    v18[0] = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = (NTSTRSAFE_PCWSTR)&word_140167200;
      if ( pszFormat )
        v12 = pszFormat;
    }
    else
    {
      v12 = pszFormat;
    }
    v13 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v13 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
      goto LABEL_29;
    }
    if ( !cchDest )
    {
      if ( !*v12 )
      {
LABEL_14:
        if ( ppszDestEnd )
          *ppszDestEnd = v10;
        result = v13;
        if ( pcchRemaining )
          *pcchRemaining = v11;
        return result;
      }
      v13 = -2147483643;
      if ( !pszDest )
        v13 = -1073741811;
LABEL_29:
      if ( (dwFlags & 0x1C00) != 0 && cchDest )
      {
        sub_1401BE640(pszDest, 2 * cchDest, 0LL, &v17, v18, dwFlags);
        v10 = v17;
        v11 = v18[0];
      }
      if ( (int)(v13 + 0x80000000) >= 0 && v13 != -2147483643 )
        return v13;
      goto LABEL_14;
    }
    v14 = cchDest - 1;
    v15 = vsnwprintf(pszDest, cchDest - 1, v12, Args);
    if ( v15 >= 0 )
    {
      if ( v15 == v14 )
      {
LABEL_19:
        pszDest[v14] = 0;
LABEL_12:
        v11 = cchDest - v14;
        v10 = &pszDest[v14];
        v17 = v10;
        v18[0] = cchDest - v14;
        if ( v13 >= 0 )
        {
          if ( (dwFlags & 0x200) != 0 && v11 > 1 )
            unknown_libname_3(v10, 2 * v11, dwFlags);
          goto LABEL_14;
        }
        goto LABEL_29;
      }
      if ( v15 <= v14 )
      {
        v14 = v15;
        goto LABEL_12;
      }
    }
    v13 = -2147483643;
    goto LABEL_19;
  }
  result = v9;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
