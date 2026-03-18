/*
 * XREFs of ??1CStandardSwapChain@@MEAA@XZ @ 0x18014CA80
 * Callers:
 *     ??_ECStandardSwapChain@@MEAAPEAXI@Z @ 0x18014CAF0 (--_ECStandardSwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CStandardSwapChain::~CStandardSwapChain(CStandardSwapChain *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 36);
  *(_QWORD *)this = &CStandardSwapChain::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CStandardSwapChain::`vftable'{for `IDeviceResource'};
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  CSwapChainBase::~CSwapChainBase(this);
}
