/*
 * XREFs of ?NeedsPresentFollowUp@CIndirectSwapchainRenderTarget@@UEAA_NXZ @ 0x180099E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIndirectSwapchainRenderTarget::NeedsPresentFollowUp(CIndirectSwapchainRenderTarget *this)
{
  return (*((_BYTE *)this + 416) & 0x10) != 0;
}
