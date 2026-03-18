/*
 * XREFs of ??1CDWMSwapChainDDA@@MEAA@XZ @ 0x18013C42C
 * Callers:
 *     ??_ECDWMSwapChainDDA@@MEAAPEAXI@Z @ 0x18013C450 (--_ECDWMSwapChainDDA@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDWMSwapChainDDA::~CDWMSwapChainDDA(CDWMSwapChainDDA *this)
{
  *(_QWORD *)this = &CDWMSwapChainDDA::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CStandardSwapChain::`vftable'{for `IDeviceResource'};
  CDWMSwapChain::~CDWMSwapChain(this);
}
