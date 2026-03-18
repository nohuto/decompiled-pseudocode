/*
 * XREFs of ??_GCLinearGradientLegacyMilBrush@@MEAAPEAXI@Z @ 0x180013780
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x180013C30 (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

CLinearGradientLegacyMilBrush *__fastcall CLinearGradientLegacyMilBrush::`scalar deleting destructor'(
        CLinearGradientLegacyMilBrush *this,
        char a2)
{
  CLinearGradientLegacyMilBrush::~CLinearGradientLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CLinearGradientLegacyMilBrush *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
