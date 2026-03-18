/*
 * XREFs of ?ScaleAndOffset@@YAMMMMMM@Z @ 0x1C012F12C
 * Callers:
 *     ?AdjustFullscreenGammaRampDXGI1@ADAPTER_DISPLAY@@QEAAXPEAU_D3DDDI_GAMMA_RAMP_DXGI_1@@0PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C01253D8 (-AdjustFullscreenGammaRampDXGI1@ADAPTER_DISPLAY@@QEAAXPEAU_D3DDDI_GAMMA_RAMP_DXGI_1@@0PEAUDXGK_G.c)
 * Callees:
 *     <none>
 */

float __fastcall ScaleAndOffset(float a1, float a2, float a3, float a4, float a5)
{
  float result; // xmm0_4

  result = (float)(a1 * a2) + a3;
  if ( result > a5 )
    return a5;
  if ( a4 > result )
    return a4;
  return result;
}
