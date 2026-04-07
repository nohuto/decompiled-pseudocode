/*
 * XREFs of ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18002A460
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C38 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027138 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800282A4 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180028544 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x18002A5B4 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x18002A680 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800744A4 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18007F008 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F09C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::ShowWindow(const struct CWindowData **this, bool a2, char a3)
{
  unsigned int v3; // ebx
  const struct CWindowData *v6; // r11
  CLivePreview *v7; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v13; // eax
  const struct CWindowData *v14; // rax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // r8d
  int started; // eax
  unsigned int v19; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  if ( !a2 || (*((_BYTE *)this[39] + 580) & 1) != 0 )
  {
    if ( CTopLevelWindow3D::ShouldDelayTransition((CTopLevelWindow3D *)this, 0) )
    {
      started = CTopLevelWindow3D::StartDelayHideAnimation((CTopLevelWindow3D *)this);
      v3 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, started, 0xF9u);
    }
    else if ( !this[43] || *((_DWORD *)this + 88) != 3 )
    {
      v10 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x102u);
      }
      else
      {
        v11 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)this[39] + 48), 0);
        v3 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x104u);
      }
    }
  }
  else if ( CTopLevelWindow3D::ShouldDelayTransition((CTopLevelWindow3D *)this, a2) )
  {
    v15 = CTopLevelWindow3D::StartAnimation((__int64)this, 7u);
    v3 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xE2u);
  }
  else
  {
    if ( !CTopLevelWindow3D::ShouldShowTransition((CTopLevelWindow3D *)this) )
      goto LABEL_5;
    if ( !a3 )
    {
      v14 = this[39];
      if ( *((_DWORD *)v14 + 146) != 93 )
      {
LABEL_5:
        if ( !this[43] )
        {
          v6 = this[39];
          v7 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 168);
          if ( !*((_BYTE *)v7 + 264) || !v6 || !CLivePreview::_IsInLivePreview(v7, this[39]) )
          {
            v9 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)v6 + 48), 1);
            v3 = v9;
            if ( v9 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xF1u);
          }
        }
        return v3;
      }
      *((_DWORD *)v14 + 146) = 4095;
    }
    if ( this[43] )
    {
      v16 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(retaddr, (void *)0xE9, v17, (const char *)(unsigned int)v16, v19);
    }
    v13 = CTopLevelWindow3D::StartAnimation((__int64)this, 1u);
    v3 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xEBu);
  }
  return v3;
}
