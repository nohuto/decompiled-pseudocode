/*
 * XREFs of ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002D4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x180008D18 (-ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x180010BDC (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18002BD20 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002BDD0 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180030424 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180030654 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x1800397A0 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18003A2FC (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180041B98 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x18007F9C0 (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180090DA4 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

__int64 __fastcall CWindowList::SwitchDesktop(CWindowList *this, int a2, unsigned __int64 a3)
{
  char v6; // r14
  int v7; // eax
  int v8; // ebx
  unsigned int v9; // edx
  CScreenRotation *v10; // rcx
  CScreenRotation *v11; // rcx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  CLoginTransition *v16; // rbx
  struct CVisual *RootVisualForDesktop; // rax
  int started; // eax
  CLoginTransition *v19; // rcx
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+68h] [rbp+20h] BYREF

  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 1;
  v7 = CDesktopManager::SendSwitchModeCommand(a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x14D4u);
    goto LABEL_30;
  }
  v10 = (CScreenRotation *)*((_QWORD *)this + 63);
  if ( v10 && *((_QWORD *)v10 + 3) )
    CScreenRotation::Stop(v10, 0);
  v11 = (CScreenRotation *)*((_QWORD *)this + 64);
  if ( v11 && *((_QWORD *)v11 + 3) )
    CScreenRotation::Stop(v11, 0);
  if ( !*((_QWORD *)this + 67) || a2 != 55 && a2 != 65 || !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) )
  {
LABEL_28:
    if ( CDesktopManager::IsLogonDesktop(a3) )
      CDesktopManager::ImmediateCancelLivePreview(CDesktopManager::s_pDesktopManagerInstance);
LABEL_30:
    if ( v8 >= 0 )
      goto LABEL_33;
    goto LABEL_31;
  }
  if ( a2 == 65 )
  {
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(this, a3);
    v13 = CWindowList::BringDesktopToFront(this, RenderTargetRootVisualForDesktop);
    v8 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x14ECu);
      goto LABEL_30;
    }
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22));
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
    v8 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x14F0u);
      goto LABEL_30;
    }
  }
  if ( *((_QWORD *)this + 66) )
    goto LABEL_25;
  v15 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          88LL);
  if ( v15 )
  {
    *(_QWORD *)(v15 + 8) = 0LL;
    *(_QWORD *)v15 = &CLoginTransition::`vftable';
    *(_DWORD *)(v15 + 72) = -1;
    *(_QWORD *)(v15 + 80) = -1LL;
    *(_QWORD *)(v15 + 16) = 0LL;
    *(_QWORD *)(v15 + 24) = 0LL;
    *(_QWORD *)(v15 + 32) = 0LL;
    *(_QWORD *)(v15 + 40) = 0LL;
    *(_QWORD *)(v15 + 48) = 0LL;
    *(_BYTE *)(v15 + 68) = 0;
  }
  else
  {
    v15 = 0LL;
  }
  *((_QWORD *)this + 66) = v15;
  if ( v15 )
  {
LABEL_25:
    v16 = (CLoginTransition *)*((_QWORD *)this + 66);
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, a3);
    started = CLoginTransition::StartAnimation(v16, a2, *((struct CVisual **)this + 67), RootVisualForDesktop, a3);
    v8 = started;
    if ( started < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, started, 0x14FAu);
      goto LABEL_30;
    }
    v6 = 0;
    goto LABEL_28;
  }
  v8 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x14F6u);
LABEL_31:
  v19 = (CLoginTransition *)*((_QWORD *)this + 66);
  if ( v19 )
  {
    CLoginTransition::`scalar deleting destructor'(v19, v9);
    *((_QWORD *)this + 66) = 0LL;
  }
LABEL_33:
  if ( v6 )
    v8 = CWindowList::DesktopSwitchImmediately(this, a3);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  return (unsigned int)v8;
}
