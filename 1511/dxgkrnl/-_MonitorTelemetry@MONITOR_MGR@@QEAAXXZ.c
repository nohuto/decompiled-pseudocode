/*
 * XREFs of ?_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ @ 0x1C0186194
 * Callers:
 *     MonitorInventoryTelemetry @ 0x1C0186C54 (MonitorInventoryTelemetry.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C00E1F1C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 */

void __fastcall MONITOR_MGR::_MonitorTelemetry(struct _FAST_MUTEX *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this->Owner + 2)) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 9689LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v4);
  }
  KeAcquireGuardedMutex(this + 3);
  v6 = *(_QWORD *)&this[2].Contention;
  if ( (ULONG *)v6 != &this[2].Contention )
  {
    while ( v6 )
    {
      v7 = v6;
      if ( *(_DWORD *)(v6 + 376) != 1 && *(_QWORD *)(v6 + 384) )
        v7 = *(_QWORD *)(v6 + 384);
      if ( !v7 )
      {
        v8 = WdLogNewEntry5_WdAssertion(v5);
        WdLogEvent5_WdAssertion(v8);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v7 + 240), 1u);
      DXGMONITOR::_MonitorTelemetry(v7, 2u);
      v6 = *(_QWORD *)v6;
      if ( (ULONG *)v6 == &this[2].Contention )
        v6 = 0LL;
      ExReleaseResourceLite((PERESOURCE)(v7 + 240));
      KeLeaveCriticalRegion();
    }
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v9);
  }
  KeReleaseGuardedMutex(this + 3);
}
