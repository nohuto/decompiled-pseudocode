/*
 * XREFs of ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002A0B0
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002D740 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027138 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x1800281E4 (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800282A4 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180028544 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x180029AD8 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002A28C (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x18002A5B4 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180041880 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800722D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800744A4 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F09C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnWindowStyleUpdated(CTopLevelWindow3D *this)
{
  char v2; // al
  char v3; // di
  int started; // eax
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r11
  CLivePreview *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  bool v14; // zf
  CTopLevelWindow *v15; // rcx
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  unsigned int v19; // edi
  int v20; // eax
  unsigned int v21; // r8d
  int v22; // eax
  unsigned int v23; // esi
  __int128 v24; // xmm0
  int v25; // eax
  int v26; // eax
  unsigned int v27; // edi
  int v28; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(_DWORD *)(*((_QWORD *)this + 39) + 100LL) & 0x20000000) != 0;
  v3 = (*(_DWORD *)(*((_QWORD *)this + 39) + 100LL) & 0x1000000) != 0;
  if ( *((_BYTE *)this + 272) != v2 )
  {
    *((_BYTE *)this + 272) = v2;
    *((_BYTE *)this + 273) = v3;
    if ( !CTopLevelWindow3D::ShouldShowTransition(this) )
    {
      v9 = *((_QWORD *)this + 39);
      v10 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 168);
      if ( *((_BYTE *)v10 + 264) && v9 && CLivePreview::_IsInLivePreview(v10, *((const struct CWindowData **)this + 39)) )
        return 0LL;
      v11 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(v9 + 384), 1);
      v12 = v11;
      if ( v11 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1ED,
        (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v11,
        v28);
      return v12;
    }
    if ( *((_BYTE *)this + 272) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 39) + 576LL) & 0x40) == 0
        && !CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(this) )
      {
        if ( *((_QWORD *)this + 43) )
        {
          v20 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
          if ( v20 < 0 )
            wil::details::in1diag3::_Log_Hr(retaddr, (void *)0x1CD, v21, (const char *)(unsigned int)v20, v28);
        }
        started = CTopLevelWindow3D::StartAnimation((__int64)this, 3u);
        v6 = started;
        if ( started < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1CF,
            (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)started,
            v28);
          return v6;
        }
      }
    }
    else
    {
      v13 = *((_QWORD *)this + 39);
      v14 = (*(_BYTE *)(v13 + 579) & 0x10) == 0;
      v15 = *(CTopLevelWindow **)(v13 + 384);
      if ( v14 )
      {
        v16 = CTopLevelWindow::ShowWindow(v15, 0);
        v17 = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1DE,
            (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v16,
            v28);
          return v17;
        }
        *((_BYTE *)this + 464) = 1;
        v18 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
        v19 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1E0,
            (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v18,
            v28);
          return v19;
        }
      }
      else
      {
        v26 = CTopLevelWindow::ShowWindow(v15, 1);
        v27 = v26;
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1D6,
            (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v26,
            v28);
          return v27;
        }
        *(_BYTE *)(*((_QWORD *)this + 39) + 579LL) &= ~0x10u;
      }
    }
    v7 = CTopLevelWindow3D::OnZOrderUpdated(this, 1);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E7,
        (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v7,
        v28);
      return v8;
    }
    return 0LL;
  }
  if ( v3 == *((_BYTE *)this + 273) )
    return 0LL;
  if ( (*(_DWORD *)(*((_QWORD *)this + 39) + 100LL) & 0x20000000) != 0 )
    return 0LL;
  *((_BYTE *)this + 273) = v3;
  if ( !CTopLevelWindow3D::ShouldShowTransition(this) )
    return 0LL;
  v22 = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(this);
  v23 = v22;
  if ( v22 >= 0 )
  {
    v24 = *(_OWORD *)(*((_QWORD *)this + 39) + 48LL);
    v25 = 4;
    if ( v3 )
      v25 = 2;
    *((_DWORD *)this + 89) = v25;
    *(_OWORD *)((char *)this + 292) = v24;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F9,
    (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
    (const char *)(unsigned int)v22,
    v28);
  return v23;
}
