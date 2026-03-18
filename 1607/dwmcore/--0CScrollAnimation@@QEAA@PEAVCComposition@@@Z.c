/*
 * XREFs of ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18015D508
 * Callers:
 *     ?EnsureScrollAnimations@CInteractionTracker@@AEAAJXZ @ 0x18014A474 (-EnsureScrollAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ??0CScrollPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18015F99C (--0CScrollPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x180088E9C (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ?AnInitializeEngine@@YAXXZ @ 0x1800AD104 (-AnInitializeEngine@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultFriction@CScrollAnimation@@AEBAMXZ @ 0x18015DE80 (-GetDefaultFriction@CScrollAnimation@@AEBAMXZ.c)
 */

CScrollAnimation *__fastcall CScrollAnimation::CScrollAnimation(CScrollAnimation *this, struct CComposition *a2)
{
  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CScrollAnimation::`vftable';
  *((_QWORD *)this + 38) = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 78) = 0;
  *((_QWORD *)this + 37) = &CSpringForce::`vftable'{for `IAccelerator'};
  *((_QWORD *)this + 38) = &CSpringForce::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 134) = 0;
  (**((void (__fastcall ***)(char *))this + 37))((char *)this + 296);
  *((float *)this + 93) = CScrollAnimation::GetDefaultFriction(this);
  AnInitializeEngine();
  return this;
}
