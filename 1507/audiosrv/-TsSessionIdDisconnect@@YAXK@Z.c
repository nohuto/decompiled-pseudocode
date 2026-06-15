/*
 * XREFs of ?TsSessionIdDisconnect@@YAXK@Z @ 0x1800385CC
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002CF10 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18000A0E0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x1800383F8 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 */

void __fastcall TsSessionIdDisconnect(DWORD a1)
{
  struct TSSession *v2; // [rsp+38h] [rbp+10h] BYREF
  void *v3; // [rsp+40h] [rbp+18h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( !(unsigned int)TsSessionFromSessionId(a1, 0, &v3, &v2) && *((_DWORD *)v2 + 1) )
    TsSessionUpdateAudioProtocol(v2, v3, 0xFFFF);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
}
