/*
 * XREFs of RtlStringCchPrintfExW @ 0x1400C1890
 * Callers:
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x140208EA4 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140208FD4 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1404B7480 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceSoftwareKey @ 0x1404B757C (_CmGetDeviceSoftwareKey.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x1404C00B4 (_CmGetDeviceLogConfKeyPath.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x1404C4294 (_CmGetDeviceHardwareKeyPath.c)
 *     _PnpStringFromGuid @ 0x1404CB360 (_PnpStringFromGuid.c)
 *     _PnpDeletePropertyWorker @ 0x1404D2D04 (_PnpDeletePropertyWorker.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1404DAD18 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpGetGenericStoreProperty @ 0x1404DD9A0 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenPropertiesKey @ 0x1404DDBBC (_PnpOpenPropertiesKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1404DE090 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x1404E1060 (_CmGetDeviceInstanceKeyPath.c)
 *     _PnpSetPropertyWorker @ 0x140512B14 (_PnpSetPropertyWorker.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x140513790 (_CmGetDeviceContainerRegKeyPath.c)
 *     PiProcessDriverInstance @ 0x140538D04 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x14053951C (PiFindDevInstMatch.c)
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 *     PipMakeGloballyUniqueId @ 0x14056FB04 (PipMakeGloballyUniqueId.c)
 *     _CmGetDeviceControlKeyPath @ 0x140575960 (_CmGetDeviceControlKeyPath.c)
 *     IoReportRootDevice @ 0x140578358 (IoReportRootDevice.c)
 *     DrvDbCreateDatabaseNode @ 0x1405790F0 (DrvDbCreateDatabaseNode.c)
 *     PnpDriverLoadingFailed @ 0x14057FD04 (PnpDriverLoadingFailed.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x140629824 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x1406298FC (PipHardwareConfigClearStartOverrides.c)
 *     PpCreateLegacyDeviceIds @ 0x14062A964 (PpCreateLegacyDeviceIds.c)
 *     PiCMGenerateDeviceInstance @ 0x1406478D0 (PiCMGenerateDeviceInstance.c)
 *     PiRearrangeDeviceInstances @ 0x14064B824 (PiRearrangeDeviceInstances.c)
 *     RtlFormatMessageEx @ 0x140687034 (RtlFormatMessageEx.c)
 *     SdbpGetStandardDatabasePath @ 0x1406C49CC (SdbpGetStandardDatabasePath.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x1406DC644 (_PnpGetGenericStorePropertyLocales.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1406E0B10 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1400A7460 (RtlStringVPrintfWorkerW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1401CCA98 (RtlStringExHandleFillBehindNullW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1401CCABC (RtlStringExHandleOtherFlagsW.c)
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
  NTSTATUS v10; // r10d
  size_t v11; // rsi
  wchar_t *v12; // r14
  const wchar_t *v13; // r9
  int v14; // edi
  size_t v15; // rax
  NTSTATUS result; // eax
  NTSTRSAFE_PWSTR ppszDestEnda; // [rsp+30h] [rbp-58h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-50h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va, pszFormat);
  v10 = 0;
  if ( (dwFlags & 0x100) == 0 )
  {
    if ( cchDest - 1 <= 0x7FFFFFFE )
      goto LABEL_3;
    goto LABEL_18;
  }
  if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
LABEL_18:
    v10 = -1073741811;
LABEL_3:
  if ( v10 >= 0 )
  {
    v11 = cchDest;
    v12 = pszDest;
    ppszDestEnda = pszDest;
    pcchNewDestLength[0] = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v13 = (const wchar_t *)&cchOriginalDestLength;
      if ( pszFormat )
        v13 = pszFormat;
    }
    else
    {
      v13 = pszFormat;
    }
    v14 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v14 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      pcchNewDestLength[0] = 0LL;
      v14 = RtlStringVPrintfWorkerW(pszDest, cchDest, pcchNewDestLength, v13, va);
      v15 = pcchNewDestLength[0];
      v11 = cchDest - pcchNewDestLength[0];
      pcchNewDestLength[0] = cchDest - pcchNewDestLength[0];
      v12 = &pszDest[v15];
      ppszDestEnda = v12;
      if ( v14 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v11 > 1 )
          RtlStringExHandleFillBehindNullW(&pszDest[v15], 2 * v11, dwFlags);
        goto LABEL_10;
      }
    }
    else
    {
      if ( !*v13 )
      {
LABEL_10:
        if ( ppszDestEnd )
          *ppszDestEnd = v12;
        result = v14;
        if ( pcchRemaining )
          *pcchRemaining = v11;
        return result;
      }
      v14 = -2147483643;
      if ( !pszDest )
        v14 = -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      RtlStringExHandleOtherFlagsW(pszDest, 2 * cchDest, 0LL, &ppszDestEnda, pcchNewDestLength, dwFlags);
      v12 = ppszDestEnda;
      v11 = pcchNewDestLength[0];
    }
    if ( (int)(v14 + 0x80000000) >= 0 && v14 != -2147483643 )
      return v14;
    goto LABEL_10;
  }
  result = v10;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
