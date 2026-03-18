/*
 * XREFs of ?GetPrimitive@CPayloadedAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x18001C300
 * Callers:
 *     ?GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x180083BB0 (-GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180083FD0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

const struct DwmAnimationPrimitive *__fastcall CPayloadedAnimationPrimitiveBuffer::GetPrimitive(
        CPayloadedAnimationPrimitiveBuffer *this,
        unsigned int a2)
{
  return (const struct DwmAnimationPrimitive *)(*((_QWORD *)this + 2) + 32LL * a2);
}
