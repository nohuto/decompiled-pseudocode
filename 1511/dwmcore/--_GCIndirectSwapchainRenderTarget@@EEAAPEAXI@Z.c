/*
 * XREFs of ??_GCIndirectSwapchainRenderTarget@@EEAAPEAXI@Z @ 0x180108C60
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x180108BFC (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 */

CIndirectSwapchainRenderTarget *__fastcall CIndirectSwapchainRenderTarget::`scalar deleting destructor'(
        CIndirectSwapchainRenderTarget *this,
        char a2)
{
  CIndirectSwapchainRenderTarget::~CIndirectSwapchainRenderTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CIndirectSwapchainRenderTarget *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
