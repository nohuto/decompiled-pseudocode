/*
 * XREFs of ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001A658
 * Callers:
 *     TS_UnregisterAudioProtocolNotification @ 0x18001C290 (TS_UnregisterAudioProtocolNotification.c)
 * Callees:
 *     ??1TSSession@@QEAA@XZ @ 0x180018868 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001A208 (-TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001A328 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18001C808 (-RemoveAt@-$TList@VTSSession@@@@QEAAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall TsSessionIdDeleteNotify(DWORD SessionId, struct AUDIOPROTOCOLNOTIFY *a2)
{
  unsigned int v4; // edi
  struct TSSession *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  struct TSSession *v9; // [rsp+40h] [rbp+18h] BYREF
  void *v10; // [rsp+48h] [rbp+20h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v4 = TsSessionFromSessionId(SessionId, 0, &v10, &v9);
  if ( !v4 )
  {
    v5 = v9;
    v4 = TsSessionDeleteNotify(v9, a2);
    if ( !v4 && *((_DWORD *)v5 + 12) && *((_DWORD *)v5 + 1) == 0xFFFF && !*((_DWORD *)v5 + 8) && !*((_QWORD *)v5 + 9) )
    {
      TList<TSSession>::RemoveAt(v6, v10);
      TSSession::~TSSession(v5, v7);
      operator delete(v5, 0x178uLL);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return v4;
}
