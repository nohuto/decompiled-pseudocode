/*
 * XREFs of _TlgCreateWsz @ 0x180117900
 * Callers:
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x18001CA90 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18001CB00 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ??1CBindInfo@CCompositionSurfaceInfo@@QEAA@XZ @ 0x1800994D4 (--1CBindInfo@CCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800A0628 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K00I000@Z @ 0x1800A1CAC (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K00I000@Z.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1800A9220 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?PostEvent@CompositionErrorEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x1800B9F20 (-PostEvent@CompositionErrorEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?SendTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x180119060 (-SendTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x180146F10 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x180147C7C (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18015D910 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 *     ?StartInContact@CScrollAnimation@@AEAAXXZ @ 0x18015E3E4 (-StartInContact@CScrollAnimation@@AEAAXXZ.c)
 *     ?StartInertia@CScrollAnimation@@AEAAX_N@Z @ 0x18015E4C4 (-StartInertia@CScrollAnimation@@AEAAX_N@Z.c)
 *     ?PreCalculateInertiaPath@CScrollScaleAnimation@@MEAAXXZ @ 0x18015F4E0 (-PreCalculateInertiaPath@CScrollScaleAnimation@@MEAAXXZ.c)
 *     ?PreCalculateInertiaPath@CScrollPositionAnimation@@MEAAXXZ @ 0x18015FC20 (-PreCalculateInertiaPath@CScrollPositionAnimation@@MEAAXXZ.c)
 *     ?PostEvent@UsageEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180163190 (-PostEvent@UsageEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  LPCWSTR v2; // r8
  __int64 v3; // rax

  v2 = (LPCWSTR)&unk_1801ADA80;
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
