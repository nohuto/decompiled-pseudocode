/*
 * XREFs of ?GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x180039970
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180039CC0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

const struct DwmAnimationPrimitive *__fastcall CAnimation::GetPrimitive(CAnimation *this, unsigned int a2)
{
  CSharedSectionAnimationPrimitiveBuffer *v2; // rcx
  const struct DwmAnimationPrimitive *(__fastcall *v3)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rax

  v2 = (CSharedSectionAnimationPrimitiveBuffer *)*((_QWORD *)this + 2);
  v3 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*(_QWORD *)v2 + 24LL);
  if ( v3 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    return CSharedSectionAnimationPrimitiveBuffer::GetPrimitive(v2, a2);
  if ( v3 == CPayloadedAnimationPrimitiveBuffer::GetPrimitive )
    return CPayloadedAnimationPrimitiveBuffer::GetPrimitive(v2, a2);
  return (const struct DwmAnimationPrimitive *)((__int64 (*)(void))v3)();
}
