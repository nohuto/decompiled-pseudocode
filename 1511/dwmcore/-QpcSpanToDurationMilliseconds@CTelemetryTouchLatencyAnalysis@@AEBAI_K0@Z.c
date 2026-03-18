/*
 * XREFs of ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x1800032C8
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180002A0C (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x1800032E8 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K00I000@Z @ 0x1800AFAA8 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K00I000@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x180101EF0 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
        CTelemetryTouchLatencyAnalysis *this,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 result; // rax

  v3 = *((_QWORD *)this + 229);
  result = 0LL;
  if ( v3 )
    return (a3 - a2) / v3;
  return result;
}
