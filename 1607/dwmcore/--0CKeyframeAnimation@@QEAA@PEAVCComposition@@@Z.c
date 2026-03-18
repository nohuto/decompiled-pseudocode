/*
 * XREFs of ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180087A80
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x180088E9C (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ?AnInitializeEngine@@YAXXZ @ 0x1800AD104 (-AnInitializeEngine@@YAXXZ.c)
 */

CKeyframeAnimation *__fastcall CKeyframeAnimation::CKeyframeAnimation(
        CKeyframeAnimation *this,
        struct CComposition *a2)
{
  CKeyframeAnimation *result; // rax

  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CKeyframeAnimation::`vftable'{for `CBaseExpression'};
  *((_QWORD *)this + 36) = &CKeyframeAnimation::`vftable'{for `IKeyframeAnimationOwner'};
  *((_DWORD *)this + 90) = 0;
  *((_QWORD *)this + 42) = (char *)this + 368;
  *((_QWORD *)this + 43) = (char *)this + 368;
  *((_DWORD *)this + 88) = 2;
  *((_DWORD *)this + 89) = 2;
  AnInitializeEngine();
  result = this;
  *((_DWORD *)this + 110) = 1;
  return result;
}
