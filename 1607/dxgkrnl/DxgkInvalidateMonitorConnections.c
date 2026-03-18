/*
 * XREFs of DxgkInvalidateMonitorConnections @ 0x1C00C2B40
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x1C00C3CE0 (DxgkCompleteTopologyTransition.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179C4C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179FF4 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C017A7D0 (DxgkHandleForceProjectionMonitor.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BC314 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall DxgkInvalidateMonitorConnections(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v7; // rax
  _QWORD v8[12]; // [rsp+20h] [rbp-59h] BYREF
  _QWORD v9[8]; // [rsp+80h] [rbp+7h] BYREF

  memset(v9, 0, sizeof(v9));
  EtwActivityIdControl(3u, (LPGUID)&v9[1]);
  v9[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v9[3]) = 37;
  v3 = WdLogNewEntry5_WdEvent(v2);
  *(_QWORD *)(v3 + 24) = a1;
  WdLogEvent5_WdEvent(v3);
  if ( (a1 & 1) == 0 && (a1 & 2) == 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v7 + 24) = 3240LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v5 = DisplayConfigHandleMonitorInvalidation(a1, 0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v9);
  memset(v8, 0, sizeof(v8));
  LODWORD(v8[6]) |= 2u;
  memset(&v8[1], 0, 36);
  v8[0] = 0x6000000002LL;
  v8[7] = a1;
  LODWORD(v8[10]) = v5;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v8);
  return v5;
}
