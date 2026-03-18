/*
 * XREFs of ??_ECHwndBitmap@@MEAAPEAXI@Z @ 0x1800121C8
 * Callers:
 *     ??_ECHwndBitmap@@OBA@EAAPEAXI@Z @ 0x18009A8E0 (--_ECHwndBitmap@@OBA@EAAPEAXI@Z.c)
 *     ??_ECHwndBitmap@@OEI@EAAPEAXI@Z @ 0x18009A8F0 (--_ECHwndBitmap@@OEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x18001211C (--1CHwndBitmap@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
