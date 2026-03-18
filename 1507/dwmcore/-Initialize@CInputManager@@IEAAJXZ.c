/*
 * XREFs of ?Initialize@CInputManager@@IEAAJXZ @ 0x180092CBC
 * Callers:
 *     ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180092134 (-Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800611E0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18008A470 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?UseDesktopInputStack@CInputManager@@AEAAHXZ @ 0x18008A750 (-UseDesktopInputStack@CInputManager@@AEAAHXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CInputManager::Initialize(CInputManager *this)
{
  CInputManager *v2; // rcx
  CInputManager *v3; // rcx
  int v4; // eax
  signed int v5; // ebx
  HANDLE EventW; // rax
  HANDLE v7; // rax
  HANDLE Thread; // rax
  signed int LastError; // eax
  signed int v11; // eax
  DWORD dwCreationFlags; // [rsp+20h] [rbp-C8h]
  DWORD ThreadId[4]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int16 v14; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v15[126]; // [rsp+42h] [rbp-A6h] BYREF
  __int64 v16; // [rsp+C0h] [rbp-28h]
  __int64 v17; // [rsp+C8h] [rbp-20h]

  v14 = 0;
  memset_0(v15, 0, sizeof(v15));
  v16 = 0LL;
  v17 = 0LL;
  if ( CInputManager::UseDesktopInputStack(v2) )
  {
    StringCchCopyW((char *)&v14, 64LL, (char *)L"Capture");
    HIDWORD(v16) = 1;
    v4 = CMmcssTask::Set((CInputManager *)((char *)this + 56), (const struct DWM_MMTASK *)&v14, 0);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x153u);
      return (unsigned int)v5;
    }
    SetLastError(0);
    EventW = CreateEventW(0LL, 1, 0, 0LL);
    *((_QWORD *)this + 3) = EventW;
    if ( !EventW )
    {
      LastError = GetLastError();
      v5 = LastError;
      if ( LastError > 0 )
        v5 = (unsigned __int16)LastError | 0x80070000;
      dwCreationFlags = 344;
      if ( v5 >= 0 )
        v5 = -2003304445;
      goto LABEL_26;
    }
    SetLastError(0);
    v7 = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)this + 4) = v7;
    if ( !v7 )
    {
      v11 = GetLastError();
      v5 = v11;
      if ( v11 > 0 )
        v5 = (unsigned __int16)v11 | 0x80070000;
      dwCreationFlags = 348;
      if ( v5 >= 0 )
        v5 = -2003304445;
      goto LABEL_26;
    }
  }
  v5 = 0;
  if ( *((_BYTE *)this + 48) )
  {
LABEL_24:
    if ( v5 >= 0 )
      return (unsigned int)v5;
    dwCreationFlags = 354;
LABEL_26:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, dwCreationFlags);
    return (unsigned int)v5;
  }
  if ( *((_QWORD *)this + 5) )
  {
    if ( CInputManager::UseDesktopInputStack(v3) )
      SetEvent(*((HANDLE *)this + 3));
    goto LABEL_24;
  }
  Thread = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)CInputManager::s_InputThreadMain, this, 4u, ThreadId);
  *((_QWORD *)this + 5) = Thread;
  if ( !Thread )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_18016B858, 1u, -2147024882, 0x18Bu);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1E3u);
    goto LABEL_24;
  }
  SetThreadPriority(Thread, 16);
  ResumeThread(*((HANDLE *)this + 5));
  return (unsigned int)v5;
}
