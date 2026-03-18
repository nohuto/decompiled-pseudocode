/*
 * XREFs of ??_ECGdiSpriteBitmap@@MEAAPEAXI@Z @ 0x18002BCBC
 * Callers:
 *     ??_ECGdiSpriteBitmap@@OBA@EAAPEAXI@Z @ 0x1800C03A0 (--_ECGdiSpriteBitmap@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x18002BBB4 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CGdiSpriteBitmap *__fastcall CGdiSpriteBitmap::`vector deleting destructor'(CGdiSpriteBitmap *this, char a2)
{
  CGdiSpriteBitmap::~CGdiSpriteBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CGdiSpriteBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
