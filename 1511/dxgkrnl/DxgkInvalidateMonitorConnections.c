/*
 * XREFs of DxgkInvalidateMonitorConnections @ 0x1C00B9170
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1C00B90F0 (DxgkCompleteTopologyTransition.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C01553A0 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@I@Z @ 0x1C0155734 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@I@Z.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0155D90 (DxgkHandleForceProjectionMonitor.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C00B922C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z.c)
 */

__int64 __fastcall DxgkInvalidateMonitorConnections(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // rax
  _QWORD v10[12]; // [rsp+20h] [rbp-19h] BYREF

  v5 = WdLogNewEntry5_WdEvent(a1, a2, a3, a4);
  *(_QWORD *)(v5 + 24) = a1;
  WdLogEvent5_WdEvent(v5);
  if ( (a1 & 1) == 0 && (a1 & 2) == 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v9 + 24) = 3197LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v7 = DisplayConfigHandleMonitorInvalidation(a1, 0LL);
  memset(v10, 0, sizeof(v10));
  LODWORD(v10[6]) |= 2u;
  memset(&v10[1], 0, 36);
  v10[0] = 0x6000000002LL;
  v10[7] = a1;
  LODWORD(v10[10]) = v7;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v10);
  return v7;
}
