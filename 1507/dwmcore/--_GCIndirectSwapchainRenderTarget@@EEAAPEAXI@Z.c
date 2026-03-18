/*
 * XREFs of ??_GCIndirectSwapchainRenderTarget@@EEAAPEAXI@Z @ 0x1800EDEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x1800EDE84 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
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
