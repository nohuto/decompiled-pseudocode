/*
 * XREFs of ??_ECHwndBitmap@@MEAAPEAXI@Z @ 0x18000A704
 * Callers:
 *     ??_ECHwndBitmap@@OBA@EAAPEAXI@Z @ 0x1800C0580 (--_ECHwndBitmap@@OBA@EAAPEAXI@Z.c)
 *     ??_ECHwndBitmap@@OJA@EAAPEAXI@Z @ 0x1800C0590 (--_ECHwndBitmap@@OJA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x18000A650 (--1CHwndBitmap@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CHwndBitmap *__fastcall CHwndBitmap::`vector deleting destructor'(CHwndBitmap *this, char a2)
{
  CHwndBitmap::~CHwndBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwndBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
