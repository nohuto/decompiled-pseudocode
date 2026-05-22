/*
 * XREFs of ?Initialize@WGIRawInputProvider@@AEAAJXZ @ 0x180060BF4
 * Callers:
 *     ?Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180060A50 (-Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18004391C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJK@Z @ 0x18006120C (-SetInputFocusProcess@WGIRawInputProvider@@AEAAJK@Z.c)
 *     ?StartUINavigationControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x1800612E0 (-StartUINavigationControllerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 */

__int64 __fastcall WGIRawInputProvider::Initialize(WGIRawInputProvider *this)
{
  int started; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // r9d
  HANDLE FileW; // rax
  HANDLE v7; // rcx
  HANDLE v8; // rbx
  __int64 v9; // rcx
  signed int v10; // ebx
  signed int LastError; // eax
  unsigned __int64 v13; // rcx
  DWORD CurrentProcessId; // [rsp+50h] [rbp+8h] BYREF

  started = CoreUICreate((char *)this + 40);
  v4 = started;
  if ( started >= 0 )
  {
    if ( ((1LL << gdwDeviceFamily) & 0x1820) != 0 )
    {
      FileW = CreateFileW(L"\\\\.\\XboxGIP_Admin", 0xC0000000, 3u, 0LL, 3u, 0xA0000000, 0LL);
      v7 = (HANDLE)*((_QWORD *)this + 7);
      v8 = FileW;
      if ( FileW != v7 )
      {
        if ( v7 != (HANDLE)-1LL )
        {
          if ( !CloseHandle(v7) )
          {
            LastError = GetLastError();
            v13 = (unsigned __int16)LastError | 0x80070000;
            if ( LastError <= 0 )
              v13 = (unsigned int)LastError;
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v13);
            __debugbreak();
          }
          *((_QWORD *)this + 7) = -1LL;
        }
        *((_QWORD *)this + 7) = v8;
      }
      if ( *((_QWORD *)this + 7) == -1LL )
      {
        v10 = (int)GetLastError() > 0 ? (unsigned __int16)GetLastError() | 0x80070000 : GetLastError();
        if ( v10 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v9, &MinInput_Warning_CheckResult, 0, 93, v10);
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
      }
    }
    started = WGIRawInputProvider::SetInputFocusProcess(this, 0);
    v4 = started;
    if ( started >= 0 )
    {
      CurrentProcessId = GetCurrentProcessId();
      RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_LISTENER_INFO, 0LL, &CurrentProcessId, 4LL, 0LL);
      started = WGIRawInputProvider::StartUINavigationControllerWatcher(this);
      v4 = started;
      if ( started < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v5 = 99;
        goto LABEL_26;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 97;
      goto LABEL_26;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v5 = 66;
LABEL_26:
    Template_qqq(v3, &MinInput_Warning_CheckResult, 0, v5, started);
  }
  return v4;
}
