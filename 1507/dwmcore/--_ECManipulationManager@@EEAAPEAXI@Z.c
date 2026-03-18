/*
 * XREFs of ??_ECManipulationManager@@EEAAPEAXI@Z @ 0x1801299C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CManipulationManager@@EEAA@XZ @ 0x180129688 (--1CManipulationManager@@EEAA@XZ.c)
 */

CManipulationManager *__fastcall CManipulationManager::`vector deleting destructor'(
        CManipulationManager *this,
        char a2)
{
  CManipulationManager::~CManipulationManager(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CManipulationManager *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
