/*
 * XREFs of ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800359D0
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002FC50 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A1A0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x1800339F4 (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180033AB4 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180033D70 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x180035488 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180035BAC (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x180035EB0 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18003EAA0 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18007268C (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007E418 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007E4E8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnWindowStyleUpdated(CTopLevelWindow3D *this)
{
  char v2; // al
  char v3; // di
  int started; // eax
  unsigned int v6; // r8d
  unsigned int v7; // edi
  int v8; // eax
  unsigned int v9; // r8d
  unsigned int v10; // ebx
  __int64 v11; // r11
  CLivePreview *v12; // rcx
  int v13; // eax
  unsigned int v14; // r8d
  unsigned int v15; // ebx
  int v16; // eax
  unsigned int v17; // r8d
  unsigned int v18; // esi
  __int128 v19; // xmm0
  int v20; // eax
  __int64 v21; // rcx
  bool v22; // zf
  CTopLevelWindow *v23; // rcx
  int v24; // eax
  unsigned int v25; // r8d
  unsigned int v26; // edi
  int v27; // eax
  unsigned int v28; // r8d
  unsigned int v29; // edi
  int v30; // eax
  unsigned int v31; // r8d
  int v32; // eax
  unsigned int v33; // r8d
  unsigned int v34; // edi
  int v35; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(_DWORD *)(*((_QWORD *)this + 39) + 100LL) & 0x20000000) != 0;
  v3 = (*(_DWORD *)(*((_QWORD *)this + 39) + 100LL) & 0x1000000) != 0;
  if ( *((_BYTE *)this + 272) != v2 )
  {
    *((_BYTE *)this + 272) = v2;
    *((_BYTE *)this + 273) = v3;
    if ( !CTopLevelWindow3D::ShouldShowTransition(this) )
    {
      v11 = *((_QWORD *)this + 39);
      v12 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 170);
      if ( *((_BYTE *)v12 + 264)
        && v11
        && CLivePreview::_IsInLivePreview(v12, *((const struct CWindowData **)this + 39)) )
      {
        return 0LL;
      }
      v13 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(v11 + 384), 1);
      v15 = v13;
      if ( v13 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_HrPreRelease(retaddr, (void *)0x1E2, v14, (const char *)(unsigned int)v13, v35);
      return v15;
    }
    if ( *((_BYTE *)this + 272) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 39) + 568LL) & 0x40) == 0
        && !CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(this) )
      {
        if ( *((_QWORD *)this + 43) )
        {
          v30 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
          if ( v30 < 0 )
            wil::details::in1diag3::_Log_Hr(retaddr, (void *)0x1C2, v31, (const char *)(unsigned int)v30, v35);
        }
        started = CTopLevelWindow3D::StartAnimation((__int64)this, 3u);
        v7 = started;
        if ( started < 0 )
        {
          wil::details::in1diag3::Return_HrPreRelease(
            retaddr,
            (void *)0x1C4,
            v6,
            (const char *)(unsigned int)started,
            v35);
          return v7;
        }
      }
    }
    else
    {
      v21 = *((_QWORD *)this + 39);
      v22 = (*(_BYTE *)(v21 + 571) & 0x10) == 0;
      v23 = *(CTopLevelWindow **)(v21 + 384);
      if ( v22 )
      {
        v24 = CTopLevelWindow::ShowWindow(v23, 0);
        v26 = v24;
        if ( v24 < 0 )
        {
          wil::details::in1diag3::Return_HrPreRelease(retaddr, (void *)0x1D3, v25, (const char *)(unsigned int)v24, v35);
          return v26;
        }
        *((_BYTE *)this + 464) = 1;
        v27 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
        v29 = v27;
        if ( v27 < 0 )
        {
          wil::details::in1diag3::Return_HrPreRelease(retaddr, (void *)0x1D5, v28, (const char *)(unsigned int)v27, v35);
          return v29;
        }
      }
      else
      {
        v32 = CTopLevelWindow::ShowWindow(v23, 1);
        v34 = v32;
        if ( v32 < 0 )
        {
          wil::details::in1diag3::Return_HrPreRelease(retaddr, (void *)0x1CB, v33, (const char *)(unsigned int)v32, v35);
          return v34;
        }
        *(_BYTE *)(*((_QWORD *)this + 39) + 571LL) &= ~0x10u;
      }
    }
    v8 = CTopLevelWindow3D::OnZOrderUpdated(this, 1);
    v10 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_HrPreRelease(retaddr, (void *)0x1DC, v9, (const char *)(unsigned int)v8, v35);
      return v10;
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
  v16 = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(this);
  v18 = v16;
  if ( v16 >= 0 )
  {
    v19 = *(_OWORD *)(*((_QWORD *)this + 39) + 48LL);
    v20 = 4;
    if ( v3 )
      v20 = 2;
    *((_DWORD *)this + 89) = v20;
    *(_OWORD *)((char *)this + 292) = v19;
    return 0LL;
  }
  wil::details::in1diag3::Return_HrPreRelease(retaddr, (void *)0x1EE, v17, (const char *)(unsigned int)v16, v35);
  return v18;
}
