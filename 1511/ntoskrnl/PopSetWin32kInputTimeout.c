/*
 * XREFs of PopSetWin32kInputTimeout @ 0x14063C684
 * Callers:
 *     PopReleaseAdaptiveLock @ 0x1404C50D8 (PopReleaseAdaptiveLock.c)
 *     PopSensorActiveInput @ 0x14063C618 (PopSensorActiveInput.c)
 * Callees:
 *     SessionIsInteractive @ 0x140096EAC (SessionIsInteractive.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PopBroadcastSessionInfo @ 0x140547F2C (PopBroadcastSessionInfo.c)
 *     PopSendSessionInfo @ 0x14063C7BC (PopSendSessionInfo.c)
 */

__int64 __fastcall PopSetWin32kInputTimeout(int a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  GUID v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  v7 = a2;
  if ( SessionIsInteractive(a1) )
  {
    v6 = GUID_CONSOLE_INPUT_TIMEOUT;
    return PopSendSessionInfo(v3, v2, v4, &v6);
  }
  else
  {
    v6 = GUID_TS_INPUT_TIMEOUT;
    return PopBroadcastSessionInfo(v3, v2, (__int64)&v6);
  }
}
