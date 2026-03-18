/*
 * XREFs of DpiGdiAsyncMonitorEventCallout @ 0x1C0166C30
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00CAAA0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DpiGdiAsyncMonitorEventCallout(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  unsigned int v8; // edi
  __int64 v9; // rcx
  struct _IO_WORKITEM *WorkItem; // rbp
  _QWORD *v11; // rax
  _QWORD *PoolWithTag; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // rsi
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD v24[16]; // [rsp+30h] [rbp-78h] BYREF

  v8 = 0;
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
  if ( WorkItem )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74727044u);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = a1;
      *((_DWORD *)PoolWithTag + 2) = a2;
      *((_DWORD *)PoolWithTag + 3) = a3;
      PoolWithTag[2] = a4;
      v19 = WdLogNewEntry5_WdEvent(v14, v13, v15, v16);
      *(_QWORD *)(v19 + 24) = DpiGdiAsyncMonitorEventCallout;
      *(_QWORD *)(v19 + 32) = v17;
      WdLogEvent5_WdEvent(v19);
      memset(v24, 0, sizeof(v24));
      DxgkDiagInitializeCodePointPacket(v24, 46, a1, a2, a3);
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v24, v20, v21, v22);
      IoQueueWorkItemEx(WorkItem, DpiGdiHandleAsyncMonitorEventCallout, DelayedWorkQueue, v17);
    }
    else
    {
      v8 = -1073741801;
      v18 = (_QWORD *)WdLogNewEntry5_WdLowResource(v14);
      v18[3] = DpiGdiAsyncMonitorEventCallout;
      v18[4] = ExAllocatePoolWithTag;
      v18[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v18);
      IoFreeWorkItem(WorkItem);
    }
  }
  else
  {
    v8 = -1073741670;
    v11 = (_QWORD *)WdLogNewEntry5_WdLowResource(v9);
    v11[3] = DpiGdiAsyncMonitorEventCallout;
    v11[4] = IoAllocateWorkItem;
    v11[5] = -1073741670LL;
    WdLogEvent5_WdLowResource(v11);
  }
  return v8;
}
