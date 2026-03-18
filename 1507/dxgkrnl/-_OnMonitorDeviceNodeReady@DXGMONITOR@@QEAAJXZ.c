/*
 * XREFs of ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ @ 0x1C00C9B50
 * Callers:
 *     MonitorNotifyDeviceNodeReady @ 0x1C00D7524 (MonitorNotifyDeviceNodeReady.c)
 * Callees:
 *     ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C00C82F0 (-_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00C91D4 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00C9458 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00C9E5C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z @ 0x1C00CB510 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorDeviceNodeReady(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( (*((_BYTE *)this + 24) & 0x10) == 0 )
  {
    v8 = *((_DWORD *)this + 6) & 1;
    if ( (*((_BYTE *)this + 24) & 1) == 0 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v8, v5, v6, v7);
      WdLogEvent5_WdAssertion(v20);
    }
    if ( !*((_QWORD *)this + 5) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v8, v5, v6, v7);
      WdLogEvent5_WdAssertion(v21);
    }
    if ( *((_DWORD *)this + 94) != 1 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v8, v5, v6, v7);
      WdLogEvent5_WdAssertion(v22);
    }
    *((_DWORD *)this + 6) |= 0x10u;
    if ( (int)DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(this, v5, v6, v7) >= 0 )
      DXGMONITOR::_UpdateEDIDBaseBlock(this, 0);
    DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry((struct _DEVICE_OBJECT **)this, v9, v10, v11);
    DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI((struct _DEVICE_OBJECT **)this, v12, v13, v14);
    if ( *((_BYTE *)this + 392) )
    {
      if ( !*((_QWORD *)this + 2) )
      {
        v23 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
        WdLogEvent5_WdAssertion(v23);
      }
      if ( (int)MONITOR_MGR::_HandleCreateMonitorStep2(
                  *((MONITOR_MGR **)this + 2),
                  *((_DWORD *)this + 7),
                  *((struct DXGMONITOR **)this + 50),
                  this) < 0 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
        WdLogEvent5_WdAssertion(v28);
      }
      if ( *((_BYTE *)this + 392) )
      {
        v29 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
        WdLogEvent5_WdAssertion(v29);
      }
    }
  }
  return 0LL;
}
