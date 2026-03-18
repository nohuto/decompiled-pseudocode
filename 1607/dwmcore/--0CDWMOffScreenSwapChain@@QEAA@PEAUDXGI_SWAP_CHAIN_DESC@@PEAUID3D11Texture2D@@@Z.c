/*
 * XREFs of ??0CDWMOffScreenSwapChain@@QEAA@PEAUDXGI_SWAP_CHAIN_DESC@@PEAUID3D11Texture2D@@@Z @ 0x1800B9374
 * Callers:
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800B8844 (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDispl.c)
 * Callees:
 *     ??0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@@Z @ 0x180079EE0 (--0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CDWMOffScreenSwapChain *__fastcall CDWMOffScreenSwapChain::CDWMOffScreenSwapChain(
        CDWMOffScreenSwapChain *this,
        struct DXGI_SWAP_CHAIN_DESC *a2,
        struct ID3D11Texture2D *a3)
{
  __int64 v4; // r10
  CDWMOffScreenSwapChain *result; // rax

  CSwapChainBase::CSwapChainBase(this, a2);
  *((_QWORD *)this + 36) = v4;
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)this = &CDWMOffScreenSwapChain::`vftable'{for `CMILPoolResource'};
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
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
