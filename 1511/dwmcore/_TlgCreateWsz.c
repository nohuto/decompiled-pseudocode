/*
 * XREFs of _TlgCreateWsz @ 0x180016F98
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180002A0C (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?PostEvent@UsageEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180016F10 (-PostEvent@UsageEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180028FF8 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1800AE960 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K00I000@Z @ 0x1800AFAA8 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K00I000@Z.c)
 *     ?PostEvent@CompositionErrorEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x1800B6590 (-PostEvent@CompositionErrorEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x180101EF0 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  LPCWSTR v2; // r8
  __int64 v3; // rax

  v2 = (LPCWSTR)&unk_18016D648;
  LODWORD(v3) = 0;
  if ( pwsz )
  {
    v2 = pwsz;
    v3 = -1LL;
    do
      ++v3;
    while ( pwsz[v3] );
  }
  pDesc->Ptr = (ULONGLONG)v2;
  *(_QWORD *)&pDesc->Size = (unsigned int)(2 * v3 + 2);
}
