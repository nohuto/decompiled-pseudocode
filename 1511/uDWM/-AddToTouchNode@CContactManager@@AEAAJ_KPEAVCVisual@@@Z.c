/*
 * XREFs of ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047564
 * Callers:
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180047320 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004BB7C (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x180070734 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800707DC (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x180070C48 (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x1800858EC (-EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z.c)
 *     ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x180086290 (-OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800863AC (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x180087210 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x1800875D8 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180021FC8 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18002C4B4 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 */

__int64 __fastcall CContactManager::AddToTouchNode(CContactManager *this, unsigned __int64 a2, struct CVisual *a3)
{
  unsigned int v4; // ebx
  CWindowList *v5; // rcx
  struct CVisual *OverlayRootVisualForDesktop; // rax
  CVisual *v7; // rdi

  v4 = -2147467259;
  v5 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 167);
  if ( v5 )
  {
    OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(v5, a2, 1);
    v7 = OverlayRootVisualForDesktop;
    if ( OverlayRootVisualForDesktop )
    {
      v4 = 0;
      VisualCollection::InsertRelative((struct CVisual *)((char *)OverlayRootVisualForDesktop + 32), a3, 0LL, 0, 1);
      CVisual::MoveToFront(v7, 0);
    }
  }
  return v4;
}
