/*
 * XREFs of ?GetCount@CPayloadedAnimationPrimitiveBuffer@@UEAA_KXZ @ 0x1800B63D0
 * Callers:
 *     ?GetPrimitivesCount@CAnimation@@UEAA_KXZ @ 0x180039670 (-GetPrimitivesCount@CAnimation@@UEAA_KXZ.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180039CC0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CPayloadedAnimationPrimitiveBuffer::GetCount(CPayloadedAnimationPrimitiveBuffer *this)
{
  return *((unsigned int *)this + 10);
}
