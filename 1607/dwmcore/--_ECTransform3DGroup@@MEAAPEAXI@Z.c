/*
 * XREFs of ??_ECTransform3DGroup@@MEAAPEAXI@Z @ 0x180021AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTransform3DGroup@@MEAA@XZ @ 0x180021BE8 (--1CTransform3DGroup@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CTransform3DGroup *__fastcall CTransform3DGroup::`vector deleting destructor'(CTransform3DGroup *this, char a2)
{
  CTransform3DGroup::~CTransform3DGroup(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTransform3DGroup *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
