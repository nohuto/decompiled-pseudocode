/*
 * XREFs of ??_GCManipulationContext@@UEAAPEAXI@Z @ 0x180007AE0
 * Callers:
 *     ??_ECManipulationContext@@W7EAAPEAXI@Z @ 0x1800C12B0 (--_ECManipulationContext@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CManipulationContext@@UEAA@XZ @ 0x1800079B8 (--1CManipulationContext@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CManipulationContext *__fastcall CManipulationContext::`scalar deleting destructor'(
        CManipulationContext *this,
        char a2)
{
  CManipulationContext::~CManipulationContext(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CManipulationContext *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
