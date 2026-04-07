/*
 * XREFs of ??_GCRectangleInstruction@@EEAAPEAXI@Z @ 0x180039500
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CRectangleInstruction *__fastcall CRectangleInstruction::`scalar deleting destructor'(
        CRectangleInstruction *this,
        char a2)
{
  CBaseObject *v4; // rcx
  void (__fastcall *v5)(WPF::ProcessHeapImpl *, void *); // rax

  *(_QWORD *)this = &CRectangleInstruction::`vftable';
  v4 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v5 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v5 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v5(WPF::g_pProcessHeap, this);
  }
  return this;
}
