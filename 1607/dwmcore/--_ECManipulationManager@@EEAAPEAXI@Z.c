/*
 * XREFs of ??_ECManipulationManager@@EEAAPEAXI@Z @ 0x18016A960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CManipulationManager@@EEAA@XZ @ 0x18016A678 (--1CManipulationManager@@EEAA@XZ.c)
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
