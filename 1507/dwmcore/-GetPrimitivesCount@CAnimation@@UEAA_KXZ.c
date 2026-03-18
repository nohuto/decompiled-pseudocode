/*
 * XREFs of ?GetPrimitivesCount@CAnimation@@UEAA_KXZ @ 0x180046CE0
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x1800470D0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
