/*
 * XREFs of ??_ECManipulation@@UEAAPEAXI@Z @ 0x1801459D4
 * Callers:
 *     ??_ECManipulation@@W7EAAPEAXI@Z @ 0x1800C07A0 (--_ECManipulation@@W7EAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CManipulation@@UEAA@XZ @ 0x1801459B0 (--1CManipulation@@UEAA@XZ.c)
 */

CManipulation *__fastcall CManipulation::`vector deleting destructor'(CManipulation *this, char a2)
{
  CManipulation::~CManipulation(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CManipulation *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
