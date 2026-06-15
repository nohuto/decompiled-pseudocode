/*
 * XREFs of ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x18001C420
 * Callers:
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18001CE08 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18001DE90 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ??1TSSession@@QEAA@XZ @ 0x18001A7C8 (--1TSSession@@QEAA@XZ.c)
 *     ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18001EC1C (-RemoveAt@-$TList@VTSSession@@@@QEAAXPEAX@Z.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001F788 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TsSessionUpdateAudioProtocol(struct TSSession *this, void *a2, int a3)
{
  int v6; // edi
  _QWORD *v7; // r14
  _QWORD *v8; // rax
  unsigned int *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  HANDLE ProcessHeap; // rax
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v14[8]; // [rsp+30h] [rbp-58h] BYREF

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v6 = 0;
  if ( a3 != 0xFFFF && a3 )
    v6 = ++dword_180034C04;
  if ( *((_DWORD *)this + 1) != a3 || *((_DWORD *)this + 2) != v6 )
  {
    *((_DWORD *)this + 1) = a3;
    *((_DWORD *)this + 2) = v6;
    v7 = (_QWORD *)*((_QWORD *)this + 2);
    while ( 1 )
    {
      v8 = v7;
      if ( !v7 )
        break;
      v7 = (_QWORD *)*v7;
      v9 = (unsigned int *)v8[2];
      v14[0] = 32;
      v14[1] = 0x2000;
      v14[6] = a3;
      v14[7] = v6;
      GenerateMediaEvent(v14, *v9);
    }
  }
  if ( *((_DWORD *)this + 12) && *((_DWORD *)this + 1) == 0xFFFF && !*((_DWORD *)this + 8) && !*((_QWORD *)this + 9) )
  {
    wil::critical_section::lock(this, lpCriticalSection);
    TList<TSSession>::RemoveAt(v10, a2);
    TSSession::~TSSession(this, v11);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
    if ( lpCriticalSection[0] )
      LeaveCriticalSection(lpCriticalSection[0]);
  }
}
