/*
 * XREFs of ??0CDWMOffScreenSwapChain@@QEAA@PEAUDXGI_SWAP_CHAIN_DESC@@PEAUID3D11Texture2D@@@Z @ 0x1800B59C8
 * Callers:
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800B4F38 (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDispl.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@@Z @ 0x180072BB4 (--0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@@Z.c)
 */

CDWMOffScreenSwapChain *__fastcall CDWMOffScreenSwapChain::CDWMOffScreenSwapChain(
        CDWMOffScreenSwapChain *this,
        struct DXGI_SWAP_CHAIN_DESC *a2,
        struct ID3D11Texture2D *a3)
{
  CDWMOffScreenSwapChain *result; // rax

  CSwapChainBase::CSwapChainBase(this, a2);
  *((_QWORD *)this + 36) = a3;
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)this = &CDWMOffScreenSwapChain::`vftable'{for `CMILPoolResource'};
  if ( a3 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))a3->lpVtbl->AddRef)(a3);
  *((_QWORD *)this + 47) = 0LL;
  result = this;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  return result;
}
