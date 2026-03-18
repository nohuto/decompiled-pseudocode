/*
 * XREFs of TraceLoggingProviderEnabled @ 0x1C0057B24
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0057258 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C005A3DC (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0070DA4 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0057B54 (_TlgKeywordOn.c)
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
