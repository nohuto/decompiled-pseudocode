/*
 * XREFs of ??_G?$LocalMILObject@VCMILBrushLinearGradient@@@@UEAAPEAXI@Z @ 0x1800F8D30
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CMILBrushLinearGradient@@MEAA@XZ @ 0x18014BB18 (--1CMILBrushLinearGradient@@MEAA@XZ.c)
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
