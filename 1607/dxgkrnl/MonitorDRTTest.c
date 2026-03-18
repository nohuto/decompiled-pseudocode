/*
 * XREFs of MonitorDRTTest @ 0x1C01AFF3C
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0164658 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DmmEnableModeResetOnMonitorEvent @ 0x1C01A378C (DmmEnableModeResetOnMonitorEvent.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C01AEE60 (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01AFDF4 (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C01B00BC (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall MonitorDRTTest(
        DXGADAPTER *this,
        struct _D3DKMT_DRT_MONITOR *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
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
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int SimulatedMonitor; // eax
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rax
  MONITOR_MGR *v29; // rcx
  __int64 v30; // rax
  int v31; // [rsp+20h] [rbp-28h]
  int v32; // [rsp+30h] [rbp-18h]

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  if ( *((_DWORD *)a2 + 1) < 0x20u )
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v11 + 24) = a2;
    *(_QWORD *)(v11 + 32) = *((unsigned int *)a2 + 1);
    WdLogEvent5_WdWarning(v11);
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = *((_QWORD *)this + 266);
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
    v29 = *(MONITOR_MGR **)(v17 + 96);
    if ( !v29 )
    {
      v30 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v30 + 24) = this;
      WdLogEvent5_WdError(v30);
      return 3221225485LL;
    }
    return (unsigned int)MONITOR_MGR::_DRTGetTargetInformation(v29, a2, v14, v15);
  }
  v20 = (unsigned int)(v19 - 1);
  if ( !(_DWORD)v20 )
  {
    if ( (int)DmmEnableModeResetOnMonitorEvent((__int64)this, 0) < 0 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v26);
      WdLogEvent5_WdAssertion(v28);
    }
    SimulatedMonitor = MonitorCreateSimulatedMonitor(
                         (PERESOURCE *)this,
                         *((unsigned int *)a2 + 4),
                         *((unsigned int *)a2 + 5),
                         v27,
                         v31,
                         0,
                         v32,
                         a3);
    goto LABEL_20;
  }
  if ( (_DWORD)v20 == 1 )
  {
    if ( (int)DmmEnableModeResetOnMonitorEvent((__int64)this, 0) < 0 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v23);
      WdLogEvent5_WdAssertion(v24);
    }
    SimulatedMonitor = MonitorDestroySimulatedMonitor(this, *((_DWORD *)a2 + 4), a3);
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
