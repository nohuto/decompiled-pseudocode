/*
 * XREFs of ??_ECBitmapRealization@@MEAAPEAXI@Z @ 0x18015BFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CBitmapRealization@@MEAA@XZ @ 0x18008361C (--1CBitmapRealization@@MEAA@XZ.c)
 */

CBitmapRealization *__fastcall CBitmapRealization::`vector deleting destructor'(CBitmapRealization *this, char a2)
{
  CBitmapRealization::~CBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBitmapRealization *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
