/*
 * XREFs of ??_ECBitmapOfDeviceBitmaps@@MEAAPEAXI@Z @ 0x18008AA30
 * Callers:
 *     ??_ECBitmapOfDeviceBitmaps@@OHA@EAAPEAXI@Z @ 0x1800BDC80 (--_ECBitmapOfDeviceBitmaps@@OHA@EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x18008AEA0 (--1CBitmapOfDeviceBitmaps@@MEAA@XZ.c)
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
