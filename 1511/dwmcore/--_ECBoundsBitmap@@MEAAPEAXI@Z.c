/*
 * XREFs of ??_ECBoundsBitmap@@MEAAPEAXI@Z @ 0x180026FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

CBoundsBitmap *__fastcall CBoundsBitmap::`vector deleting destructor'(CBoundsBitmap *this, char a2)
{
  *((_QWORD *)this + 2) = &CBoundsBitmap::`vftable'{for `IBitmapSource'};
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBoundsBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
