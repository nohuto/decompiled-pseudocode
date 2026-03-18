/*
 * XREFs of ??_GCDWMSwapChain@@MEAAPEAXI@Z @ 0x180073B50
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CDWMSwapChain@@MEAA@XZ @ 0x180073A58 (--1CDWMSwapChain@@MEAA@XZ.c)
 */

CDWMSwapChain *__fastcall CDWMSwapChain::`scalar deleting destructor'(CDWMSwapChain *this, char a2)
{
  CDWMSwapChain::~CDWMSwapChain(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDWMSwapChain *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
