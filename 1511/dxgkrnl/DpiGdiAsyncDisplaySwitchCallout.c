/*
 * XREFs of DpiGdiAsyncDisplaySwitchCallout @ 0x1C016B120
 * Callers:
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C008E7E8 (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z @ 0x1C009AF4C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z.c)
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CB234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@E@Z @ 0x1C01767FC (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@E@Z.c)
 *     MonitorDisableMonitorVirtualModeSuport @ 0x1C01869FC (MonitorDisableMonitorVirtualModeSuport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdiAsyncDisplaySwitchCallout(PVOID Context)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // rax

  v2 = 0;
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
  if ( WorkItem )
  {
    v9 = WdLogNewEntry5_WdEvent(v4, v3, v6, v7);
    *(_QWORD *)(v9 + 24) = DpiGdiAsyncDisplaySwitchCallout;
    *(_QWORD *)(v9 + 32) = Context;
    WdLogEvent5_WdEvent(v9);
    IoQueueWorkItemEx(WorkItem, DpiGdiHandleAsyncDisplaySwitchCallout, DelayedWorkQueue, Context);
  }
  else
  {
    v2 = -1073741670;
    v8 = (_QWORD *)WdLogNewEntry5_WdLowResource(v4, v3, v6, v7);
    v8[3] = DpiGdiAsyncDisplaySwitchCallout;
    v8[4] = IoAllocateWorkItem;
    v8[5] = -1073741670LL;
    WdLogEvent5_WdLowResource(v8);
  }
  return v2;
}
