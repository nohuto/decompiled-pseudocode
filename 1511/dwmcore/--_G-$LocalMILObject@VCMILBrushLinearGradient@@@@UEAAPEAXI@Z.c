/*
 * XREFs of ??_G?$LocalMILObject@VCMILBrushLinearGradient@@@@UEAAPEAXI@Z @ 0x18015A320
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMILBrushLinearGradient@@MEAA@XZ @ 0x180014C34 (--1CMILBrushLinearGradient@@MEAA@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

CMILBrushLinearGradient *__fastcall LocalMILObject<CMILBrushLinearGradient>::`scalar deleting destructor'(
        CMILBrushLinearGradient *a1,
        char a2)
{
  CMILBrushLinearGradient::~CMILBrushLinearGradient(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMILBrushLinearGradient *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
