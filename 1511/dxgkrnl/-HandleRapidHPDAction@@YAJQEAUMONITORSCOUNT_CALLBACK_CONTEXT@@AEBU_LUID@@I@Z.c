/*
 * XREFs of ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@I@Z @ 0x1C0155734
 * Callers:
 *     DxgkSimulateMonitorsIfNecessary @ 0x1C01560F0 (DxgkSimulateMonitorsIfNecessary.c)
 * Callees:
 *     DxgkInvalidateMonitorConnections @ 0x1C00B9170 (DxgkInvalidateMonitorConnections.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C00B922C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAE@Z @ 0x1C01537E8 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAE@Z.c)
 */

__int64 __fastcall HandleRapidHPDAction(
        struct MONITORSCOUNT_CALLBACK_CONTEXT *const a1,
        struct _LUID *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // esi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rax
  char v22; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  v7 = DxgkInvalidateMonitorConnections(2uLL, (__int64)a2, a3, a4);
  v12 = v7;
  if ( v7 < 0 )
  {
    v13 = WdLogNewEntry5_WdEvent(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdEvent(v13);
  }
  *((_DWORD *)a1 + 8) |= 0x10u;
  v22 = 0;
  if ( (int)DisplayConfigHelperCreateSimulateMonitor(a2, v5, 3, 0, (__int64)&v22) >= 0 )
    *((_BYTE *)a1 + 25) = 0;
  v14 = DisplayConfigHandleMonitorInvalidation(1LL, a1);
  v19 = v14;
  if ( v14 < 0 )
  {
    v20 = WdLogNewEntry5_WdEvent(v16, v15, v17, v18);
    *(_QWORD *)(v20 + 24) = v19;
    WdLogEvent5_WdEvent(v20);
    LODWORD(v19) = 0;
  }
  return (unsigned int)v19;
}
