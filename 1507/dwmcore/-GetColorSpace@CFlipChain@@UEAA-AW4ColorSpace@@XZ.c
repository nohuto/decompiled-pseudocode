/*
 * XREFs of ?GetColorSpace@CFlipChain@@UEAA?AW4ColorSpace@@XZ @ 0x18009B190
 * Callers:
 *     ?GetAlphaMode@CHwDisplayRenderTarget@@WLA@EAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18009AC10 (-GetAlphaMode@CHwDisplayRenderTarget@@WLA@EAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipChain::GetColorSpace(__int64 a1)
{
  return *(unsigned int *)(a1 + 288);
}
