/*
 * XREFs of ??_GCAnalogSwapChain@@MEAAPEAXI@Z @ 0x18013E320
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CAnalogSwapChain@@MEAA@XZ @ 0x18013E290 (--1CAnalogSwapChain@@MEAA@XZ.c)
 */

CAnalogSwapChain *__fastcall CAnalogSwapChain::`scalar deleting destructor'(CAnalogSwapChain *this, char a2)
{
  CAnalogSwapChain::~CAnalogSwapChain(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnalogSwapChain *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
