/*
 * XREFs of ??_GCIndirectSwapchainRenderTarget@@EEAAPEAXI@Z @ 0x18011F6F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x18011F67C (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
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
