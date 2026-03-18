/*
 * XREFs of MonitorDRTTest @ 0x1C01867E0
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C012AD88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DmmEnableModeResetOnMonitorEvent @ 0x1C0179E80 (DmmEnableModeResetOnMonitorEvent.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C01856BC (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01866A4 (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C018694C (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall MonitorDRTTest(DXGADAPTER *this, struct _D3DKMT_DRT_MONITOR *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int SimulatedMonitor; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  MONITOR_MGR *v27; // rcx
  __int64 v28; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  if ( *((_DWORD *)a2 + 1) < 0x20u )
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = *((unsigned int *)a2 + 1);
    WdLogEvent5_WdWarning(v10);
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = *((_QWORD *)this + 248);
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    return 3221225659LL;
  }
  v18 = *((_DWORD *)a2 + 3);
  if ( !v18 )
  {
    v27 = *(MONITOR_MGR **)(v16 + 120);
    if ( !v27 )
    {
      v28 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v28 + 24) = this;
      WdLogEvent5_WdError(v28);
      return 3221225485LL;
    }
    return (unsigned int)MONITOR_MGR::_DRTGetTargetInformation(v27, a2, v13, v14);
  }
  v19 = (unsigned int)(v18 - 1);
  if ( !(_DWORD)v19 )
  {
    if ( (int)DmmEnableModeResetOnMonitorEvent((__int64)this, 0) < 0 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v26);
    }
    SimulatedMonitor = MonitorCreateSimulatedMonitor(
                         (PERESOURCE *)this,
                         *((unsigned int *)a2 + 4),
                         *((unsigned int *)a2 + 5));
    goto LABEL_20;
  }
  if ( (_DWORD)v19 == 1 )
  {
    if ( (int)DmmEnableModeResetOnMonitorEvent((__int64)this, 0) < 0 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v22);
      WdLogEvent5_WdAssertion(v23);
    }
    SimulatedMonitor = MonitorDestroySimulatedMonitor(this, *((_DWORD *)a2 + 4));
LABEL_20:
    v21 = SimulatedMonitor;
    DmmEnableModeResetOnMonitorEvent((__int64)this, 1);
    return v21;
  }
  v20 = WdLogNewEntry5_WdWarning(v19, v16, v13, v14);
  *(_QWORD *)(v20 + 24) = *((unsigned int *)a2 + 3);
  *(_QWORD *)(v20 + 32) = a2;
  WdLogEvent5_WdWarning(v20);
  return (unsigned int)-1073741811;
}
