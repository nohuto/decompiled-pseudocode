/*
 * XREFs of PopSensorActiveInput @ 0x1406BCC74
 * Callers:
 *     PopReleaseAdaptiveLock @ 0x14055DBB8 (PopReleaseAdaptiveLock.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PopNotifyConsoleUserPresent @ 0x14055BFCC (PopNotifyConsoleUserPresent.c)
 *     PopSetWin32kInputTimeout @ 0x1406BCCE0 (PopSetWin32kInputTimeout.c)
 *     PopSendSessionInfo @ 0x1406BCDBC (PopSendSessionInfo.c)
 */

__int64 __fastcall PopSensorActiveInput(_DWORD *a1, char a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  GUID v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]

  v2 = a1[1];
  PopNotifyConsoleUserPresent(0, a2, a1[5]);
  v8 = a1[3];
  v7 = GUID_CONSOLE_VIDEO_TIMEOUT;
  PopSendSessionInfo(v2, v4, v5, &v7);
  return PopSetWin32kInputTimeout(v2, (unsigned int)a1[2]);
}
