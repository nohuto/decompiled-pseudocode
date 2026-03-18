/*
 * XREFs of ??_ECOverlayContext@@MEAAPEAXI@Z @ 0x180078090
 * Callers:
 *     <none>
 * Callees:
 *     ??1COverlayContext@@MEAA@XZ @ 0x1800791B4 (--1COverlayContext@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

COverlayContext *__fastcall COverlayContext::`vector deleting destructor'(COverlayContext *this, char a2)
{
  COverlayContext::~COverlayContext(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, COverlayContext *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
