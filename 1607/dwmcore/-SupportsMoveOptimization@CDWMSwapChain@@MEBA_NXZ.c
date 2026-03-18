/*
 * XREFs of ?SupportsMoveOptimization@CDWMSwapChain@@MEBA_NXZ @ 0x18007A4E0
 * Callers:
 *     ?Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18007A2E8 (-Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::SupportsMoveOptimization(CDWMSwapChain *this)
{
  return *((_BYTE *)this + 409);
}
