/*
 * XREFs of ??_ECResourceTable@@UEAAPEAXI@Z @ 0x18006C890
 * Callers:
 *     <none>
 * Callees:
 *     ?BreakLinksForCyclicResources@CResourceTable@@AEAAXXZ @ 0x18006C968 (-BreakLinksForCyclicResources@CResourceTable@@AEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CResourceTable *__fastcall CResourceTable::`vector deleting destructor'(CResourceTable *this, char a2)
{
  WPF::ProcessHeapImpl *v4; // rdi

  *(_QWORD *)this = &CResourceTable::`vftable';
  CResourceTable::BreakLinksForCyclicResources(this);
  v4 = WPF::g_pProcessHeap;
  *((_QWORD *)this + 2) = &HANDLE_TABLE::`vftable';
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, *((_QWORD *)this + 5));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CResourceTable *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
