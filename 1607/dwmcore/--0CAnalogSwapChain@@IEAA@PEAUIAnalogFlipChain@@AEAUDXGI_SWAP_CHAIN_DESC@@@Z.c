/*
 * XREFs of ??0CAnalogSwapChain@@IEAA@PEAUIAnalogFlipChain@@AEAUDXGI_SWAP_CHAIN_DESC@@@Z @ 0x180167FB4
 * Callers:
 *     ?Create@CAnalogSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIAnalogFlipChain@@IPEAPEAV1@@Z @ 0x1801681AC (-Create@CAnalogSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIAnalogFlipChain@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@@Z @ 0x180079EE0 (--0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CAnalogSwapChain *__fastcall CAnalogSwapChain::CAnalogSwapChain(
        CAnalogSwapChain *this,
        struct IAnalogFlipChain *a2,
        struct DXGI_SWAP_CHAIN_DESC *a3)
{
  __int64 v5; // r10
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  CSwapChainBase::CSwapChainBase(this, a3);
  *((_QWORD *)this + 36) = v5;
  *((_QWORD *)this + 3) = &CStandardSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)this = &CAnalogSwapChain::`vftable'{for `CMILPoolResource'};
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  QueryPerformanceFrequency(&Frequency);
  *((_QWORD *)this + 37) = Frequency.QuadPart
                         * a3->BufferDesc.RefreshRate.Denominator
                         / a3->BufferDesc.RefreshRate.Numerator;
  return this;
}
