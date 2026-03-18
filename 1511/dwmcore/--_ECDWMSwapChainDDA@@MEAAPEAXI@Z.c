/*
 * XREFs of ??_ECDWMSwapChainDDA@@MEAAPEAXI@Z @ 0x18014C410
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CDWMSwapChainDDA@@MEAA@XZ @ 0x18014C3EC (--1CDWMSwapChainDDA@@MEAA@XZ.c)
 */

CDWMSwapChainDDA *__fastcall CDWMSwapChainDDA::`vector deleting destructor'(CDWMSwapChainDDA *this, char a2)
{
  CDWMSwapChainDDA::~CDWMSwapChainDDA(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDWMSwapChainDDA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
