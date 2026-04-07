/*
 * XREFs of ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18002D0D8
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002CF00 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?OnAnimationComplete@CLoginTransition@@UEAAJI@Z @ 0x1800404D0 (-OnAnimationComplete@CLoginTransition@@UEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18002C5E0 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002C690 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002CCCC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x18003F198 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x18003F560 (-Reset@CContactManager@@QEAAJXZ.c)
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x180040534 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::DesktopSwitchImmediately(CLoginTransition **this, __int64 a2)
{
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int v5; // eax
  int v6; // ebx
  CContactManager *v7; // rsi
  int v8; // eax
  int refreshed; // eax
  CBaseObject *v10; // rcx
  CLoginTransition *v11; // rcx
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop((CWindowList *)this, a2);
  v5 = CWindowList::BringDesktopToFront((CWindowList *)this, RenderTargetRootVisualForDesktop);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x17F2u);
  }
  else
  {
    v7 = (CContactManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20);
    v8 = CContactManager::Reset(v7);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x83Du);
    }
    else
    {
      refreshed = CContactManager::RefreshPresentationModeSettings(v7);
      v6 = refreshed;
      if ( refreshed < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, refreshed, 0x83Eu);
    }
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x17F3u);
    }
    else
    {
      v10 = this[67];
      if ( v10 )
        CBaseObject::Release(v10);
      this[67] = CWindowList::GetRootVisualForDesktop((CWindowList *)this, a2);
      if ( CWindowList::GetRootVisualForDesktop((CWindowList *)this, a2) )
        _InterlockedIncrement((volatile signed __int32 *)CWindowList::GetRootVisualForDesktop((CWindowList *)this, a2) + 2);
      v11 = this[66];
      if ( v11 )
        CLoginTransition::StopAnimation(v11);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return (unsigned int)v6;
}
