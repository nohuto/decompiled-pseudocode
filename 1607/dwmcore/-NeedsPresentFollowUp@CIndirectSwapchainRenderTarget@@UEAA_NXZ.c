/*
 * XREFs of ?NeedsPresentFollowUp@CIndirectSwapchainRenderTarget@@UEAA_NXZ @ 0x1800BF990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIndirectSwapchainRenderTarget::NeedsPresentFollowUp(CIndirectSwapchainRenderTarget *this)
{
  return (*((_BYTE *)this + 512) & 8) != 0;
}
