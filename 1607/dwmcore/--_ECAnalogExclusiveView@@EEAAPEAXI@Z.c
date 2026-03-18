/*
 * XREFs of ??_ECAnalogExclusiveView@@EEAAPEAXI@Z @ 0x180165400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CAnalogExclusiveView@@EEAA@XZ @ 0x1801653E0 (--1CAnalogExclusiveView@@EEAA@XZ.c)
 */

CAnalogExclusiveView *__fastcall CAnalogExclusiveView::`vector deleting destructor'(
        CAnalogExclusiveView *this,
        char a2)
{
  CAnalogExclusiveView::~CAnalogExclusiveView(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnalogExclusiveView *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
