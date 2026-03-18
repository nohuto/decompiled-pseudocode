/*
 * XREFs of ??1CBspNode@@UEAA@XZ @ 0x1801995DC
 * Callers:
 *     ??_ECBspNode@@UEAAPEAXI@Z @ 0x180199650 (--_ECBspNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseSubTree@CBspNode@@QEAAXXZ @ 0x1801999FC (-ReleaseSubTree@CBspNode@@QEAAXXZ.c)
 */

void __fastcall CBspNode::~CBspNode(CBspNode *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx

  *(_QWORD *)this = &CBspNode::`vftable';
  CBspNode::ReleaseSubTree(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 4) + 8 * i);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 32);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
