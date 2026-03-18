/*
 * XREFs of ??_ECBitmapOfDeviceBitmaps@@MEAAPEAXI@Z @ 0x180048920
 * Callers:
 *     ??_ECBitmapOfDeviceBitmaps@@OHA@EAAPEAXI@Z @ 0x18009AFD0 (--_ECBitmapOfDeviceBitmaps@@OHA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x180048CA0 (--1CBitmapOfDeviceBitmaps@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
