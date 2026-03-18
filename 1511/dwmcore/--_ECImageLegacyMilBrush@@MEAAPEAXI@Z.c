/*
 * XREFs of ??_ECImageLegacyMilBrush@@MEAAPEAXI@Z @ 0x180059A90
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x18005A540 (--1CImageLegacyMilBrush@@MEAA@XZ.c)
 */

CImageLegacyMilBrush *__fastcall CImageLegacyMilBrush::`vector deleting destructor'(
        CImageLegacyMilBrush *this,
        char a2)
{
  CImageLegacyMilBrush::~CImageLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CImageLegacyMilBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
