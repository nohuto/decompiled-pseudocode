/*
 * XREFs of ?SetHardwareProtection@CHwDisplayRenderTarget@@WLA@EAAJ_N@Z @ 0x1800C1110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwDisplayRenderTarget::SetHardwareProtection(__int64 a1)
{
  return CSwapChainBase::SetHardwareProtection((CSwapChainBase *)(a1 - 176));
}
