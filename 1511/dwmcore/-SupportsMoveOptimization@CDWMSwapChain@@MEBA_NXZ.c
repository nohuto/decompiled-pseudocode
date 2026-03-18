/*
 * XREFs of ?SupportsMoveOptimization@CDWMSwapChain@@MEBA_NXZ @ 0x1800731B0
 * Callers:
 *     ?Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180072F94 (-Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::SupportsMoveOptimization(CDWMSwapChain *this)
{
  return *((_BYTE *)this + 393);
}
