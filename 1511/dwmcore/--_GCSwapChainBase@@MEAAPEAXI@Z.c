/*
 * XREFs of ??_GCSwapChainBase@@MEAAPEAXI@Z @ 0x18014A0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CSwapChainBase@@MEAA@XZ @ 0x180072B20 (--1CSwapChainBase@@MEAA@XZ.c)
 */

CSwapChainBase *__fastcall CSwapChainBase::`scalar deleting destructor'(CSwapChainBase *this, char a2)
{
  CSwapChainBase::~CSwapChainBase(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CSwapChainBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
