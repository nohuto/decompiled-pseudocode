/*
 * XREFs of PowerInputEvent @ 0x1C007EBB0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C000B3FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z @ 0x1C0085264 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z.c)
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
