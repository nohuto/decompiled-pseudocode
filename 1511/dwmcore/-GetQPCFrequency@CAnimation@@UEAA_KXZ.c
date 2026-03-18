/*
 * XREFs of ?GetQPCFrequency@CAnimation@@UEAA_KXZ @ 0x180083C60
 * Callers:
 *     ?InterpolateCubic@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x180015E84 (-InterpolateCubic@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CAnimation::GetQPCFrequency(CAnimation *this)
{
  return *(_QWORD *)(*((_QWORD *)this - 9) + 312LL);
}
