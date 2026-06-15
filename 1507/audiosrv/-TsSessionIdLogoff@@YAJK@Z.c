/*
 * XREFs of ?TsSessionIdLogoff@@YAJK@Z @ 0x180038628
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002CF10 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18000A0E0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?UnregisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ @ 0x180038694 (-UnregisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ.c)
 */

__int64 __fastcall TsSessionIdLogoff(DWORD a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  TSSession *v5; // [rsp+38h] [rbp+10h] BYREF
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v2 = TsSessionFromSessionId(a1, 0, &v6, &v5);
  v3 = v2;
  if ( v2 == 1168 )
  {
    v3 = 0;
  }
  else if ( !v2 )
  {
    TSSession::UnregisterSessionDisplayNotificationCallback(v5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return v3;
}
