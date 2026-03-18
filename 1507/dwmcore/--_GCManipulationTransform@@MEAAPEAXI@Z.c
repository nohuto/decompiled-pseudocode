/*
 * XREFs of ??_GCManipulationTransform@@MEAAPEAXI@Z @ 0x180016430
 * Callers:
 *     <none>
 * Callees:
 *     ??1CManipulationTransform@@MEAA@XZ @ 0x18001676C (--1CManipulationTransform@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CManipulationTransform *__fastcall CManipulationTransform::`scalar deleting destructor'(
        CManipulationTransform *this,
        char a2)
{
  CManipulationTransform::~CManipulationTransform(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CManipulationTransform *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
