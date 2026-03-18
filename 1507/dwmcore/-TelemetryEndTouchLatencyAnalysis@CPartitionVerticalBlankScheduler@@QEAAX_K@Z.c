/*
 * XREFs of ?TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAX_K@Z @ 0x1800E1C88
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     Template_xx @ 0x1800E218C (Template_xx.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x1800E4CEC (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x1800E5B68 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryEndTouchLatencyAnalysis(
        CPartitionVerticalBlankScheduler *this,
        unsigned __int64 a2)
{
  CTelemetryTouchLatencyAnalysis *v2; // rbx
  __int64 v3; // rsi
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax

  v2 = (CPartitionVerticalBlankScheduler *)((char *)this + 23240);
  v3 = *((_QWORD *)this + 23);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_xx(this, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_ENDAPI_EVENT, a2, **((_QWORD **)this + 2787));
  *((_QWORD *)v2 + 216) = v3;
  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(v2, a2);
  if ( Scenario )
    CTelemetryTouchLatencyAnalysis::UnreferenceScenario(v2, Scenario);
}
