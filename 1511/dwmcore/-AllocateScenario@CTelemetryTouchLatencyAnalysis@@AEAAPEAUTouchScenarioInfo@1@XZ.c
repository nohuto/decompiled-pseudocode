/*
 * XREFs of ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x180003594
 * Callers:
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1@Z @ 0x180002F64 (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180002A0C (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 */

struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *__fastcall CTelemetryTouchLatencyAnalysis::AllocateScenario(
        CTelemetryTouchLatencyAnalysis *this)
{
  char *v2; // rsi
  unsigned int v3; // r8d
  unsigned __int64 *v4; // rdx
  char *v5; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx

  v2 = (char *)this + 16;
  v3 = 0;
  v4 = (unsigned __int64 *)((char *)this + 64);
  while ( *((_DWORD *)v4 - 4) )
  {
    v7 = *((_QWORD *)v2 + 6);
    if ( !v7 )
      v7 = *((_QWORD *)v2 + 7);
    v8 = *v4;
    if ( !*v4 )
      v8 = v4[1];
    if ( v7 > v8 )
      v2 = (char *)this + 168 * v3 + 16;
    ++v3;
    v4 += 21;
    if ( v3 >= 0xA )
      goto LABEL_12;
  }
  v5 = (char *)this + 168 * v3 + 16;
  if ( v5 )
    goto LABEL_4;
LABEL_12:
  CTelemetryTouchLatencyAnalysis::RetireScenario(
    this,
    (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)v2,
    1,
    0);
  v5 = v2;
LABEL_4:
  *((_DWORD *)v5 + 8) = 1;
  ++*(_DWORD *)this;
  *((_QWORD *)v5 + 15) = GetTickCount64();
  return (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)v5;
}
