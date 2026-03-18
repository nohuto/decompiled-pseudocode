/*
 * XREFs of ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x180094760
 * Callers:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?ClearResources@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x1800948E0 (-ClearResources@CPrimitiveGroupDrawListGenerator@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x18009DF14 (--_GCPrimitiveBuffer@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CPrimitiveGroupDrawListGenerator *__fastcall CPrimitiveGroupDrawListGenerator::`scalar deleting destructor'(
        CPrimitiveBuffer **this,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  CPrimitiveBuffer *v6; // rcx
  CPrimitiveBuffer *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  void (__fastcall *v12)(WPF::ProcessHeapImpl *, void *); // rax

  *this = (CPrimitiveBuffer *)&CPrimitiveGroupDrawListGenerator::`vftable';
  CPrimitiveGroupDrawListGenerator::ClearResources((CPrimitiveGroupDrawListGenerator *)this);
  v6 = this[2];
  if ( v6 )
    CPrimitiveBuffer::`scalar deleting destructor'(v6, v4);
  v7 = this[3];
  if ( v7 )
    CPrimitiveBuffer::`scalar deleting destructor'(v7, v4);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 13, v4, v5);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 9, v8, v9);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 5, v10, v11);
  *this = (CPrimitiveBuffer *)&CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v12 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v12 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v12(WPF::g_pProcessHeap, this);
  }
  return (CPrimitiveGroupDrawListGenerator *)this;
}
