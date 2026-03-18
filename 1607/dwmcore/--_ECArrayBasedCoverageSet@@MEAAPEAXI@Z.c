/*
 * XREFs of ??_ECArrayBasedCoverageSet@@MEAAPEAXI@Z @ 0x18004B010
 * Callers:
 *     ??_ECArrayBasedCoverageSet@@O7EAAPEAXI@Z @ 0x1800BFF30 (--_ECArrayBasedCoverageSet@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CArrayBasedCoverageSet *__fastcall CArrayBasedCoverageSet::`vector deleting destructor'(
        CArrayBasedCoverageSet *this,
        __int64 a2,
        __int64 a3)
{
  char v4; // bl
  void (*v5)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  *(_QWORD *)this = &CArrayBasedCoverageSet::`vftable'{for `ICoverageSet'};
  v4 = a2;
  *((_QWORD *)this + 1) = &CArrayBasedCoverageSet::`vftable'{for `CMILCOMBase'};
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 24, a2, a3);
  *((_QWORD *)this + 1) = &CMILCOMBase::`vftable';
  if ( (v4 & 1) != 0 )
  {
    v5 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v5 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CArrayBasedCoverageSet *))v5)(WPF::g_pProcessHeap, this);
  }
  return this;
}
