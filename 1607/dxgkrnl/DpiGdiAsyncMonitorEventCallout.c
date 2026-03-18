/*
 * XREFs of DpiGdiAsyncMonitorEventCallout @ 0x1C0192EE4
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3B40 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DpiGdiAsyncMonitorEventCallout(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        _OWORD *a6)
{
  unsigned int v10; // edi
  __int64 v11; // rcx
  struct _IO_WORKITEM *WorkItem; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *PoolWithTag; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD v19[8]; // [rsp+20h] [rbp-50h] BYREF

  v10 = 0;
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
  if ( WorkItem )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x74727044u);
    if ( PoolWithTag )
    {
      if ( a5 )
        _InterlockedIncrement(&dword_1C0057014);
      *(_BYTE *)PoolWithTag = a5;
      PoolWithTag[1] = a1;
      *((_DWORD *)PoolWithTag + 4) = a2;
      *((_DWORD *)PoolWithTag + 5) = a3;
      PoolWithTag[3] = a4;
      *((_OWORD *)PoolWithTag + 2) = *a6;
      *((_OWORD *)PoolWithTag + 3) = a6[1];
      *((_OWORD *)PoolWithTag + 4) = a6[2];
      *((_OWORD *)PoolWithTag + 5) = a6[3];
      v17 = WdLogNewEntry5_WdEvent(v14);
      *(_QWORD *)(v17 + 24) = PoolWithTag;
      WdLogEvent5_WdEvent(v17);
      memset(v19, 0, sizeof(v19));
      v19[0] = 0x4000000006LL;
      memset(&v19[1], 0, 36);
      LODWORD(v19[6]) = 46;
      HIDWORD(v19[6]) = a1;
      v19[7] = __PAIR64__(a3, a2);
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v19);
      IoQueueWorkItemEx(WorkItem, DpiGdiHandleAsyncMonitorEventCallout, DelayedWorkQueue, PoolWithTag);
    }
    else
    {
      v10 = -1073741801;
      v16 = WdLogNewEntry5_WdLowResource(v14);
      *(_QWORD *)(v16 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v16);
      IoFreeWorkItem(WorkItem);
    }
  }
  else
  {
    v10 = -1073741670;
    v13 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v13 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v13);
  }
  return v10;
}
