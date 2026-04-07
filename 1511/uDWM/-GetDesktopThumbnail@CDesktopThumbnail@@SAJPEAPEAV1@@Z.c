/*
 * XREFs of ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x18009A2BC
 * Callers:
 *     ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800046A0 (-OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18003FFD0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x18007FB70 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008FB04 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x180094870 (-OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x18009A0A0 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDesktopThumbnail@@KAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180099BD0 (-Create@CDesktopThumbnail@@KAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
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
    v5 = CDesktopThumbnail::Create(*((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4), a2);
    v2 = v5;
    if ( v5 >= 0 )
      *a1 = CDesktopThumbnail::s_pThumbnailNoRef;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0xD1u);
  }
  return v2;
}
