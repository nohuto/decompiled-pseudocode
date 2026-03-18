/*
 * XREFs of ??_GCDcompRenderTargetGroup@@MEAAPEAXI@Z @ 0x1800B6610
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDcompRenderTargetGroup@@MEAA@XZ @ 0x1800B66C0 (--1CDcompRenderTargetGroup@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CDcompRenderTargetGroup *__fastcall CDcompRenderTargetGroup::`scalar deleting destructor'(
        CDcompRenderTargetGroup *this,
        char a2)
{
  CDcompRenderTargetGroup::~CDcompRenderTargetGroup(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDcompRenderTargetGroup *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
