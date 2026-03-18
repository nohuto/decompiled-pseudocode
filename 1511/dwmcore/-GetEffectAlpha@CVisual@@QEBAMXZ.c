/*
 * XREFs of ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x1800F798C
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800FDF30 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetAlphaMode@CHwndBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180126460 (-GetAlphaMode@CHwndBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

float __fastcall CVisual::GetEffectAlpha(CVisual *this)
{
  __int64 v1; // rsi
  float v3; // xmm6_4
  float v4; // xmm7_4

  v1 = *((_QWORD *)this + 49);
  v3 = FLOAT_1_0;
  v4 = FLOAT_1_0;
  if ( !v1 )
    return v4;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v1 + 48LL))(*((_QWORD *)this + 49), 8LL) )
    return v4;
  v4 = *(double *)(*((_QWORD *)this + 49) + 56LL);
  if ( v4 <= 1.0 )
  {
    v3 = 0.0;
    if ( v4 >= 0.0 )
      return v4;
  }
  return v3;
}
