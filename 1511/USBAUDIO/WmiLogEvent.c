/*
 * XREFs of WmiLogEvent @ 0x1C0002098
 * Callers:
 *     WmiLogStreamStateChange @ 0x1C000216C (WmiLogStreamStateChange.c)
 *     WmiLogPowerStateChange @ 0x1C000227C (WmiLogPowerStateChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006470 (__security_check_cookie.c)
 *     memset @ 0x1C0008000 (memset.c)
 */

NTSTATUS __fastcall WmiLogEvent(unsigned __int8 a1, __int128 *a2, int a3, int a4, int a5, int a6)
{
  __int128 v6; // xmm6
  NTSTATUS result; // eax
  _DWORD v8[8]; // [rsp+28h] [rbp-61h] BYREF
  _QWORD WnodeEventItem[8]; // [rsp+48h] [rbp-41h] BYREF

  v6 = *a2;
  memset(WnodeEventItem, 0, sizeof(WnodeEventItem));
  result = -1073741823;
  if ( ExBusWmiLogEnable )
  {
    if ( ExBusWmiLoggerHandle )
    {
      v8[0] = a1;
      v8[3] = a5;
      v8[4] = a6;
      WnodeEventItem[6] = v8;
      WnodeEventItem[1] = ExBusWmiLoggerHandle;
      LOWORD(WnodeEventItem[0]) = 64;
      v8[1] = a3;
      v8[2] = a4;
      v8[5] = 0;
      LODWORD(WnodeEventItem[7]) = 24;
      HIDWORD(WnodeEventItem[5]) = 1179648;
      BYTE4(WnodeEventItem[0]) = a1;
      *(_OWORD *)&WnodeEventItem[3] = v6;
      return IoWMIWriteEvent(WnodeEventItem);
    }
  }
  return result;
}
