/*
 * XREFs of TS_AudioProtocolNotifyRundown @ 0x18001E6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1TSSession@@QEAA@XZ @ 0x18001A7C8 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001C22C (-TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18001EC1C (-RemoveAt@-$TList@VTSSession@@@@QEAAXPEAX@Z.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001F788 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

void __fastcall TS_AudioProtocolNotifyRundown(struct AUDIOPROTOCOLNOTIFY *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  _QWORD *v6; // rax
  LPCRITICAL_SECTION v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  HANDLE ProcessHeap; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  wil::critical_section::lock(v3, &lpCriticalSection);
  v4 = lpMem;
  while ( 1 )
  {
    v5 = v4;
    v6 = v4;
    if ( !v4 )
      break;
    v2 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( !(unsigned int)TsSessionDeleteNotify((struct TSSession *)v6[2], a1) )
      break;
    v2 = 0LL;
  }
  v7 = lpCriticalSection;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 48) )
    {
      if ( *(_DWORD *)(v2 + 4) == 0xFFFF && !*(_DWORD *)(v2 + 32) && !*(_QWORD *)(v2 + 72) )
      {
        wil::critical_section::lock(v7, &lpCriticalSection);
        TList<TSSession>::RemoveAt(v8, v5);
        TSSession::~TSSession((TSSession *)v2, v9);
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, (LPVOID)v2);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
}
