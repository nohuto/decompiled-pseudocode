/*
 * XREFs of ?SetReverseRTLMirror@CButton@@QEAAX_N@Z @ 0x180007278
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800259A8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CButton::SetReverseRTLMirror(CButton *this, char a2)
{
  if ( ((*((_BYTE *)this + 304) & 0x20) != 0) != a2 )
  {
    *((_BYTE *)this + 304) ^= (*((_BYTE *)this + 304) ^ (32 * a2)) & 0x20;
    CVisual::SetDirtyFlags(this, 0x8000u);
  }
}
