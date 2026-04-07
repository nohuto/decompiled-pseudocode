/*
 * XREFs of ?OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18002CF94
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000C9C4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CWindowList::OnContentBoundsChange(CWindowList *this, struct CWindowData *a2)
{
  CVisual *v2; // rcx

  v2 = (CVisual *)*((_QWORD *)a2 + 46);
  if ( v2 )
    CVisual::SetDirtyFlags(v2, 0x4000000);
}
