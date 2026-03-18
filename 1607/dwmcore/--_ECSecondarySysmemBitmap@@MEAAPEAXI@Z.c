/*
 * XREFs of ??_ECSecondarySysmemBitmap@@MEAAPEAXI@Z @ 0x18001F3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSecondarySysmemBitmap@@MEAA@XZ @ 0x18001F434 (--1CSecondarySysmemBitmap@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CSecondarySysmemBitmap *__fastcall CSecondarySysmemBitmap::`vector deleting destructor'(
        CSecondarySysmemBitmap *this,
        char a2)
{
  CSecondarySysmemBitmap::~CSecondarySysmemBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CSecondarySysmemBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
