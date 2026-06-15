/*
 * XREFs of ?TS_SessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z @ 0x18000771C
 * Callers:
 *     VADServerUserSessionChanged @ 0x18002BC60 (VADServerUserSessionChanged.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18000A0E0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x180040F58 (-GetTsAudioProtocol@@YAIK@Z.c)
 */

__int64 __fastcall TS_SessionIdGetAudioProtocol(DWORD SessionId, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  struct TSSession *v7; // rcx
  struct TSSession *v9; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0xFFFF;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v6 = TsSessionFromSessionId(SessionId, 0, 0LL, &v9);
  if ( !v6 )
  {
    v7 = v9;
    *a2 = *((_DWORD *)v9 + 1);
    *a3 = *((_DWORD *)v7 + 2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( v6 == 1168 )
  {
    *a2 = GetTsAudioProtocol(SessionId);
    *a3 = 0;
    return 0;
  }
  return v6;
}
