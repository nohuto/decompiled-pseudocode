/*
 * XREFs of ??_GCVisualGroup@@EEAAPEAXI@Z @ 0x180141110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CVisualGroup@@EEAA@XZ @ 0x1801410B8 (--1CVisualGroup@@EEAA@XZ.c)
 */

CVisualGroup *__fastcall CVisualGroup::`scalar deleting destructor'(CVisualGroup *this, char a2)
{
  CVisualGroup::~CVisualGroup(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CVisualGroup *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
