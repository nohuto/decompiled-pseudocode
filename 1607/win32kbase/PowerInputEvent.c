/*
 * XREFs of PowerInputEvent @ 0x1C0070550
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006FAAC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0086628 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B2178 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C00B2224 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00B267C (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PowerInputEvent(char a1)
{
  __int64 result; // rax
  char InputBuffer; // [rsp+48h] [rbp+10h] BYREF
  int v3; // [rsp+4Ch] [rbp+14h]
  int OutputBuffer; // [rsp+50h] [rbp+18h] BYREF
  int v5; // [rsp+54h] [rbp+1Ch]

  InputBuffer = a1;
  v3 = glinp;
  ZwPowerInformation(PowerInformationLevelMaximum|AdministratorPowerPolicy, &InputBuffer, 8u, &OutputBuffer, 8u);
  giPowerSessionActivityTimeOutMs = 1000 * OutputBuffer;
  result = (unsigned int)(1000 * v5);
  giPowerOffTimeOutMs = 1000 * v5;
  return result;
}
