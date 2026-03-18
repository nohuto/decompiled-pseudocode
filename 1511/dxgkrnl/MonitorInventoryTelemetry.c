/*
 * XREFs of MonitorInventoryTelemetry @ 0x1C0186C54
 * Callers:
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C001DAE0 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ @ 0x1C0186194 (-_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ.c)
 */

void __fastcall MonitorInventoryTelemetry(__int64 a1)
{
  __int64 v1; // rcx
  struct _FAST_MUTEX *v2; // rcx

  v1 = *(_QWORD *)(a1 + 1984);
  if ( v1 )
  {
    v2 = *(struct _FAST_MUTEX **)(v1 + 120);
    if ( v2 )
      MONITOR_MGR::_MonitorTelemetry(v2);
  }
}
