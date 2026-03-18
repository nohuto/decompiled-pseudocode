/*
 * XREFs of ?GetPrimitive@CAnimation@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x180083BB0
 * Callers:
 *     ?GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z @ 0x180015D28 (-GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

const struct DwmAnimationPrimitive *__fastcall CAnimation::GetPrimitive(CAnimation *this, unsigned int a2)
{
  __int64 v2; // rbx
  const struct DwmAnimationPrimitive *(__fastcall *v3)(CPayloadedAnimationPrimitiveBuffer *, unsigned int); // rsi
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  __int64 v7; // rax

  v2 = *((_QWORD *)this + 2);
  v3 = *(const struct DwmAnimationPrimitive *(__fastcall **)(CPayloadedAnimationPrimitiveBuffer *, unsigned int))(*(_QWORD *)v2 + 24LL);
  if ( v3 == CSharedSectionAnimationPrimitiveBuffer::GetPrimitive )
  {
    v4 = *(_QWORD *)(v2 + 16);
    v5 = *(unsigned int *)(v2 + 28);
    v6 = *(unsigned int *)(v4 + 48);
    if ( v5 < v6 && *(unsigned int *)(v2 + 24) <= v6 - v5 && (v7 = *(_QWORD *)(v4 + 56)) != 0 && v7 + v5 )
      return (const struct DwmAnimationPrimitive *)(v7 + v5 + 32LL * a2);
    else
      return 0LL;
  }
  else if ( v3 == CPayloadedAnimationPrimitiveBuffer::GetPrimitive )
  {
    return CPayloadedAnimationPrimitiveBuffer::GetPrimitive(*((CPayloadedAnimationPrimitiveBuffer **)this + 2), a2);
  }
  else
  {
    return v3(*((CPayloadedAnimationPrimitiveBuffer **)this + 2), a2);
  }
}
