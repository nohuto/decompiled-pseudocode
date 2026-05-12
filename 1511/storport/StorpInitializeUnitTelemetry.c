/*
 * XREFs of StorpInitializeUnitTelemetry @ 0x1C000C508
 * Callers:
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C000C414 (RaidBusEnumeratorProcessNewUnit.c)
 * Callees:
 *     StorpUninititalizePerUnitPerfTelemetry @ 0x1C003BB68 (StorpUninititalizePerUnitPerfTelemetry.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C00511C4 (StorpInititalizePerUnitPerfTelemetry.c)
 */

void __fastcall StorpInitializeUnitTelemetry(__int64 a1)
{
  bool v1; // zf

  *(_QWORD *)(a1 + 1768) = 1LL;
  v1 = g_StorpTraceLoggingPerformanceEnabled == 0;
  *(_QWORD *)(a1 + 1704) = 0LL;
  *(_QWORD *)(a1 + 1728) = 0LL;
  *(_QWORD *)(a1 + 1736) = 0LL;
  *(_QWORD *)(a1 + 1712) = 0LL;
  *(_QWORD *)(a1 + 1720) = 0LL;
  *(_QWORD *)(a1 + 1744) = 0LL;
  *(_QWORD *)(a1 + 1752) = 0LL;
  *(_QWORD *)(a1 + 1760) = 0LL;
  *(_DWORD *)(a1 + 1776) = 0;
  if ( v1 )
  {
    *(_DWORD *)(a1 + 1824) = 0;
  }
  else if ( (unsigned int)StorpInititalizePerUnitPerfTelemetry() )
  {
    StorpUninititalizePerUnitPerfTelemetry(a1);
    *(_DWORD *)(a1 + 1824) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 1824) = 1;
  }
}
