/*
 * XREFs of ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002CF60
 * Callers:
 *     ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002CA00 (-ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002EABC (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::OnGDISurfaceChange(CWindowList *this, struct CWindowData *a2)
{
  CVisual *v2; // rcx

  v2 = (CVisual *)*((_QWORD *)a2 + 46);
  if ( v2 )
  {
    if ( *((_QWORD *)a2 + 44) )
      CVisual::SetDirtyFlags(v2, 0x2000000);
    else
      *((_DWORD *)v2 + 20) &= ~0x2000000u;
  }
}
