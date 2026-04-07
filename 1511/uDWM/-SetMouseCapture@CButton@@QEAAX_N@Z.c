/*
 * XREFs of ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x1800107F4
 * Callers:
 *     ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x180028284 (-UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18002A0AC (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180033010 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CButton::SetMouseCapture(CButton *this, char a2)
{
  if ( ((*((_BYTE *)this + 304) & 8) != 0) != a2 )
  {
    *((_BYTE *)this + 304) ^= (*((_BYTE *)this + 304) ^ (8 * a2)) & 8;
    CVisual::SetDirtyFlags(this, 0x8000u);
  }
}
