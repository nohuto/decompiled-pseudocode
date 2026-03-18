/*
 * XREFs of ?GetPrimitivesCount@CAnimation@@UEAA_KXZ @ 0x180039670
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180039CC0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CAnimation::GetPrimitivesCount(CAnimation *this)
{
  unsigned int *v1; // rcx
  unsigned __int64 (__fastcall *v2)(CSharedSectionAnimationPrimitiveBuffer *__hidden); // rax

  v1 = (unsigned int *)*((_QWORD *)this + 2);
  v2 = *(unsigned __int64 (__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden))(*(_QWORD *)v1 + 32LL);
  if ( v2 == CSharedSectionAnimationPrimitiveBuffer::GetCount )
    return (unsigned __int64)v1[6] >> 5;
  if ( v2 == CPayloadedAnimationPrimitiveBuffer::GetCount )
    return CPayloadedAnimationPrimitiveBuffer::GetCount((CPayloadedAnimationPrimitiveBuffer *)v1);
  return ((__int64 (*)(void))v2)();
}
