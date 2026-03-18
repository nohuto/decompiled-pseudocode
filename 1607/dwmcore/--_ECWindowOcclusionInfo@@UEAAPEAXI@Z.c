/*
 * XREFs of ??_ECWindowOcclusionInfo@@UEAAPEAXI@Z @ 0x180031630
 * Callers:
 *     ??1CTreeData@@UEAA@XZ @ 0x1800310D0 (--1CTreeData@@UEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CWindowOcclusionInfo *__fastcall CWindowOcclusionInfo::`vector deleting destructor'(
        CWindowOcclusionInfo *this,
        char a2)
{
  void (*v3)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  *(_QWORD *)this = &COcclusionInfo::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v3 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v3 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CWindowOcclusionInfo *))v3)(WPF::g_pProcessHeap, this);
  }
  return this;
}
