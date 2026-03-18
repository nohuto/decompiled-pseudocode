/*
 * XREFs of ??_GCMonitorTreeAssociation@@UEAAPEAXI@Z @ 0x18011AC80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CMonitorTreeAssociation *__fastcall CMonitorTreeAssociation::`scalar deleting destructor'(
        CMonitorTreeAssociation *this,
        char a2)
{
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 16);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CMonitorTreeAssociation *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
