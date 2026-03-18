/*
 * XREFs of ?TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAX_K@Z @ 0x1800059F4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x1800034F4 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180003550 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     Template_xx @ 0x180100478 (Template_xx.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryEndTouchLatencyAnalysis(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2)
{
  CTelemetryTouchLatencyAnalysis *v2; // rbx
  __int64 v3; // rsi
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax

  v2 = (CPartitionVerticalBlankScheduler *)((char *)this + 23248);
  v3 = *((_QWORD *)this + 24);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_xx(this, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_ENDAPI_EVENT, a2, **((_QWORD **)this + 2788));
  *((_QWORD *)v2 + 231) = v3;
  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(v2, a2);
  if ( Scenario )
    CTelemetryTouchLatencyAnalysis::UnreferenceScenario(v2, Scenario);
}
