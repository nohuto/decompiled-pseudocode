/*
 * XREFs of ??_ECSecondaryD2DBitmap@@MEAAPEAXI@Z @ 0x1800B1970
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSecondaryD2DBitmap@@MEAA@XZ @ 0x1800120D0 (--1CSecondaryD2DBitmap@@MEAA@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

CSecondaryD2DBitmap *__fastcall CSecondaryD2DBitmap::`vector deleting destructor'(CSecondaryD2DBitmap *this, char a2)
{
  CSecondaryD2DBitmap::~CSecondaryD2DBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CSecondaryD2DBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
