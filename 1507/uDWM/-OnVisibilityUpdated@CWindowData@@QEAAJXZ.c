/*
 * XREFs of ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x180018D24
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002EABC (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x18000C8A8 (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18000D470 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x1800189BC (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180018FCC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowData::OnVisibilityUpdated(CWindowData **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CWindowData *v4; // rcx
  CTransitionVisualController *v6; // r9
  int v7; // eax

  CWindowData::CheckOwnedWindowEligibility((CWindowData *)this);
  v2 = CWindowData::NotifyRepresentationChanged((CWindowData *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x1BCFu);
  }
  else
  {
    v4 = this[63];
    if ( v4 && (v7 = CWindowData::NotifyRepresentationChanged(v4), v3 = v7, v7 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x1BD2u);
    }
    else if ( *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25)
           && *((_DWORD *)this + 28) != 1
           && (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 24)) > 0 )
    {
      CTransitionVisualController::_SetupHighZOrderStaticWindows(v6);
    }
  }
  return v3;
}
