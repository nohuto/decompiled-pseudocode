/*
 * XREFs of ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x1800E47BC
 * Callers:
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1@Z @ 0x1800E49AC (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x1800E4E20 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 */

struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *__fastcall CTelemetryTouchLatencyAnalysis::AllocateScenario(
        CTelemetryTouchLatencyAnalysis *this)
{
  char *v2; // rsi
  __int64 v3; // r8
  unsigned __int64 *v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  char *v7; // rdi

  v2 = (char *)this + 16;
  v3 = 0LL;
  v4 = (unsigned __int64 *)((char *)this + 64);
  while ( *((_DWORD *)v4 - 4) )
  {
    v5 = *((_QWORD *)v2 + 6);
    if ( !v5 )
      v5 = *((_QWORD *)v2 + 7);
    v6 = *v4;
    if ( !*v4 )
      v6 = v4[1];
    if ( v5 > v6 )
      v2 = (char *)this + 160 * v3 + 16;
    v3 = (unsigned int)(v3 + 1);
    v4 += 20;
    if ( (unsigned int)v3 >= 0xA )
      goto LABEL_12;
  }
  v7 = (char *)this + 160 * v3 + 16;
  if ( v7 )
    goto LABEL_13;
LABEL_12:
  CTelemetryTouchLatencyAnalysis::RetireScenario(
    this,
    (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)v2,
    1,
    0);
  v7 = v2;
LABEL_13:
  *((_DWORD *)v7 + 8) = 1;
  ++*(_DWORD *)this;
  *((_QWORD *)v7 + 15) = GetTickCount64();
  return (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)v7;
}
