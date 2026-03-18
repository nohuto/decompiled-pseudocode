/*
 * XREFs of ?GetColorSpace@CFlipChain@@UEAA?AW4ColorSpace@@XZ @ 0x1800BD4D0
 * Callers:
 *     ?GetAlphaMode@CHwDisplayRenderTarget@@WLA@EAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800BD880 (-GetAlphaMode@CHwDisplayRenderTarget@@WLA@EAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipChain::GetColorSpace(__int64 a1)
{
  return *(unsigned int *)(a1 + 288);
}
