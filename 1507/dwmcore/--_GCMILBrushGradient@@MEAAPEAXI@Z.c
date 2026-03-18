/*
 * XREFs of ??_GCMILBrushGradient@@MEAAPEAXI@Z @ 0x18014BD30
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CMILBrushGradient@@MEAA@XZ @ 0x18014BCC0 (--1CMILBrushGradient@@MEAA@XZ.c)
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
