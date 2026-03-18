/*
 * XREFs of ??_ECGdiSpriteBitmap@@MEAAPEAXI@Z @ 0x1800882CC
 * Callers:
 *     ??_ECGdiSpriteBitmap@@OBA@EAAPEAXI@Z @ 0x1800BD300 (--_ECGdiSpriteBitmap@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x1800881D0 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
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
