/*
 * XREFs of DpiGdiAsyncMonitorEventCallout @ 0x1C016B1D0
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DE6A0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DpiGdiAsyncMonitorEventCallout(__int64 a1, int a2, unsigned int a3, __int64 a4, char a5)
{
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _IO_WORKITEM *WorkItem; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *PoolWithTag; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  __int64 v22; // rax
  _DWORD v24[16]; // [rsp+30h] [rbp-78h] BYREF

  v9 = 0;
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
  if ( WorkItem )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x74727044u);
    if ( PoolWithTag )
    {
      if ( a5 )
        _InterlockedIncrement(&dword_1C0046E54);
      *(_BYTE *)PoolWithTag = a5;
      PoolWithTag[1] = a1;
      *((_DWORD *)PoolWithTag + 4) = a2;
      *((_DWORD *)PoolWithTag + 5) = a3;
      PoolWithTag[3] = a4;
      v22 = WdLogNewEntry5_WdEvent(v17, v16, v19, v20);
      *(_QWORD *)(v22 + 24) = DpiGdiAsyncMonitorEventCallout;
      *(_QWORD *)(v22 + 32) = PoolWithTag;
      WdLogEvent5_WdEvent(v22);
      memset(v24, 0, sizeof(v24));
      DxgkDiagInitializeCodePointPacket(v24, 46, a1, a2, a3);
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v24);
      IoQueueWorkItemEx(WorkItem, DpiGdiHandleAsyncMonitorEventCallout, DelayedWorkQueue, PoolWithTag);
    }
    else
    {
      v9 = -1073741801;
      v21 = (_QWORD *)WdLogNewEntry5_WdLowResource(v17, v16, v19, v20);
      v21[3] = DpiGdiAsyncMonitorEventCallout;
      v21[4] = ExAllocatePoolWithTag;
      v21[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v21);
      IoFreeWorkItem(WorkItem);
    }
  }
  else
  {
    v9 = -1073741670;
    v15 = (_QWORD *)WdLogNewEntry5_WdLowResource(v11, v10, v13, v14);
    v15[3] = DpiGdiAsyncMonitorEventCallout;
    v15[4] = IoAllocateWorkItem;
    v15[5] = -1073741670LL;
    WdLogEvent5_WdLowResource(v15);
  }
  return v9;
}
