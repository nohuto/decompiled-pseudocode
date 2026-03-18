/*
 * XREFs of ??_ECBitmapOfDeviceBitmaps@@MEAAPEAXI@Z @ 0x180093EF0
 * Callers:
 *     ??_ECBitmapOfDeviceBitmaps@@OHA@EAAPEAXI@Z @ 0x1800C1450 (--_ECBitmapOfDeviceBitmaps@@OHA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x180094420 (--1CBitmapOfDeviceBitmaps@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CBitmapOfDeviceBitmaps *__fastcall CBitmapOfDeviceBitmaps::`vector deleting destructor'(
        CBitmapOfDeviceBitmaps *this,
        char a2)
{
  CBitmapOfDeviceBitmaps::~CBitmapOfDeviceBitmaps(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBitmapOfDeviceBitmaps *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
