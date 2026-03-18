/*
 * XREFs of ?InterpolateCubic@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x180015E84
 * Callers:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x180016270 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetQPCFrequency@CAnimation@@UEAA_KXZ @ 0x180083C60 (-GetQPCFrequency@CAnimation@@UEAA_KXZ.c)
 */

float __fastcall CAnimationInterpolator::InterpolateCubic(
        CAnimation **this,
        const struct DwmAnimationPrimitive *a2,
        int a3)
{
  unsigned __int64 (__fastcall *v5)(CAnimation *__hidden); // rsi
  __int64 QPCFrequency; // rax
  double v7; // xmm0_8
  double v8; // xmm3_8

  v5 = *(unsigned __int64 (__fastcall **)(CAnimation *__hidden))(*(_QWORD *)*this + 24LL);
  if ( v5 == CAnimation::GetQPCFrequency )
    QPCFrequency = CAnimation::GetQPCFrequency(*this);
  else
    QPCFrequency = v5(*this);
  v7 = (double)(int)QPCFrequency;
  if ( QPCFrequency < 0 )
    v7 = v7 + 1.844674407370955e19;
  v8 = (double)(a3 - *((_DWORD *)a2 + 2)) / v7;
  return *((float *)a2 + 4) * (v8 * v8) * v8
       + *((float *)a2 + 5) * (v8 * v8)
       + *((float *)a2 + 6) * v8
       + *((float *)a2 + 7);
}
