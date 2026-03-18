/*
 * XREFs of ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C00B2224
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006FAAC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     EtwTracPowerOnMonitoreBegin @ 0x1C00704E4 (EtwTracPowerOnMonitoreBegin.c)
 *     PowerInputEvent @ 0x1C0070550 (PowerInputEvent.c)
 *     SqmPowerState @ 0x1C0070710 (SqmPowerState.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00B267C (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 */

NTSTATUS __fastcall PowerOnSession(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  int v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = a3;
  v4 = 0;
  EtwTracPowerOnMonitoreBegin(0LL, a2, a3);
  if ( !gProtocolType )
  {
    v8 = 1;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v8, 4LL, 0LL, 0LL, 0, 0);
    v4 = 1;
    PowerInputEvent(1);
    if ( gSqmIsOptedIn )
      SqmPowerState();
  }
  UpdateSessionPowerState(1, a1);
  if ( v4 )
  {
    v8 = 3;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v8, 4LL, 0LL, 0LL, 0, 0);
  }
  return EtwTracePowerOnMonitorEnd(0LL, v5, v6);
}
