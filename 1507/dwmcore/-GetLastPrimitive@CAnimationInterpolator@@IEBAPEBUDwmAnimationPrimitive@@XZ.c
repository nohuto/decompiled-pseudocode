/*
 * XREFs of ?GetLastPrimitive@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@XZ @ 0x18000F164
 * Callers:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18000F500 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

const struct DwmAnimationPrimitive *__fastcall CAnimationInterpolator::GetLastPrimitive(CAnimationInterpolator *this)
{
  int v2; // eax

  v2 = (***(__int64 (__fastcall ****)(_QWORD))this)(*(_QWORD *)this);
  return CAnimationInterpolator::GetPrimitiveAtIndex(this, v2 - 1);
}
