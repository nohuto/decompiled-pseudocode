/*
 * XREFs of ?_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSnapshot@@@Z @ 0x180008450
 * Callers:
 *     ?_DiscardStoredSnapshotByIndex@CTransitionVisualController@@IEAAJH@Z @ 0x1800083E4 (-_DiscardStoredSnapshotByIndex@CTransitionVisualController@@IEAAJH@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180009690 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001FCE0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002CCCC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 */

void __fastcall CTransitionVisualController::_RemoveSnapshotFromVisualTreeIfExists(
        CTransitionVisualController *this,
        struct CTransitionWindowSnapshot *a2)
{
  __int64 v3; // rdx
  struct CVisual *RootVisualForDesktop; // rax

  v3 = *(_QWORD *)(*((_QWORD *)a2 + 33) + 32LL);
  if ( v3 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                             *(_QWORD *)(v3 + 120));
    if ( *((struct CVisual **)a2 + 3) == RootVisualForDesktop )
      VisualCollection::Remove((struct CVisual *)((char *)RootVisualForDesktop + 32), a2);
  }
}
