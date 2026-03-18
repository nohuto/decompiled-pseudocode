/*
 * XREFs of DpiGdiAsyncDisplaySwitchCallout @ 0x1C0192E0C
 * Callers:
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008388C (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0087994 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_D.c)
 *     DpiIndirectCbForceDisplaySwitch @ 0x1C019B130 (DpiIndirectCbForceDisplaySwitch.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A00B0 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorDisableMonitorVirtualModeSuport @ 0x1C01B017C (MonitorDisableMonitorVirtualModeSuport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdiAsyncDisplaySwitchCallout(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  struct _IO_WORKITEM *WorkItem; // rsi
  __int64 v7; // rax
  char *PoolWithTag; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax

  v4 = 0;
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
  if ( WorkItem )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x74727044u);
    *(_QWORD *)PoolWithTag = a1;
    *(_OWORD *)(PoolWithTag + 8) = *a2;
    *(_OWORD *)(PoolWithTag + 24) = a2[1];
    *(_OWORD *)(PoolWithTag + 40) = a2[2];
    *(_OWORD *)(PoolWithTag + 56) = a2[3];
    v10 = WdLogNewEntry5_WdEvent(v9);
    *(_QWORD *)(v10 + 24) = PoolWithTag;
    WdLogEvent5_WdEvent(v10);
    IoQueueWorkItemEx(WorkItem, DpiGdiHandleAsyncDisplaySwitchCallout, DelayedWorkQueue, PoolWithTag);
  }
  else
  {
    v4 = -1073741670;
    v7 = WdLogNewEntry5_WdLowResource(v5);
    *(_QWORD *)(v7 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v7);
  }
  return v4;
}
