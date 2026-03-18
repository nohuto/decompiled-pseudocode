/*
 * XREFs of ?GetLastPrimitive@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@XZ @ 0x180015DAC
 * Callers:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x180016270 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetPrimitivesCount@CAnimation@@UEAA_KXZ @ 0x1800838A0 (-GetPrimitivesCount@CAnimation@@UEAA_KXZ.c)
 */

const struct DwmAnimationPrimitive *__fastcall CAnimationInterpolator::GetLastPrimitive(CAnimation **this)
{
  unsigned __int64 (__fastcall *v2)(CAnimation *__hidden); // rdi
  int PrimitivesCount; // eax

  v2 = **(unsigned __int64 (__fastcall ***)(CAnimation *__hidden))*this;
  if ( v2 == CAnimation::GetPrimitivesCount )
    PrimitivesCount = CAnimation::GetPrimitivesCount(*this);
  else
    PrimitivesCount = v2(*this);
  return CAnimationInterpolator::GetPrimitiveAtIndex(this, PrimitivesCount - 1);
}
