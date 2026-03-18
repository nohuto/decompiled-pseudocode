/*
 * XREFs of ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18011044C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x18010D50C (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ?PreInitClass@Time@Animations@Components@@SAJXZ @ 0x18015383C (-PreInitClass@Time@Animations@Components@@SAJXZ.c)
 *     ?InitClass@AnimationManager@Animations@Components@@SAJXZ @ 0x180155D94 (-InitClass@AnimationManager@Animations@Components@@SAJXZ.c)
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
  v3 = byte_180196544 == 0;
  *((_QWORD *)this + 21) = (char *)this + 200;
  *((_QWORD *)this + 22) = (char *)this + 200;
  *((_DWORD *)this + 46) = 2;
  *((_DWORD *)this + 47) = 2;
  if ( v3 )
  {
    byte_180196544 = 1;
    Components::Animations::Time::PreInitClass();
    Components::Animations::AnimationManager::InitClass();
  }
  *((_DWORD *)this + 62) = 1;
  return this;
}
