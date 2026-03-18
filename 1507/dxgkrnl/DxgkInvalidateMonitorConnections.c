/*
 * XREFs of DxgkInvalidateMonitorConnections @ 0x1C00AE1B0
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1C00AE130 (DxgkCompleteTopologyTransition.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0151318 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@I@Z @ 0x1C0151500 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@I@Z.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0151B30 (DxgkHandleForceProjectionMonitor.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C00AE26C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z.c)
 */

__int64 __fastcall DxgkInvalidateMonitorConnections(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rax
  _QWORD v16[12]; // [rsp+20h] [rbp-19h] BYREF

  v5 = WdLogNewEntry5_WdEvent(a1, a2, a3, a4);
  *(_QWORD *)(v5 + 24) = a1;
  WdLogEvent5_WdEvent(v5);
  if ( (a1 & 1) == 0 && (a1 & 2) == 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v15 + 24) = 3088LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v10 = DisplayConfigHandleMonitorInvalidation(a1, 0LL);
  memset(v16, 0, sizeof(v16));
  LODWORD(v16[6]) |= 2u;
  memset(&v16[1], 0, 36);
  v16[0] = 0x6000000002LL;
  v16[7] = a1;
  LODWORD(v16[10]) = v10;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v16, v11, v12, v13);
  return v10;
}
