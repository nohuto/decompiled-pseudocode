/*
 * XREFs of ??_ECRedirectedGDISurface@@MEAAPEAXI@Z @ 0x1800B12A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRedirectedGDISurface@@MEAA@XZ @ 0x1800B161C (--1CRedirectedGDISurface@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CRedirectedGDISurface *__fastcall CRedirectedGDISurface::`vector deleting destructor'(
        CRedirectedGDISurface *this,
        char a2)
{
  CRedirectedGDISurface::~CRedirectedGDISurface(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CRedirectedGDISurface *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
