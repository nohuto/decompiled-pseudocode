/*
 * XREFs of ??_GMoveOptimizationInfo@@MEAAPEAXI@Z @ 0x1800F13B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1MoveOptimizationInfo@@MEAA@XZ @ 0x1800F1008 (--1MoveOptimizationInfo@@MEAA@XZ.c)
 */

MoveOptimizationInfo *__fastcall MoveOptimizationInfo::`scalar deleting destructor'(
        MoveOptimizationInfo *this,
        char a2)
{
  MoveOptimizationInfo::~MoveOptimizationInfo(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, MoveOptimizationInfo *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
