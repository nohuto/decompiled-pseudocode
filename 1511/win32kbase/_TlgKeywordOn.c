/*
 * XREFs of _TlgKeywordOn @ 0x1C0049E20
 * Callers:
 *     RIMUpdateMonitorQuirk @ 0x1C0009A78 (RIMUpdateMonitorQuirk.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0049518 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     TraceLoggingProviderEnabled @ 0x1C0049DF0 (TraceLoggingProviderEnabled.c)
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C004D770 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0052F30 (xxxUserChangeDisplaySettings.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00656FC (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     xxxUserSetDisplayConfig @ 0x1C006D7B0 (xxxUserSetDisplayConfig.c)
 *     VideoPortCalloutThread @ 0x1C00A9D78 (VideoPortCalloutThread.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00AA460 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00D1390 (RIMApplyPTPConfigRemedy.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E42A8 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  BOOLEAN v2; // r8

  v2 = 0;
  if ( !keyword
    || (keyword & *((_QWORD *)hProvider + 2)) != 0
    && (keyword & *((_QWORD *)hProvider + 3)) == *((_QWORD *)hProvider + 3) )
  {
    return 1;
  }
  return v2;
}
