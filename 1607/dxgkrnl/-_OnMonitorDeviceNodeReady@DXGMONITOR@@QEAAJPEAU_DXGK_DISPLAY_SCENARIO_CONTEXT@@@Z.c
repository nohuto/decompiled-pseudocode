/*
 * XREFs of ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F1C7C
 * Callers:
 *     MonitorNotifyDeviceNodeReady @ 0x1C00EE40C (MonitorNotifyDeviceNodeReady.c)
 * Callees:
 *     ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C00EFE70 (-_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C00F1040 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00F12EC (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00F1574 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F1F9C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F37CC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorDeviceNodeReady(
        DXGMONITOR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( (*((_BYTE *)this + 24) & 0x10) == 0 )
  {
    v6 = *((_DWORD *)this + 6) & 1;
    if ( (*((_BYTE *)this + 24) & 1) == 0 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v9);
    }
    if ( !*((_QWORD *)this + 5) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v10);
    }
    if ( *((_DWORD *)this + 94) != 1 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v11);
    }
    *((_DWORD *)this + 6) |= 0x10u;
    if ( (int)DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(this) >= 0 )
      DXGMONITOR::_UpdateEDIDBaseBlock(this, a2, 0);
    DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry((struct _DEVICE_OBJECT **)this);
    DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf((PDEVICE_OBJECT *)this);
    DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI((struct _DEVICE_OBJECT **)this);
    if ( *((_BYTE *)this + 416) )
    {
      if ( !*((_QWORD *)this + 2) )
      {
        v12 = WdLogNewEntry5_WdAssertion(v7);
        WdLogEvent5_WdAssertion(v12);
      }
      if ( (int)MONITOR_MGR::_HandleCreateMonitorStep2(
                  *((MONITOR_MGR **)this + 2),
                  *((_DWORD *)this + 7),
                  *((struct DXGMONITOR **)this + 53),
                  this,
                  a2) < 0 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v14);
      }
      if ( *((_BYTE *)this + 416) )
      {
        v15 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v15);
      }
    }
  }
  return 0LL;
}
