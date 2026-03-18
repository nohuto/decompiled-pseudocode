/*
 * XREFs of ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1800161C8
 * Callers:
 *     ?GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z @ 0x180083C80 (-GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180083FD0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x1800160DC (-GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEA.c)
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x180016270 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall CAnimationInterpolator::GetAnimationValue(
        CAnimationInterpolator *this,
        __int64 a2,
        float *a3,
        bool *a4)
{
  char result; // al
  float v8; // [rsp+40h] [rbp-20h] BYREF
  int v9; // [rsp+44h] [rbp-1Ch] BYREF
  float v10; // [rsp+48h] [rbp-18h] BYREF
  signed __int64 v11; // [rsp+50h] [rbp-10h] BYREF

  v8 = 0.0;
  v10 = 0.0;
  v11 = 0LL;
  v9 = 0;
  result = CAnimationInterpolator::GetInterpolatedValue(this, a2, &v8, a4);
  if ( result )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, int *, float *, signed __int64 *))(**(_QWORD **)this + 16LL))(
               *(_QWORD *)this,
               &v9,
               &v10,
               &v11);
    if ( result )
    {
      if ( v9 )
        result = CAnimationInterpolator::GetAdjustedHandoffValue((__int64)this, a2, v8, v9, v10, v11, &v8);
      if ( result )
        *a3 = v8;
    }
  }
  return result;
}
