/*
 * XREFs of ?GetPrimitivesCount@CAnimation@@UEAA_KXZ @ 0x1800838A0
 * Callers:
 *     ?GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z @ 0x180015D28 (-GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?GetLastPrimitive@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@XZ @ 0x180015DAC (-GetLastPrimitive@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@XZ.c)
 *     ?FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z @ 0x180015F48 (-FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

unsigned __int64 __fastcall CAnimation::GetPrimitivesCount(CAnimation *this)
{
  unsigned int *v1; // rbx
  unsigned __int64 (__fastcall *v2)(CSharedSectionAnimationPrimitiveBuffer *__hidden); // rdi

  v1 = (unsigned int *)*((_QWORD *)this + 2);
  v2 = *(unsigned __int64 (__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden))(*(_QWORD *)v1 + 32LL);
  if ( v2 == CSharedSectionAnimationPrimitiveBuffer::GetCount )
    return (unsigned __int64)v1[6] >> 5;
  if ( v2 == CPayloadedAnimationPrimitiveBuffer::GetCount )
    return CPayloadedAnimationPrimitiveBuffer::GetCount(*((CPayloadedAnimationPrimitiveBuffer **)this + 2));
  return v2(*((CSharedSectionAnimationPrimitiveBuffer **)this + 2));
}
