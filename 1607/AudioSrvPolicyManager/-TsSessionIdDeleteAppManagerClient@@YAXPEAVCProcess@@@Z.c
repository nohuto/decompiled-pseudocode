/*
 * XREFs of ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18001CD34
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180014404 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     PbmUnregisterAppManagerNotification @ 0x180018CE0 (PbmUnregisterAppManagerNotification.c)
 * Callees:
 *     ??1TSSession@@QEAA@XZ @ 0x18001A7C8 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionDeleteAppManagerClient@@YAJPEAVTSSession@@PEAVCProcess@@@Z @ 0x18001C2E0 (-TsSessionDeleteAppManagerClient@@YAJPEAVTSSession@@PEAVCProcess@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C370 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18001EC1C (-RemoveAt@-$TList@VTSSession@@@@QEAAXPEAX@Z.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001F788 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TsSessionIdDeleteAppManagerClient(struct CProcess *a1)
{
  struct CProcess *v2; // rdx
  TSSession *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  HANDLE ProcessHeap; // rax
  LPVOID lpMem; // [rsp+40h] [rbp+8h] BYREF
  void *v9; // [rsp+48h] [rbp+10h] BYREF

  lpMem = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( !(unsigned int)TsSessionFromSessionId(*((unsigned int *)a1 + 43), 0, &v9, (struct TSSession **)&lpMem) )
  {
    v2 = a1;
    v3 = (TSSession *)lpMem;
    if ( (int)TsSessionDeleteAppManagerClient((struct TSSession *)lpMem, v2) >= 0 )
    {
      if ( *((_DWORD *)v3 + 12) )
      {
        if ( *((_DWORD *)v3 + 1) == 0xFFFF && !*((_DWORD *)v3 + 8) && !*((_QWORD *)v3 + 9) )
        {
          wil::critical_section::lock(v4, &lpMem);
          TList<TSSession>::RemoveAt(v5, v9);
          TSSession::~TSSession(v3, v6);
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v3);
          if ( lpMem )
            LeaveCriticalSection((LPCRITICAL_SECTION)lpMem);
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
}
