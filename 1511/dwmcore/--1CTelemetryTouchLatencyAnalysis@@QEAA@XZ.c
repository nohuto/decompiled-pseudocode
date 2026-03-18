/*
 * XREFs of ??1CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800FFE8C
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@QEAA@XZ @ 0x1800FFDB8 (--1CPartitionVerticalBlankScheduler@@QEAA@XZ.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180002A0C (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x180101EF0 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::~CTelemetryTouchLatencyAnalysis(CTelemetryTouchLatencyAnalysis *this)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi

  v2 = (CTelemetryTouchLatencyAnalysis *)((char *)this + 16);
  v3 = 10LL;
  do
  {
    CTelemetryTouchLatencyAnalysis::RetireScenario(this, v2, 1, 0);
    v2 = (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)v2 + 168);
    --v3;
  }
  while ( v3 );
  CTelemetryTouchLatencyAnalysis::SendInteractionSummary(this);
  if ( *((_QWORD *)this + 213) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 213));
  v4 = *((_QWORD *)this + 214);
  if ( v4 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v4);
}
