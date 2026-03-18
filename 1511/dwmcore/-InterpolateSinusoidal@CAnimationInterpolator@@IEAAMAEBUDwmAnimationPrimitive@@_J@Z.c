/*
 * XREFs of ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x180158664
 * Callers:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x180016270 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180083FD0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     sin_0 @ 0x1800BC8EA (sin_0.c)
 */

float __fastcall CAnimationInterpolator::InterpolateSinusoidal(
        CAnimationInterpolator *this,
        const struct DwmAnimationPrimitive *a2,
        int a3)
{
  double v4; // xmm6_8
  __int64 v5; // rax
  double v6; // xmm0_8

  v4 = (double)(a3 - *((_DWORD *)a2 + 2));
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
  v6 = (double)(int)v5;
  if ( v5 < 0 )
    v6 = v6 + 1.844674407370955e19;
  return sin_0(*((float *)a2 + 6) * (v4 / v6) + *((float *)a2 + 7)) * *((float *)a2 + 5) + *((float *)a2 + 4);
}
