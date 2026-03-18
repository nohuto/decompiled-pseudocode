/*
 * XREFs of ?GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z @ 0x180015D28
 * Callers:
 *     ?GetLastPrimitive@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@XZ @ 0x180015DAC (-GetLastPrimitive@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@XZ.c)
 *     ?TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z @ 0x180015E00 (-TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     ?FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z @ 0x180015F48 (-FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z.c)
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x180016270 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetPrimitivesCount@CAnimation@@UEAA_KXZ @ 0x1800838A0 (-GetPrimitivesCount@CAnimation@@UEAA_KXZ.c)
 *     ?GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x180083BB0 (-GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z.c)
 */

const struct DwmAnimationPrimitive *__fastcall CAnimationInterpolator::GetPrimitiveAtIndex(
        CAnimation **this,
        unsigned int a2)
{
  unsigned __int64 (__fastcall *v4)(CAnimation *__hidden); // rsi
  unsigned int PrimitivesCount; // eax
  const struct DwmAnimationPrimitive *(*v6)(CAnimation *__hidden, unsigned int); // rsi

  v4 = **(unsigned __int64 (__fastcall ***)(CAnimation *__hidden))*this;
  if ( v4 == CAnimation::GetPrimitivesCount )
    PrimitivesCount = CAnimation::GetPrimitivesCount(*this);
  else
    PrimitivesCount = v4(*this);
  if ( a2 >= PrimitivesCount )
    return 0LL;
  v6 = *(const struct DwmAnimationPrimitive *(**)(CAnimation *__hidden, unsigned int))(*(_QWORD *)*this + 8LL);
  if ( v6 == CAnimation::GetPrimitive )
    return CAnimation::GetPrimitive(*this, a2);
  else
    return (const struct DwmAnimationPrimitive *)((__int64 (__fastcall *)(CAnimation *, _QWORD))v6)(*this, a2);
}
