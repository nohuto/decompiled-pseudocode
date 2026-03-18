/*
 * XREFs of ??1CBspNode@@UEAA@XZ @ 0x180166660
 * Callers:
 *     ??_ECBspNode@@UEAAPEAXI@Z @ 0x1801666F0 (--_ECBspNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseSubTree@CBspNode@@QEAAXXZ @ 0x180166B0C (-ReleaseSubTree@CBspNode@@QEAAXXZ.c)
 */

void __fastcall CBspNode::~CBspNode(void **this)
{
  __int64 i; // rsi
  __int64 v3; // r14

  *this = &CBspNode::`vftable';
  CBspNode::ReleaseSubTree((CBspNode *)this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this[4] + i);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 4);
  *this = &CMILRefCountBase::`vftable';
}
