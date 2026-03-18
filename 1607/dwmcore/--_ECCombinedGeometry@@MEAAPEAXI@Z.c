/*
 * XREFs of ??_ECCombinedGeometry@@MEAAPEAXI@Z @ 0x1800201A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x1800203C8 (--1CCombinedGeometry@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CCombinedGeometry *__fastcall CCombinedGeometry::`vector deleting destructor'(CCombinedGeometry *this, char a2)
{
  CCombinedGeometry::~CCombinedGeometry(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCombinedGeometry *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
