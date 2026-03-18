/*
 * XREFs of ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x18004C580
 * Callers:
 *     ?Release@CPrimitiveGroup@@UEAAKXZ @ 0x18004D4C0 (-Release@CPrimitiveGroup@@UEAAKXZ.c)
 * Callees:
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x18004DACC (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CPrimitiveGroup *__fastcall CPrimitiveGroup::`vector deleting destructor'(CPrimitiveGroup *this, char a2)
{
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  CPrimitiveGroup::~CPrimitiveGroup(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CPrimitiveGroup *))v4)(WPF::g_pProcessHeap, this);
  }
  return this;
}
