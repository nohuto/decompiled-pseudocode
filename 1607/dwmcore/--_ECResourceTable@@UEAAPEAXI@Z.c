/*
 * XREFs of ??_ECResourceTable@@UEAAPEAXI@Z @ 0x18003AA00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceTable@@UEAA@XZ @ 0x18003AAF8 (--1CResourceTable@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CResourceTable *__fastcall CResourceTable::`vector deleting destructor'(CResourceTable *this, char a2)
{
  CResourceTable::~CResourceTable(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CResourceTable *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
