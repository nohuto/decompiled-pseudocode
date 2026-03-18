/*
 * XREFs of TraceLoggingProviderEnabled @ 0x1C0049DF0
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0049518 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C00685CC (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0049E20 (_TlgKeywordOn.c)
 */

BOOLEAN __stdcall TraceLoggingProviderEnabled(
        TraceLoggingHProvider hProvider,
        UCHAR eventLevel,
        ULONGLONG eventKeyword)
{
  BOOLEAN v3; // r9

  v3 = 0;
  if ( ::hProvider )
    return TlgKeywordOn((TraceLoggingHProvider)&::hProvider, eventKeyword) != 0;
  return v3;
}
