/*
 * XREFs of StorpInitializeUnitTelemetry @ 0x1C000A2D0
 * Callers:
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C000A1DC (RaidBusEnumeratorProcessNewUnit.c)
 * Callees:
 *     StorpUninititalizePerUnitPerfTelemetry @ 0x1C0039484 (StorpUninititalizePerUnitPerfTelemetry.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C004D5E8 (StorpInititalizePerUnitPerfTelemetry.c)
 */

void __fastcall StorpInitializeUnitTelemetry(__int64 a1)
{
  bool v1; // zf

  *(_QWORD *)(a1 + 1752) = 1LL;
  v1 = g_StorpTraceLoggingPerformanceEnabled == 0;
  *(_QWORD *)(a1 + 1688) = 0LL;
  *(_QWORD *)(a1 + 1712) = 0LL;
  *(_QWORD *)(a1 + 1720) = 0LL;
  *(_QWORD *)(a1 + 1696) = 0LL;
  *(_QWORD *)(a1 + 1704) = 0LL;
  *(_QWORD *)(a1 + 1728) = 0LL;
  *(_QWORD *)(a1 + 1736) = 0LL;
  *(_QWORD *)(a1 + 1744) = 0LL;
  *(_DWORD *)(a1 + 1760) = 0;
  if ( v1 )
  {
    *(_DWORD *)(a1 + 1764) = 0;
  }
  else if ( (unsigned int)StorpInititalizePerUnitPerfTelemetry() )
  {
    StorpUninititalizePerUnitPerfTelemetry(a1);
    *(_DWORD *)(a1 + 1764) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 1764) = 1;
  }
}
