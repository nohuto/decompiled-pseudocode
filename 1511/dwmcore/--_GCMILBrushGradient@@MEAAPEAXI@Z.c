/*
 * XREFs of ??_GCMILBrushGradient@@MEAAPEAXI@Z @ 0x18015A420
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMILBrushGradient@@MEAA@XZ @ 0x180014CB8 (--1CMILBrushGradient@@MEAA@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

CMILBrushGradient *__fastcall CMILBrushGradient::`scalar deleting destructor'(CMILBrushGradient *this, char a2)
{
  CMILBrushGradient::~CMILBrushGradient(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMILBrushGradient *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
