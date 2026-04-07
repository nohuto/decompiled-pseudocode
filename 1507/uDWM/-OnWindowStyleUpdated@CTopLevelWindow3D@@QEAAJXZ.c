/*
 * XREFs of ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180027690
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002CAC0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18000831C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180024864 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180025754 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180025A60 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x1800270A8 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180027868 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x180027B64 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180069F00 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180076518 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800765E8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
  int v11; // eax
  unsigned int v12; // r8d
  unsigned int v13; // esi
  int v14; // eax
  __int64 v15; // r11
  CLivePreview *v16; // rcx
  int v17; // eax
  unsigned int v18; // r8d
  unsigned int v19; // ebx
  __int64 v20; // rcx
  bool v21; // zf
  CTopLevelWindow *v22; // rcx
  int v23; // eax
  unsigned int v24; // r8d
  unsigned int v25; // edi
  int v26; // eax
  unsigned int v27; // r8d
  unsigned int v28; // edi
  int v29; // eax
  unsigned int v30; // r8d
  int v31; // eax
  unsigned int v32; // r8d
  unsigned int v33; // edi
  int v34; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(_DWORD *)(*((_QWORD *)this + 39) + 100LL) & 0x20000000) != 0;
  v3 = (*(_DWORD *)(*((_QWORD *)this + 39) + 100LL) & 0x1000000) != 0;
  if ( *((_BYTE *)this + 272) != v2 )
  {
    *((_BYTE *)this + 272) = v2;
    *((_BYTE *)this + 273) = v3;
    if ( !CTopLevelWindow3D::ShouldShowTransition(this) )
    {
      v15 = *((_QWORD *)this + 39);
      v16 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 170);
      if ( *((_BYTE *)v16 + 264)
        && v15
        && CLivePreview::_IsInLivePreview(v16, *((const struct CWindowData **)this + 39)) )
      {
        return 0LL;
      }
      v17 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(v15 + 368), 1);
      v19 = v17;
      if ( v17 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_HrPreRelease(retaddr, (void *)0x22E, v18, (const char *)(unsigned int)v17, v34);
      return v19;
    }
    if ( *((_BYTE *)this + 272) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 39) + 552LL) & 0x40) == 0 )
      {
        if ( *((_QWORD *)this + 43) )
        {
          v29 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
          if ( v29 < 0 )
            wil::details::in1diag3::_Log_Hr(retaddr, (void *)0x20E, v30, (const char *)(unsigned int)v29, v34);
        }
        started = CTopLevelWindow3D::StartAnimation((__int64)this, 3u);
        v7 = started;
        if ( started < 0 )
        {
          wil::details::in1diag3::Return_HrPreRelease(
            retaddr,
            (void *)0x210,
            v6,
            (const char *)(unsigned int)started,
            v34);
          return v7;
        }
      }
    }
    else
    {
      v20 = *((_QWORD *)this + 39);
      v21 = (*(_BYTE *)(v20 + 555) & 0x10) == 0;
      v22 = *(CTopLevelWindow **)(v20 + 368);
      if ( v21 )
      {
        v23 = CTopLevelWindow::ShowWindow(v22, 0);
        v25 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_HrPreRelease(retaddr, (void *)0x21F, v24, (const char *)(unsigned int)v23, v34);
          return v25;
        }
        *((_BYTE *)this + 464) = 1;
        v26 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
        v28 = v26;
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_HrPreRelease(retaddr, (void *)0x221, v27, (const char *)(unsigned int)v26, v34);
          return v28;
        }
      }
      else
      {
        v31 = CTopLevelWindow::ShowWindow(v22, 1);
        v33 = v31;
        if ( v31 < 0 )
        {
          wil::details::in1diag3::Return_HrPreRelease(retaddr, (void *)0x217, v32, (const char *)(unsigned int)v31, v34);
          return v33;
        }
        *(_BYTE *)(*((_QWORD *)this + 39) + 555LL) &= ~0x10u;
      }
    }
    v8 = CTopLevelWindow3D::OnZOrderUpdated(this, 1);
    v10 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_HrPreRelease(retaddr, (void *)0x228, v9, (const char *)(unsigned int)v8, v34);
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
  v11 = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(this);
  v13 = v11;
  if ( v11 >= 0 )
  {
    *(_OWORD *)((char *)this + 292) = *(_OWORD *)(*((_QWORD *)this + 39) + 48LL);
    if ( v3 )
      v14 = 2;
    else
      v14 = 4;
    *((_DWORD *)this + 89) = v14;
    return 0LL;
  }
  wil::details::in1diag3::Return_HrPreRelease(retaddr, (void *)0x23A, v12, (const char *)(unsigned int)v11, v34);
  return v13;
}
