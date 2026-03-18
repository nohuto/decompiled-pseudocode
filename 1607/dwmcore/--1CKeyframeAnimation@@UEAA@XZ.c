/*
 * XREFs of ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800872CC
 * Callers:
 *     ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x1800873B0 (--_GCKeyframeAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?UnregisterSources@CKeyframeAnimation@@MEAAXXZ @ 0x180086920 (-UnregisterSources@CKeyframeAnimation@@MEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z @ 0x1800B23B0 (-AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CKeyframeAnimation::~CKeyframeAnimation(CKeyframeAnimation *this)
{
  bool v1; // zf
  __int64 i; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  struct Components::Animations::Animation *v6; // rcx
  CMILCOMBase *v7; // rcx
  CMILCOMBase *v8; // rcx
  __int64 v9; // rcx

  v1 = (*((_BYTE *)this + 452) & 1) == 0;
  *(_QWORD *)this = &CKeyframeAnimation::`vftable'{for `CBaseExpression'};
  *((_QWORD *)this + 36) = &CKeyframeAnimation::`vftable'{for `IKeyframeAnimationOwner'};
  if ( !v1 )
  {
    --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 168LL) + 96LL);
    *((_BYTE *)this + 452) &= ~1u;
  }
  CKeyframeAnimation::UnregisterSources(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 90); i = (unsigned int)(i + 1) )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 42) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  *((_DWORD *)this + 90) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 336, 8LL);
  v6 = (struct Components::Animations::Animation *)*((_QWORD *)this + 48);
  if ( v6 )
    AnDestroyAnimation(v6);
  v7 = (CMILCOMBase *)*((_QWORD *)this + 37);
  if ( v7 )
  {
    CMILCOMBase::InternalRelease(v7);
    *((_QWORD *)this + 37) = 0LL;
  }
  v8 = (CMILCOMBase *)*((_QWORD *)this + 40);
  if ( v8 )
  {
    CMILCOMBase::InternalRelease(v8);
    *((_QWORD *)this + 40) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 336, v4, v5);
  CBaseExpression::~CBaseExpression(this);
}
