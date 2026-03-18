/*
 * XREFs of ??_ECStandardSwapChain@@MEAAPEAXI@Z @ 0x18014CAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CStandardSwapChain@@MEAA@XZ @ 0x18014CA80 (--1CStandardSwapChain@@MEAA@XZ.c)
 */

CStandardSwapChain *__fastcall CStandardSwapChain::`vector deleting destructor'(CStandardSwapChain *this, char a2)
{
  CStandardSwapChain::~CStandardSwapChain(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CStandardSwapChain *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
