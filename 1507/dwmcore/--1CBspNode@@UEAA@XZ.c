/*
 * XREFs of ??1CBspNode@@UEAA@XZ @ 0x180158C6C
 * Callers:
 *     ??_ECBspNode@@UEAAPEAXI@Z @ 0x180158D00 (--_ECBspNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReleaseSubTree@CBspNode@@QEAAXXZ @ 0x180159214 (-ReleaseSubTree@CBspNode@@QEAAXXZ.c)
 */

void __fastcall CBspNode::~CBspNode(CBspNode *this)
{
  __int64 i; // rsi
  __int64 v3; // r14

  *(_QWORD *)this = &CBspNode::`vftable'{for `IBSPGraphNode'};
  *((_QWORD *)this + 1) = &CBspNode::`vftable'{for `CMILRefCountBase'};
  CBspNode::ReleaseSubTree(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 5);
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
}
