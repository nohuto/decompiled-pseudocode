/*
 * XREFs of ?GetVisualAlpha@CVisual@@QEBAMXZ @ 0x180109850
 * Callers:
 *     ?GetAlphaMode@CHwndBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180142CC0 (-GetAlphaMode@CHwndBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18000BE6C (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 */

float __fastcall CVisual::GetVisualAlpha(CVisual *this)
{
  float OpacityInternal; // xmm1_4
  float result; // xmm0_4

  OpacityInternal = CVisual::GetOpacityInternal(this);
  result = FLOAT_1_0;
  if ( OpacityInternal <= 1.0 )
    return fmaxf(OpacityInternal, 0.0);
  return result;
}
