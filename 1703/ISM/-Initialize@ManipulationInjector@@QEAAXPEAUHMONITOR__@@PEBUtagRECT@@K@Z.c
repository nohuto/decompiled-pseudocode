/*
 * XREFs of ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@K@Z @ 0x180096804
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180031DA8 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180005420 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180086E0C (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096358 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateOverlapEvent@ManipulationInjector@@AEAAXXZ @ 0x180096484 (-CreateOverlapEvent@ManipulationInjector@@AEAAXXZ.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x180097A40 (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 *     ?LoadInputInjectionAPIs@ManipulationInjector@@AEAAXXZ @ 0x18009883C (-LoadInputInjectionAPIs@ManipulationInjector@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ceilf_0 @ 0x18009EAD4 (ceilf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ManipulationInjector::Initialize(
        ManipulationInjector *this,
        HMONITOR a2,
        const struct tagRECT *p_rcMonitor)
{
  const char *v5; // r9
  int v6; // ecx
  HANDLE v7; // rax
  int *v8; // rdi
  int *v9; // rsi
  float v10; // xmm8_4
  int v11; // ecx
  const char *v12; // r9
  __int64 v13; // rdi
  DWORD v14; // eax
  int v15; // eax
  float v16; // xmm0_4
  LONG x; // ecx
  LONG v18; // ecx
  int v19; // r9d
  int v20; // eax
  DWORD v21; // eax
  DWORD LastError; // eax
  int v23; // eax
  int v24; // eax
  DWORD TickCount; // eax
  __int64 (__fastcall *v26)(_DWORD *); // rax
  int v27; // eax
  _DWORD *v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // r8
  unsigned int v31; // eax
  __int64 v32; // r8
  struct tagPOINT v33; // [rsp+48h] [rbp-69h] BYREF
  struct tagMONITORINFO mi; // [rsp+50h] [rbp-61h] BYREF
  _DWORD v35[20]; // [rsp+78h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  memset(&mi, 0, sizeof(mi));
  *((_QWORD *)this + 7) = 0LL;
  if ( !p_rcMonitor )
  {
    mi.cbSize = 40;
    if ( !GetMonitorInfoW(0LL, &mi) )
    {
      v29 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x112, v30, (const char *)v29);
      __debugbreak();
    }
    p_rcMonitor = &mi.rcMonitor;
  }
  *((_DWORD *)this + 202) = 0;
  v6 = 2 * *((_DWORD *)this + 4);
  if ( p_rcMonitor->right - p_rcMonitor->left < v6 || p_rcMonitor->bottom - p_rcMonitor->top < v6 )
  {
    v31 = wil::verify_hresult<long>(0x80070057);
    wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x11F, v32, (const char *)v31);
    JUMPOUT(0x180096DBCLL);
  }
  if ( *(_DWORD *)this != 5 )
  {
    if ( *((_QWORD *)this + 96) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x3F,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        v5);
      __debugbreak();
    }
    v7 = OpenEventA(3u, 0, "ManipulationInjectorEnableOverlapEvent");
    *((_QWORD *)this + 96) = v7;
    if ( !v7 )
      ManipulationInjector::CreateOverlapEvent(this);
  }
  *((struct tagRECT *)this + 4) = *p_rcMonitor;
  if ( GetSystemMetrics(4096)
    || (v8 = (int *)((char *)this + 760),
        v9 = (int *)((char *)this + 756),
        !(unsigned int)GetDpiForMonitorInternal(0LL, 2LL, (char *)this + 756, (char *)this + 760)) )
  {
    v9 = (int *)((char *)this + 756);
    v8 = (int *)((char *)this + 760);
    *((_DWORD *)this + 189) = (int)(float)((float)((float)((float)(*((_DWORD *)this + 18) - *((_DWORD *)this + 16))
                                                         * 2540.0)
                                                 / 20320.0)
                                         + 0.5);
    *((_DWORD *)this + 190) = (int)(float)((float)((float)((float)(*((_DWORD *)this + 19) - *((_DWORD *)this + 17))
                                                         * 2540.0)
                                                 / 15240.0)
                                         + 0.5);
  }
  v10 = (float)*v8;
  *((_DWORD *)this + 180) = (int)ceilf_0((float)(v10 * 270.0) / 2540.0);
  v11 = (int)ceilf_0((float)(v10 * 400.0) / 2540.0);
  *((_DWORD *)this + 179) = v11;
  if ( (v11 & 1) != 0 )
    *((_DWORD *)this + 179) = v11 + ((v11 >> 31) & 0xFFFFFFFE) + 1;
  v13 = 4LL;
  switch ( *(_DWORD *)this )
  {
    case 1:
      ManipulationInjector::LoadInputInjectionAPIs(this);
      v23 = (*((__int64 (**)(void))this + 99))();
      if ( v23 == -2147023840 )
      {
        v24 = (*((__int64 (**)(void))this + 99))();
        if ( v24 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x14F,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            (const char *)(unsigned int)v24);
          __debugbreak();
        }
      }
      else if ( v23 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x153,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          (const char *)(unsigned int)v23);
        __debugbreak();
      }
      memset(v35, 0, sizeof(v35));
      LOWORD(v35[0]) = 80;
      TickCount = GetTickCount();
      HIBYTE(v35[5]) = 1;
      v35[1] = TickCount;
      v26 = (__int64 (__fastcall *)(_DWORD *))*((_QWORD *)this + 100);
      HIWORD(v35[0]) = 1;
      v27 = v26(v35);
      if ( v27 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x15E,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          (const char *)(unsigned int)v27);
        __debugbreak();
      }
      break;
    case 2:
      if ( !(unsigned int)InitializePointerDeviceInjectionEx(2LL, 4LL, 0LL) )
      {
        LastError = GetLastError();
        if ( LastError )
        {
          wil::details::in1diag3::_FailFast_Win32(
            retaddr,
            (void *)0x16B,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            (const char *)LastError);
          __debugbreak();
        }
      }
      break;
    case 3:
      v15 = *((_DWORD *)this + 18) - *((_DWORD *)this + 16);
      v33.y = 0;
      v16 = (float)((float)((float)(*((_DWORD *)this + 19) - *((_DWORD *)this + 17)) * 100.0) / v10) + 0.5;
      dword_1800D2DBC = (int)(float)((float)((float)((float)v15 * 100.0) / (float)*v9) + 0.5);
      dword_1800D2DDC = (int)v16;
      v33.x = *((_DWORD *)this + 5);
      v33 = **(struct tagPOINT **)&ManipulationInjector::DeskToDigiPt(this, (struct tagPOINT)&v33);
      x = v33.x;
      v33.x = *((_DWORD *)this + 7);
      *((_DWORD *)this + 182) = x;
      v33 = **(struct tagPOINT **)&ManipulationInjector::DeskToDigiPt(this, (struct tagPOINT)&v33);
      v18 = v33.x;
      v33.x = *((_DWORD *)this + 9);
      *((_DWORD *)this + 183) = v18;
      *((_DWORD *)this + 184) = *(_DWORD *)ManipulationInjector::DeskToDigiPt(this, (struct tagPOINT)&v33).x;
      *(_QWORD *)((char *)this + 740) = **(_QWORD **)&ManipulationInjector::DeskToDigiPt(this, (struct tagPOINT)&v33);
      *(_QWORD *)((char *)this + 748) = **(_QWORD **)&ManipulationInjector::DeskToDigiPt(this, (struct tagPOINT)&v33);
      v20 = (int)(float)((float)(503937.0 / (float)v19) + 0.5);
      *((_DWORD *)this + 178) = v20;
      if ( (v20 & 1) != 0 )
        *((_DWORD *)this + 178) = v20 + 1;
      if ( !(unsigned int)InitializeInputDeviceInjection(13LL, 4LL, &gTouchUsages, 11LL, 0LL, 3, (char *)this + 96) )
      {
        v21 = GetLastError();
        if ( v21 )
        {
          wil::details::in1diag3::_FailFast_Win32(
            retaddr,
            (void *)0x19E,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            (const char *)v21);
          __debugbreak();
        }
      }
      break;
    case 4:
      if ( !(unsigned int)InitializeTouchInjection(4LL, 3LL) )
      {
        v14 = GetLastError();
        if ( v14 )
        {
          wil::details::in1diag3::_FailFast_Win32(
            retaddr,
            (void *)0x1A7,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            (const char *)v14);
          __debugbreak();
        }
      }
      break;
    case 5:
      break;
    default:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1AF,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        v12);
      __debugbreak();
  }
  v28 = (_DWORD *)((char *)this + 112);
  do
  {
    *(v28 - 2) = 2;
    *v28 = 2;
    v28 += 38;
    *((_QWORD *)v28 - 17) = *((_QWORD *)this + 12);
    --v13;
  }
  while ( v13 );
}
