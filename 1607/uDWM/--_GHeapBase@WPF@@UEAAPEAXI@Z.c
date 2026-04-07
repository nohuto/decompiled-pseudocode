/*
 * XREFs of ??_GHeapBase@WPF@@UEAAPEAXI@Z @ 0x18009AA80
 * Callers:
 *     AvDestroyProcessHeap @ 0x18009AAC0 (AvDestroyProcessHeap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

WPF::HeapBase *__fastcall WPF::HeapBase::`scalar deleting destructor'(WPF::HeapBase *this, char a2)
{
  *(_QWORD *)this = &WPF::HeapBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
