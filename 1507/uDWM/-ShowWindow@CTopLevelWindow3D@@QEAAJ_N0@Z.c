/*
 * XREFs of ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180027A30
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180024864 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180025754 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180025A60 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x180027B64 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x180027C70 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180069F00 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180076554 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800765E8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::ShowWindow(const struct CWindowData **this, bool a2, char a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  const struct CWindowData *v10; // r11
  CLivePreview *v11; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // r8d
  int started; // eax
  unsigned int v18; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  if ( !a2 || (*((_BYTE *)this[39] + 556) & 1) != 0 )
  {
    if ( CTopLevelWindow3D::ShouldDelayTransition((CTopLevelWindow3D *)this, 0) )
    {
      started = CTopLevelWindow3D::StartDelayHideAnimation((CTopLevelWindow3D *)this);
      v3 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0x122u);
    }
    else if ( !this[43] || *((_DWORD *)this + 88) != 3 )
    {
      v7 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x12Du);
      }
      else
      {
        v8 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)this[39] + 46), 0);
        v3 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x12Fu);
      }
    }
  }
  else if ( CTopLevelWindow3D::ShouldDelayTransition((CTopLevelWindow3D *)this, a2) )
  {
    v14 = CTopLevelWindow3D::StartAnimation((__int64)this, 7u);
    v3 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x10Bu);
  }
  else if ( a3 && CTopLevelWindow3D::ShouldShowTransition((CTopLevelWindow3D *)this) )
  {
    if ( this[43] )
    {
      v15 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(retaddr, (void *)0x112, v16, (const char *)(unsigned int)v15, v18);
    }
    v6 = CTopLevelWindow3D::StartAnimation((__int64)this, 1u);
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x114u);
  }
  else if ( !this[43] )
  {
    v10 = this[39];
    v11 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 170);
    if ( !*((_BYTE *)v11 + 264) || !v10 || !CLivePreview::_IsInLivePreview(v11, this[39]) )
    {
      v13 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)v10 + 46), 1);
      v3 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x11Au);
    }
  }
  return v3;
}
