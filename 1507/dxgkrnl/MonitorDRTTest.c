/*
 * XREFs of MonitorDRTTest @ 0x1C0182198
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0124C68 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DmmEnableModeResetOnMonitorEvent @ 0x1C01758E8 (DmmEnableModeResetOnMonitorEvent.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C01811C8 (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C0182064 (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C01822FC (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall MonitorDRTTest(DXGADAPTER *this, struct _D3DKMT_DRT_MONITOR *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned int SimulatedMonitor; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  MONITOR_MGR *v34; // rcx
  __int64 v35; // rax

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
    v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = *((_QWORD *)this + 247);
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    return 3221225659LL;
  }
  v19 = *((_DWORD *)a2 + 3);
  if ( !v19 )
  {
    v34 = *(MONITOR_MGR **)(v17 + 96);
    if ( !v34 )
    {
      v35 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v35 + 24) = this;
      WdLogEvent5_WdError(v35);
      return 3221225485LL;
    }
    return (unsigned int)MONITOR_MGR::_DRTGetTargetInformation(v34, a2, v14, v15);
  }
  v20 = (unsigned int)(v19 - 1);
  if ( !(_DWORD)v20 )
  {
    if ( (int)DmmEnableModeResetOnMonitorEvent((__int64)this, 0) < 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
      WdLogEvent5_WdAssertion(v33);
    }
    SimulatedMonitor = MonitorCreateSimulatedMonitor(
                         (PERESOURCE *)this,
                         *((unsigned int *)a2 + 4),
                         *((unsigned int *)a2 + 5));
    goto LABEL_20;
  }
  if ( (_DWORD)v20 == 1 )
  {
    if ( (int)DmmEnableModeResetOnMonitorEvent((__int64)this, 0) < 0 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
      WdLogEvent5_WdAssertion(v27);
    }
    SimulatedMonitor = MonitorDestroySimulatedMonitor(this, *((_DWORD *)a2 + 4));
LABEL_20:
    v22 = SimulatedMonitor;
    DmmEnableModeResetOnMonitorEvent((__int64)this, 1);
    return v22;
  }
  v21 = WdLogNewEntry5_WdWarning(v20, v17, v14, v15);
  *(_QWORD *)(v21 + 24) = *((unsigned int *)a2 + 3);
  *(_QWORD *)(v21 + 32) = a2;
  WdLogEvent5_WdWarning(v21);
  return (unsigned int)-1073741811;
}
