/*
 * XREFs of ??_ECBitmapRealization@@MEAAPEAXI@Z @ 0x180191800
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBitmapRealization@@MEAA@XZ @ 0x1800905AC (--1CBitmapRealization@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CBitmapRealization *__fastcall CBitmapRealization::`vector deleting destructor'(
        CBitmapRealization *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl

  v3 = a2;
  CBitmapRealization::~CBitmapRealization(this, a2, a3);
  if ( (v3 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBitmapRealization *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
