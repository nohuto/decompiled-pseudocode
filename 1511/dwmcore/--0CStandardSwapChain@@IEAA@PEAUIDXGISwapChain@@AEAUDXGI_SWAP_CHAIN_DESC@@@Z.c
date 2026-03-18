/*
 * XREFs of ??0CStandardSwapChain@@IEAA@PEAUIDXGISwapChain@@AEAUDXGI_SWAP_CHAIN_DESC@@@Z @ 0x18014CA18
 * Callers:
 *     ?Create@CStandardSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChain@@IPEAPEAV1@@Z @ 0x18014CB48 (-Create@CStandardSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChain@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@@Z @ 0x180072BB4 (--0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@@Z.c)
 */

CStandardSwapChain *__fastcall CStandardSwapChain::CStandardSwapChain(
        CStandardSwapChain *this,
        struct IDXGISwapChain *a2,
        struct DXGI_SWAP_CHAIN_DESC *a3)
{
  CSwapChainBase::CSwapChainBase(this, a3);
  *((_QWORD *)this + 36) = a2;
  *((_QWORD *)this + 3) = &CStandardSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)this = &CStandardSwapChain::`vftable'{for `CMILPoolResource'};
  ((void (__fastcall *)(struct IDXGISwapChain *))a2->lpVtbl->AddRef)(a2);
  return this;
}
