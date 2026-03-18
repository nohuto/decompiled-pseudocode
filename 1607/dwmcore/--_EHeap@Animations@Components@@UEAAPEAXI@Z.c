/*
 * XREFs of ??_EHeap@Animations@Components@@UEAAPEAXI@Z @ 0x180194590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

Components::Animations::Heap *__fastcall Components::Animations::Heap::`vector deleting destructor'(
        Components::Animations::Heap *this,
        char a2)
{
  *(_QWORD *)this = &Components::Animations::Heap::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, Components::Animations::Heap *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
