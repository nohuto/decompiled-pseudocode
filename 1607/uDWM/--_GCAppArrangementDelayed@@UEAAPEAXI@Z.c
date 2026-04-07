/*
 * XREFs of ??_GCAppArrangementDelayed@@UEAAPEAXI@Z @ 0x1800035E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAppArrangementBase@@UEAA@XZ @ 0x1800019A4 (--1CAppArrangementBase@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CAppArrangementDelayed *__fastcall CAppArrangementDelayed::`scalar deleting destructor'(
        CAppArrangementDelayed *this,
        char a2)
{
  CAppArrangementBase::~CAppArrangementBase(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAppArrangementDelayed *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
