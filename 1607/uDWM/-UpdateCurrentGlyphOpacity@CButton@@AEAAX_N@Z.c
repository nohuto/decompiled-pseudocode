/*
 * XREFs of ?UpdateCurrentGlyphOpacity@CButton@@AEAAX_N@Z @ 0x18001BED8
 * Callers:
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x18001C1A0 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CButton::UpdateCurrentGlyphOpacity(CButton *this, char a2)
{
  float v2; // xmm1_4
  float v3; // xmm0_4

  v2 = *((float *)this + 106);
  if ( *((_DWORD *)this + 100) == 1 )
    v3 = FLOAT_1_0;
  else
    v3 = *((float *)this + 107);
  *((float *)this + 106) = v3;
  if ( !a2 && v2 != v3 )
    CVisual::SetDirtyFlags(this, 0x8000u);
}
