/*
 * XREFs of ??1CStandardSwapChain@@MEAA@XZ @ 0x18013CAE0
 * Callers:
 *     ??_ECStandardSwapChain@@MEAAPEAXI@Z @ 0x18013CB50 (--_ECStandardSwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
