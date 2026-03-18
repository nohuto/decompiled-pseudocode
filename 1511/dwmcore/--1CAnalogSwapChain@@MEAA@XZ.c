/*
 * XREFs of ??1CAnalogSwapChain@@MEAA@XZ @ 0x18013E290
 * Callers:
 *     ??_GCAnalogSwapChain@@MEAAPEAXI@Z @ 0x18013E320 (--_GCAnalogSwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CAnalogSwapChain::~CAnalogSwapChain(CAnalogSwapChain *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi

  v1 = *((_QWORD *)this + 36);
  *(_QWORD *)this = &CAnalogSwapChain::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CStandardSwapChain::`vftable'{for `IDeviceResource'};
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 88LL))(v1);
  v3 = *((_QWORD *)this + 36);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 36));
  CSwapChainBase::~CSwapChainBase(this);
}
