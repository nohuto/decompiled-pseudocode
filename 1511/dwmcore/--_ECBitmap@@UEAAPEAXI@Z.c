/*
 * XREFs of ??_ECBitmap@@UEAAPEAXI@Z @ 0x180152290
 * Callers:
 *     ??_ECBitmap@@WHA@EAAPEAXI@Z @ 0x1800BE4C0 (--_ECBitmap@@WHA@EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CBitmap@@UEAA@XZ @ 0x180089124 (--1CBitmap@@UEAA@XZ.c)
 */

CBitmap *__fastcall CBitmap::`vector deleting destructor'(CBitmap *this, char a2)
{
  CBitmap::~CBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
