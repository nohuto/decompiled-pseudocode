/*
 * XREFs of ??_ECDesktopTreeData@@UEAAPEAXI@Z @ 0x180137D00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTreeData@@UEAA@XZ @ 0x1800310D0 (--1CTreeData@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CDesktopTreeData *__fastcall CDesktopTreeData::`vector deleting destructor'(CDesktopTreeData *this, char a2)
{
  *((_BYTE *)this + 16) &= ~1u;
  *(_QWORD *)this = &CDesktopTreeData::`vftable';
  CTreeData::~CTreeData(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDesktopTreeData *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
