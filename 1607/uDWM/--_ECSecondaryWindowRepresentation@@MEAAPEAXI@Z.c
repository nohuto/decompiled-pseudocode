/*
 * XREFs of ??_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z @ 0x180033CD0
 * Callers:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x1800353D8 (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CSecondaryWindowRepresentation *__fastcall CSecondaryWindowRepresentation::`vector deleting destructor'(
        CSecondaryWindowRepresentation *this,
        char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rax

  CSecondaryWindowRepresentation::~CSecondaryWindowRepresentation(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}
