/*
 * XREFs of ??1CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x180113DF0
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@QEAA@XZ @ 0x180113D18 (--1CPartitionVerticalBlankScheduler@@QEAA@XZ.c)
 * Callees:
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x18001CA90 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18001CB00 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::~CTelemetryTouchLatencyAnalysis(CTelemetryTouchLatencyAnalysis *this)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v2; // rdi
  __int64 v3; // rsi

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
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  if ( *((_QWORD *)this + 214) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
}
