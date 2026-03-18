/*
 * XREFs of ??_EConstantInput@Animations@Components@@MEAAPEAXI@Z @ 0x1800AB910
 * Callers:
 *     ?FinalRelease@Input@Animations@Components@@MEAAXXZ @ 0x1800AB840 (-FinalRelease@Input@Animations@Components@@MEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

Components::Animations::ConstantInput *__fastcall Components::Animations::ConstantInput::`vector deleting destructor'(
        Components::Animations::ConstantInput *this,
        char a2)
{
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rax

  *(_QWORD *)this = &Components::Animations::Input::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v3 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v3(WPF::g_pProcessHeap, this);
  }
  return this;
}
