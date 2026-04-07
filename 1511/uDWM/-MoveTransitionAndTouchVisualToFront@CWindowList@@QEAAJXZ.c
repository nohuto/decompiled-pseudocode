/*
 * XREFs of ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x180032798
 * Callers:
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18002C5E0 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180021FC8 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18002C4B4 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x180036804 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180036E40 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180040AFC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 */

__int64 __fastcall CWindowList::MoveTransitionAndTouchVisualToFront(CWindowList *this)
{
  int v2; // esi
  CAnimationEngine *v3; // rax
  CAnimationEngine *v4; // rdi
  __int64 v6; // rbx
  CVisual *v7; // rcx
  CVisual *OverlayRootVisualForDesktop; // rax
  CVisual *v9; // rbx

  v2 = 0;
  v3 = CDesktopManager::AcquireAnimationEngine();
  v4 = v3;
  if ( v3 )
  {
    if ( !CAnimationEngine::IsIdle(v3) )
    {
      v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
      if ( v6 )
      {
        v7 = *(CVisual **)(v6 + 8);
        if ( v7 )
        {
          v2 = CVisual::MoveToFront(v7, 0);
          CVisual::SetOpacity(*(CVisual **)(v6 + 8), 1.0);
          if ( v2 >= 0 )
          {
            OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(this, *(_QWORD *)(v6 + 96), 0);
            v9 = OverlayRootVisualForDesktop;
            if ( OverlayRootVisualForDesktop )
            {
              CVisual::MoveToFront(OverlayRootVisualForDesktop, 0);
              CVisual::SetOpacity(v9, 1.0);
            }
          }
        }
      }
    }
    CAnimationEngine::Release(v4);
  }
  return (unsigned int)v2;
}
