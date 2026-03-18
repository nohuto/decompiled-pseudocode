/*
 * XREFs of ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@I@Z @ 0x1C0151500
 * Callers:
 *     DxgkSimulateMonitorsIfNecessary @ 0x1C0151E80 (DxgkSimulateMonitorsIfNecessary.c)
 * Callees:
 *     DxgkInvalidateMonitorConnections @ 0x1C00AE1B0 (DxgkInvalidateMonitorConnections.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C00AE26C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@PEAE@Z @ 0x1C01504D4 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@PEAE@Z.c)
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
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rax
  char v24; // [rsp+30h] [rbp+8h] BYREF

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
  v24 = 0;
  if ( (int)DisplayConfigHelperCreateSimulateMonitor(a2, v5, 3LL, (__int64)&v24) >= 0 )
    *((_BYTE *)a1 + 25) = 0;
  v16 = DisplayConfigHandleMonitorInvalidation(1LL, a1, v14, v15);
  v21 = v16;
  if ( v16 < 0 )
  {
    v22 = WdLogNewEntry5_WdEvent(v18, v17, v19, v20);
    *(_QWORD *)(v22 + 24) = v21;
    WdLogEvent5_WdEvent(v22);
    LODWORD(v21) = 0;
  }
  return (unsigned int)v21;
}
