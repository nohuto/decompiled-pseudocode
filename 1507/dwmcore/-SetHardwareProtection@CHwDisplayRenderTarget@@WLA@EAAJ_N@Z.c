/*
 * XREFs of ?SetHardwareProtection@CHwDisplayRenderTarget@@WLA@EAAJ_N@Z @ 0x18009AD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwDisplayRenderTarget::SetHardwareProtection(__int64 a1, bool a2)
{
  return CSwapChainBase::SetHardwareProtection((CSwapChainBase *)(a1 - 176), a2);
}
