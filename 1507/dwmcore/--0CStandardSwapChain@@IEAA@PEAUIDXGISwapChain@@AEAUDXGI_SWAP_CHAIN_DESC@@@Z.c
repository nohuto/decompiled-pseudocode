/*
 * XREFs of ??0CStandardSwapChain@@IEAA@PEAUIDXGISwapChain@@AEAUDXGI_SWAP_CHAIN_DESC@@@Z @ 0x18013CA78
 * Callers:
 *     ?Create@CStandardSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChain@@IPEAPEAV1@@Z @ 0x18013CBA8 (-Create@CStandardSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChain@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@@Z @ 0x18008EA68 (--0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
