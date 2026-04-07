/*
 * XREFs of ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002CF00
 * Callers:
 *     <none>
 * Callees:
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x1800069F4 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18002C5E0 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002C690 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002CCCC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18002D0D8 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18003F790 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18004055C (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x18007EFC8 (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180092438 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

__int64 __fastcall CWindowList::SwitchDesktop(CWindowList *this, int a2, unsigned __int64 a3)
{
  char v6; // r15
  int v7; // eax
  unsigned int v8; // edx
  int v9; // ebx
  CScreenRotation *v10; // rcx
  CScreenRotation *v11; // rcx
  __int64 v13; // rax
  CLoginTransition *v14; // rbx
  struct CVisual *RootVisualForDesktop; // rax
  int started; // eax
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int v18; // eax
  int v19; // eax
  CLoginTransition *v20; // rcx
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+78h] [rbp+20h] BYREF

  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 1;
  v7 = CDesktopManager::SendSwitchModeCommand(a3);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x1813u);
    goto LABEL_7;
  }
  v10 = (CScreenRotation *)*((_QWORD *)this + 63);
  if ( v10 && *((_QWORD *)v10 + 3) )
    CScreenRotation::Stop(v10, 0);
  v11 = (CScreenRotation *)*((_QWORD *)this + 64);
  if ( v11 && *((_QWORD *)v11 + 3) )
    CScreenRotation::Stop(v11, 0);
  if ( !*((_QWORD *)this + 67) || a2 != 55 && a2 != 66 || !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) )
  {
LABEL_7:
    if ( v9 >= 0 )
      goto LABEL_8;
    goto LABEL_32;
  }
  if ( a2 == 66 )
  {
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(this, a3);
    v18 = CWindowList::BringDesktopToFront(this, RenderTargetRootVisualForDesktop);
    v9 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x182Bu);
      goto LABEL_7;
    }
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 24));
    v19 = MilChannel_CommitChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
    v9 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x182Fu);
      goto LABEL_7;
    }
  }
  if ( *((_QWORD *)this + 66) )
    goto LABEL_17;
  v13 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          88LL);
  if ( v13 )
  {
    *(_QWORD *)(v13 + 8) = 0LL;
    *(_QWORD *)v13 = &CLoginTransition::`vftable';
    *(_DWORD *)(v13 + 72) = -1;
    *(_QWORD *)(v13 + 80) = -1LL;
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_QWORD *)(v13 + 24) = 0LL;
    *(_QWORD *)(v13 + 32) = 0LL;
    *(_QWORD *)(v13 + 40) = 0LL;
    *(_QWORD *)(v13 + 48) = 0LL;
    *(_BYTE *)(v13 + 68) = 0;
  }
  else
  {
    v13 = 0LL;
  }
  *((_QWORD *)this + 66) = v13;
  if ( v13 )
  {
LABEL_17:
    v14 = (CLoginTransition *)*((_QWORD *)this + 66);
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, a3);
    started = CLoginTransition::StartAnimation(v14, a2, *((struct CVisual **)this + 67), RootVisualForDesktop, a3);
    v9 = started;
    if ( started < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0x1839u);
    else
      v6 = 0;
    goto LABEL_7;
  }
  v9 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x1835u);
LABEL_32:
  v20 = (CLoginTransition *)*((_QWORD *)this + 66);
  if ( v20 )
  {
    CLoginTransition::`scalar deleting destructor'(v20, v8);
    *((_QWORD *)this + 66) = 0LL;
  }
LABEL_8:
  if ( v6 )
    v9 = CWindowList::DesktopSwitchImmediately(this, a3);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  return (unsigned int)v9;
}
