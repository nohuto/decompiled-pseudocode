/*
 * XREFs of ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C0022410
 * Callers:
 *     ?SwapChainObDeleteProcedure@@YAXPEAX@Z @ 0x1C0167480 (-SwapChainObDeleteProcedure@@YAXPEAX@Z.c)
 *     DxgkCreateSwapChain @ 0x1C01679D0 (DxgkCreateSwapChain.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1C0165694 (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 */

DXGSWAPCHAIN *__fastcall DXGSWAPCHAIN::`scalar deleting destructor'(DXGSWAPCHAIN *this)
{
  DXGSWAPCHAIN::~DXGSWAPCHAIN(this);
  operator delete(this);
  return this;
}
