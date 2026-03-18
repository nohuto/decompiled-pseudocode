/*
 * XREFs of ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x1800E4CEC
 * Callers:
 *     ?TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAX_K@Z @ 0x1800E1C88 (-TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAX_K@Z.c)
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAXUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1800E1D04 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@QEAAXUTOUCH_TELEMETRY_UPD.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0I000@Z @ 0x1800E4870 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0I000@Z.c)
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1@Z @ 0x1800E49AC (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z @ 0x1800E5BC0 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_K@Z @ 0x1800E5BF4 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_T.c)
 * Callees:
 *     <none>
 */

struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *__fastcall CTelemetryTouchLatencyAnalysis::FindScenario(
        CTelemetryTouchLatencyAnalysis *this,
        __int64 a2)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *result; // rax
  char *v3; // r8
  unsigned int v4; // r9d

  result = 0LL;
  v3 = (char *)this + 16;
  v4 = 0;
  while ( !*((_DWORD *)v3 + 8) || *(_QWORD *)v3 != a2 )
  {
    ++v4;
    v3 += 160;
    if ( v4 >= 0xA )
      return result;
  }
  return (CTelemetryTouchLatencyAnalysis *)((char *)this + 160 * v4 + 16);
}
