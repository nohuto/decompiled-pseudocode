/*
 * XREFs of ?OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180031868
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000BF28 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CWindowList::OnContentBoundsChange(CWindowList *this, struct CWindowData *a2)
{
  CVisual *v2; // rcx

  v2 = (CVisual *)*((_QWORD *)a2 + 48);
  if ( v2 )
    CVisual::SetDirtyFlags(v2, 0x4000000);
}
