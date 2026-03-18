/*
 * XREFs of ??_ECRenderTargetBitmap@@MEAAPEAXI@Z @ 0x18001EA10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18001EACC (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CRenderTargetBitmap *__fastcall CRenderTargetBitmap::`vector deleting destructor'(CRenderTargetBitmap *this, char a2)
{
  CRenderTargetBitmap::~CRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CRenderTargetBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
