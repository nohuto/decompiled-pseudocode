/*
 * XREFs of WmiLogStreamPosition @ 0x1C0002510
 * Callers:
 *     PropertyGetAudioPosition @ 0x1C0018AB0 (PropertyGetAudioPosition.c)
 *     PropertyGetAudioPositionEx @ 0x1C0018BC0 (PropertyGetAudioPositionEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006850 (__security_check_cookie.c)
 *     memset @ 0x1C0008380 (memset.c)
 */

NTSTATUS __fastcall WmiLogStreamPosition(_QWORD *a1, int a2)
{
  NTSTATUS result; // eax
  _QWORD WnodeEventItem[8]; // [rsp+20h] [rbp-29h] BYREF
  _DWORD v4[2]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v5; // [rsp+68h] [rbp+1Fh]
  __int64 v6; // [rsp+70h] [rbp+27h]
  __int64 v7; // [rsp+78h] [rbp+2Fh]
  __int64 v8; // [rsp+80h] [rbp+37h]

  memset(WnodeEventItem, 0, sizeof(WnodeEventItem));
  result = -1073741823;
  if ( ExBusWmiLogEnable && ExBusWmiLoggerHandle && (unsigned int)ExBusWmiLogLevel >= 5 )
  {
    v5 = a1[2];
    v6 = a1[3];
    v7 = a1[1];
    v8 = a1[4];
    WnodeEventItem[6] = v4;
    WnodeEventItem[1] = ExBusWmiLoggerHandle;
    LOWORD(WnodeEventItem[0]) = 64;
    v4[0] = 48;
    v4[1] = a2;
    LODWORD(WnodeEventItem[7]) = 40;
    HIDWORD(WnodeEventItem[5]) = 1179648;
    WORD2(WnodeEventItem[0]) = 1328;
    *(_OWORD *)&WnodeEventItem[3] = ExBus_Position_GUID;
    return IoWMIWriteEvent(WnodeEventItem);
  }
  return result;
}
