/*
 * XREFs of PopSetWin32kInputTimeout @ 0x1406BCCE0
 * Callers:
 *     PopReleaseAdaptiveLock @ 0x14055DBB8 (PopReleaseAdaptiveLock.c)
 *     PopSensorActiveInput @ 0x1406BCC74 (PopSensorActiveInput.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PopBroadcastSessionInfo @ 0x1405BC948 (PopBroadcastSessionInfo.c)
 *     PopSendSessionInfo @ 0x1406BCDBC (PopSendSessionInfo.c)
 */

__int64 __fastcall PopSetWin32kInputTimeout(__int64 a1, __int64 a2, __int64 a3)
{
  GUID v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp-18h]

  v5 = a2;
  if ( (((_DWORD)a1 + 1) & 0xFFFFFFFE) == 0 && ((_DWORD)a1 || MEMORY[0xFFFFF780000002D8]) )
  {
    v4 = GUID_TS_INPUT_TIMEOUT;
    return PopBroadcastSessionInfo(a1, a2, (__int64)&v4);
  }
  else
  {
    v4 = GUID_CONSOLE_INPUT_TIMEOUT;
    return PopSendSessionInfo(a1, a2, a3, &v4);
  }
}
