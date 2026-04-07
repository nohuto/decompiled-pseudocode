/*
 * XREFs of ??_GCDrawImageInstruction@@EEAAPEAXI@Z @ 0x1800159D0
 * Callers:
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CDrawImageInstruction *__fastcall CDrawImageInstruction::`scalar deleting destructor'(
        CDrawImageInstruction *this,
        char a2)
{
  CBaseObject *v4; // rcx
  void (__fastcall *v5)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  *(_QWORD *)this = &CDrawImageInstruction::`vftable';
  v4 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 4) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v5 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v5 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v5(WPF::g_pProcessHeap, this);
  }
  return this;
}
