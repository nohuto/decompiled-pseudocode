/*
 * XREFs of ?GetAlphaMode@CHwDisplayRenderTarget@@WLA@EAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18009AC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwDisplayRenderTarget::GetAlphaMode(__int64 a1)
{
  return CFlipChain::GetColorSpace(a1 - 176);
}
