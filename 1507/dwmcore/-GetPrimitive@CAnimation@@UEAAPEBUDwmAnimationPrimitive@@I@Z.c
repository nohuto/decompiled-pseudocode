/*
 * XREFs of ?GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x180046D90
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x1800470D0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

const struct DwmAnimationPrimitive *__fastcall CAnimation::GetPrimitive(CAnimation *this, unsigned int a2)
{
  __int64 v2; // rbx
  const struct DwmAnimationPrimitive *(__fastcall *v3)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int); // rsi
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  __int64 v7; // rax

  v2 = *((_QWORD *)this + 2);
  v3 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CSharedSectionAnimationPrimitiveBuffer *__hidden, unsigned int))(*(_QWORD *)v2 + 24LL);
  if ( v3 != CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
    return v3(*((CSharedSectionAnimationPrimitiveBuffer **)this + 2), a2);
  v4 = *(_QWORD *)(v2 + 16);
  v5 = *(unsigned int *)(v2 + 28);
  v6 = *(unsigned int *)(v4 + 48);
  if ( v5 < v6 && *(unsigned int *)(v2 + 24) <= v6 - v5 && (v7 = *(_QWORD *)(v4 + 56)) != 0 && v7 + v5 )
    return (const struct DwmAnimationPrimitive *)(v7 + v5 + 32LL * a2);
  else
    return 0LL;
}
