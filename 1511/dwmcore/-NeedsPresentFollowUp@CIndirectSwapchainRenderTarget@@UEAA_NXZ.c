/*
 * XREFs of ?NeedsPresentFollowUp@CIndirectSwapchainRenderTarget@@UEAA_NXZ @ 0x1800BCB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIndirectSwapchainRenderTarget::NeedsPresentFollowUp(CIndirectSwapchainRenderTarget *this)
{
  return (*((_BYTE *)this + 392) & 0x10) != 0;
}
