/*
 * XREFs of ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x1800E5AE8
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x1800945D0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x1800E4E20 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::TimeoutOverdueScenarios(CTelemetryTouchLatencyAnalysis *this)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v2; // rbx
  __int64 v3; // rsi
  ULONGLONG TickCount64; // rbp

  if ( *(_DWORD *)this )
  {
    v2 = (CTelemetryTouchLatencyAnalysis *)((char *)this + 16);
    v3 = 10LL;
    TickCount64 = GetTickCount64();
    do
    {
      if ( *((_QWORD *)v2 + 1) )
      {
        if ( TickCount64 - *((_QWORD *)v2 + 15) >= 0xFA0 )
          CTelemetryTouchLatencyAnalysis::RetireScenario(this, v2, 1, 1);
      }
      v2 = (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)v2 + 160);
      --v3;
    }
    while ( v3 );
  }
}
