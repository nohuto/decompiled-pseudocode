/*
 * XREFs of ??_ECSnapshot@@MEAAPEAXI@Z @ 0x1801432A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CSnapshot@@MEAA@XZ @ 0x180143208 (--1CSnapshot@@MEAA@XZ.c)
 */

CSnapshot *__fastcall CSnapshot::`vector deleting destructor'(CSnapshot *this, char a2)
{
  CSnapshot::~CSnapshot(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CSnapshot *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
