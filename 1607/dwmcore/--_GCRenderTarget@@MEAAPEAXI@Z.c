/*
 * XREFs of ??_GCRenderTarget@@MEAAPEAXI@Z @ 0x18012BFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRenderTarget@@MEAA@XZ @ 0x1800B9BB4 (--1CRenderTarget@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CRenderTarget *__fastcall CRenderTarget::`scalar deleting destructor'(CRenderTarget *this, char a2)
{
  CRenderTarget::~CRenderTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CRenderTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
