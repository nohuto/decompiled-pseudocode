/*
 * XREFs of ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18012B850
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x180127EDC (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ?PreInitClass@Time@Animations@Components@@SAJXZ @ 0x1801607FC (-PreInitClass@Time@Animations@Components@@SAJXZ.c)
 *     ?InitClass@AnimationManager@Animations@Components@@SAJXZ @ 0x180163A64 (-InitClass@AnimationManager@Animations@Components@@SAJXZ.c)
 */

CKeyframeAnimation *__fastcall CKeyframeAnimation::CKeyframeAnimation(
        CKeyframeAnimation *this,
        struct CComposition *a2)
{
  bool v3; // zf

  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CKeyframeAnimation::`vftable'{for `CBaseExpression'};
  *((_QWORD *)this + 17) = &CKeyframeAnimation::`vftable'{for `IKeyframeAnimationOwner'};
  *((_DWORD *)this + 48) = 0;
  v3 = byte_1801A41C0 == 0;
  *((_QWORD *)this + 21) = (char *)this + 200;
  *((_QWORD *)this + 22) = (char *)this + 200;
  *((_DWORD *)this + 46) = 2;
  *((_DWORD *)this + 47) = 2;
  if ( v3 )
  {
    byte_1801A41C0 = 1;
    Components::Animations::Time::PreInitClass();
    Components::Animations::AnimationManager::InitClass();
  }
  *((_DWORD *)this + 62) = 1;
  return this;
}
