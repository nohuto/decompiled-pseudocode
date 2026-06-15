/*
 * XREFs of ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001C6B4
 * Callers:
 *     TS_UnregisterAudioProtocolNotification @ 0x18001E650 (TS_UnregisterAudioProtocolNotification.c)
 * Callees:
 *     ??1TSSession@@QEAA@XZ @ 0x18001A7C8 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001C22C (-TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C370 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18001EC1C (-RemoveAt@-$TList@VTSSession@@@@QEAAXPEAX@Z.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001F788 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdDeleteNotify(DWORD SessionId, struct AUDIOPROTOCOLNOTIFY *a2)
{
  unsigned int v4; // edi
  TSSession *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  HANDLE ProcessHeap; // rax
  LPVOID lpMem; // [rsp+50h] [rbp+18h] BYREF
  void *v12; // [rsp+58h] [rbp+20h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v4 = TsSessionFromSessionId(SessionId, 0, &v12, (struct TSSession **)&lpMem);
  if ( !v4 )
  {
    v5 = (TSSession *)lpMem;
    v4 = TsSessionDeleteNotify((struct TSSession *)lpMem, a2);
    if ( !v4 )
    {
      if ( *((_DWORD *)v5 + 12) )
      {
        if ( *((_DWORD *)v5 + 1) == 0xFFFF && !*((_DWORD *)v5 + 8) && !*((_QWORD *)v5 + 9) )
        {
          wil::critical_section::lock(v6, &lpMem);
          TList<TSSession>::RemoveAt(v7, v12);
          TSSession::~TSSession(v5, v8);
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v5);
          if ( lpMem )
            LeaveCriticalSection((LPCRITICAL_SECTION)lpMem);
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return v4;
}
