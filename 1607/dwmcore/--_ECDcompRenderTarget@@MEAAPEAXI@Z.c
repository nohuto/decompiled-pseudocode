/*
 * XREFs of ??_ECDcompRenderTarget@@MEAAPEAXI@Z @ 0x1800BA5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDcompRenderTarget@@MEAA@XZ @ 0x1800BA634 (--1CDcompRenderTarget@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CDcompRenderTarget *__fastcall CDcompRenderTarget::`vector deleting destructor'(CDcompRenderTarget *this, char a2)
{
  CDcompRenderTarget::~CDcompRenderTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDcompRenderTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
