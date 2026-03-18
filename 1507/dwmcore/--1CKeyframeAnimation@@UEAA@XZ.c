/*
 * XREFs of ??1CKeyframeAnimation@@UEAA@XZ @ 0x1801104D4
 * Callers:
 *     ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x1801105D0 (--_GCKeyframeAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z @ 0x180153B94 (-AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z.c)
 */

void __fastcall CKeyframeAnimation::~CKeyframeAnimation(CKeyframeAnimation *this)
{
  bool v1; // zf
  __int64 i; // rbp
  struct Components::Animations::Animation *v4; // rcx
  CMILCOMBase *v5; // rcx

  v1 = (*((_BYTE *)this + 260) & 1) == 0;
  *(_QWORD *)this = &CKeyframeAnimation::`vftable'{for `CBaseExpression'};
  *((_QWORD *)this + 17) = &CKeyframeAnimation::`vftable'{for `IKeyframeAnimationOwner'};
  if ( !v1 )
  {
    --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 168LL) + 96LL);
    *((_BYTE *)this + 260) &= ~1u;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 48); i = (unsigned int)(i + 1) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 21) + 8 * i) + 16LL))(*(_QWORD *)(*((_QWORD *)this + 21) + 8 * i));
  *((_DWORD *)this + 48) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 21, 8u);
  v4 = (struct Components::Animations::Animation *)*((_QWORD *)this + 27);
  if ( v4 )
    AnDestroyAnimation(v4);
  v5 = (CMILCOMBase *)*((_QWORD *)this + 18);
  if ( v5 )
  {
    CMILCOMBase::InternalRelease(v5);
    *((_QWORD *)this + 18) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 21);
  CBaseExpression::~CBaseExpression(this);
}
