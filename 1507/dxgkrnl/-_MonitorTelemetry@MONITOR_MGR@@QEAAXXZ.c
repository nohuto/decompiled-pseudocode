/*
 * XREFs of ?_MonitorTelemetry@MONITOR_MGR@@QEAAXXZ @ 0x1C008CD50
 * Callers:
 *     MonitorInventoryTelemetry @ 0x1C00B1598 (MonitorInventoryTelemetry.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C00982C4 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 */

void __fastcall MONITOR_MGR::_MonitorTelemetry(struct _FAST_MUTEX *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG *v10; // rsi
  ULONG *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this->Owner + 2)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v12 + 24) = 9517LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v13 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    WdLogEvent5_WdAssertion(v13);
  }
  KeAcquireGuardedMutex(this + 3);
  v10 = *(ULONG **)&this[2].Contention;
  if ( v10 != &this[2].Contention )
  {
    while ( v10 )
    {
      v11 = v10;
      if ( v10[94] != 1 && *((_QWORD *)v10 + 48) )
        v11 = (ULONG *)*((_QWORD *)v10 + 48);
      if ( !v11 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
        WdLogEvent5_WdAssertion(v14);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v11 + 60), 1u);
      DXGMONITOR::_MonitorTelemetry(v11, 2LL);
      v10 = *(ULONG **)v10;
      if ( v10 == &this[2].Contention )
        v10 = 0LL;
      ExReleaseResourceLite((PERESOURCE)(v11 + 60));
      KeLeaveCriticalRegion();
    }
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v15);
  }
  KeReleaseGuardedMutex(this + 3);
}
