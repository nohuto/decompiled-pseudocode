/*
 * XREFs of ?GetPrimitive@CSharedSectionAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x180058E00
 * Callers:
 *     ?OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x180046F10 (-OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z.c)
 * Callees:
 *     <none>
 */

const struct DwmAnimationPrimitive *__fastcall CSharedSectionAnimationPrimitiveBuffer::GetPrimitive(
        CSharedSectionAnimationPrimitiveBuffer *this,
        unsigned int a2)
{
  __int64 v2; // r10
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r8
  __int64 v5; // rax

  v2 = *((_QWORD *)this + 2);
  v3 = *((unsigned int *)this + 7);
  v4 = *(unsigned int *)(v2 + 48);
  if ( v3 < v4 && *((unsigned int *)this + 6) <= v4 - v3 && (v5 = *(_QWORD *)(v2 + 56)) != 0 && v5 + v3 )
    return (const struct DwmAnimationPrimitive *)(v5 + v3 + 32LL * a2);
  else
    return 0LL;
}
