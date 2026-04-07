/*
 * XREFs of ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x180097050
 * Callers:
 *     ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x180003560 (-OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18003FB20 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x180080430 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008E680 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x180092D90 (-OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x180096E64 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDesktopThumbnail@@KAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800969B0 (-Create@CDesktopThumbnail@@KAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDesktopThumbnail::GetDesktopThumbnail(struct CDesktopThumbnail **a1, struct CDesktopThumbnail **a2)
{
  unsigned int v2; // ebx
  struct CDesktopThumbnail *v3; // rax
  int v5; // eax

  *a1 = 0LL;
  v2 = 0;
  v3 = CDesktopThumbnail::s_pThumbnailNoRef;
  if ( CDesktopThumbnail::s_pThumbnailNoRef )
  {
    *a1 = CDesktopThumbnail::s_pThumbnailNoRef;
    _InterlockedIncrement((volatile signed __int32 *)v3 + 2);
  }
  else
  {
    v5 = CDesktopThumbnail::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), a2);
    v2 = v5;
    if ( v5 >= 0 )
      *a1 = CDesktopThumbnail::s_pThumbnailNoRef;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0xD1u);
  }
  return v2;
}
