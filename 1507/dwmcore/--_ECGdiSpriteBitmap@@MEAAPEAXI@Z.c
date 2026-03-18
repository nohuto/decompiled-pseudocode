/*
 * XREFs of ??_ECGdiSpriteBitmap@@MEAAPEAXI@Z @ 0x18007FA2C
 * Callers:
 *     ??_ECGdiSpriteBitmap@@OBA@EAAPEAXI@Z @ 0x18009A680 (--_ECGdiSpriteBitmap@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x18007F930 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
