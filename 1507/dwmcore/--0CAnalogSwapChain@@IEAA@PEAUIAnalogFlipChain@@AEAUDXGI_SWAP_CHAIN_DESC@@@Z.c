/*
 * XREFs of ??0CAnalogSwapChain@@IEAA@PEAUIAnalogFlipChain@@AEAUDXGI_SWAP_CHAIN_DESC@@@Z @ 0x1801280E8
 * Callers:
 *     ?Create@CAnalogSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIAnalogFlipChain@@IPEAPEAV1@@Z @ 0x18012834C (-Create@CAnalogSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIAnalogFlipChain@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@@Z @ 0x18008EA68 (--0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CAnalogSwapChain *__fastcall CAnalogSwapChain::CAnalogSwapChain(
        CAnalogSwapChain *this,
        struct IAnalogFlipChain *a2,
        struct DXGI_SWAP_CHAIN_DESC *a3)
{
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  CSwapChainBase::CSwapChainBase(this, a3);
  *((_QWORD *)this + 36) = a2;
  *((_QWORD *)this + 3) = &CStandardSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)this = &CAnalogSwapChain::`vftable'{for `CMILPoolResource'};
  (*(void (__fastcall **)(struct IAnalogFlipChain *))(*(_QWORD *)a2 + 8LL))(a2);
  QueryPerformanceFrequency(&Frequency);
  *((_QWORD *)this + 37) = Frequency.QuadPart
                         * a3->BufferDesc.RefreshRate.Denominator
                         / a3->BufferDesc.RefreshRate.Numerator;
  return this;
}
