/*
 * XREFs of WmiLogStreamPosition @ 0x1C00023E4
 * Callers:
 *     PropertyGetAudioPosition @ 0x1C0018A80 (PropertyGetAudioPosition.c)
 *     PropertyGetAudioPositionEx @ 0x1C0018B90 (PropertyGetAudioPositionEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00066A0 (__security_check_cookie.c)
 *     memset @ 0x1C0008240 (memset.c)
 */

NTSTATUS __fastcall WmiLogStreamPosition(_QWORD *a1, int a2)
{
  NTSTATUS result; // eax
  _DWORD v3[2]; // [rsp+20h] [rbp-39h] BYREF
  __int64 v4; // [rsp+28h] [rbp-31h]
  __int64 v5; // [rsp+30h] [rbp-29h]
  __int64 v6; // [rsp+38h] [rbp-21h]
  __int64 v7; // [rsp+40h] [rbp-19h]
  _QWORD WnodeEventItem[8]; // [rsp+50h] [rbp-9h] BYREF

  memset(WnodeEventItem, 0, sizeof(WnodeEventItem));
  result = -1073741823;
  if ( ExBusWmiLogEnable )
  {
    if ( ExBusWmiLoggerHandle )
    {
      v4 = a1[2];
      v5 = a1[3];
      v6 = a1[1];
      v7 = a1[4];
      WnodeEventItem[6] = v3;
      WnodeEventItem[1] = ExBusWmiLoggerHandle;
      LOWORD(WnodeEventItem[0]) = 64;
      v3[0] = 48;
      v3[1] = a2;
      LODWORD(WnodeEventItem[7]) = 40;
      HIDWORD(WnodeEventItem[5]) = 1179648;
      BYTE4(WnodeEventItem[0]) = 48;
      *(_OWORD *)&WnodeEventItem[3] = ExBus_Position_GUID;
      return IoWMIWriteEvent(WnodeEventItem);
    }
  }
  return result;
}
