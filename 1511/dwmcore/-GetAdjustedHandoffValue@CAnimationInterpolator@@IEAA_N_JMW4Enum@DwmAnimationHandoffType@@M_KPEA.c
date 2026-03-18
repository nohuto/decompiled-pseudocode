/*
 * XREFs of ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x1800160DC
 * Callers:
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1800161C8 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180083FD0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z @ 0x180015FF0 (-EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z.c)
 */

char __fastcall CAnimationInterpolator::GetAdjustedHandoffValue(
        __int64 a1,
        signed __int64 a2,
        float a3,
        int a4,
        float a5,
        signed __int64 a6,
        float *a7)
{
  float v9; // xmm6_4
  char v11; // bp
  int v12; // ebx
  float v14; // xmm0_4

  v9 = a3;
  v11 = CAnimationInterpolator::EnsureHandoffCachedData((CAnimationInterpolator *)a1, a5, a6);
  if ( v11 )
  {
    v12 = a4 - 1;
    if ( v12 )
    {
      if ( v12 == 1 )
        v9 = a3 + *(float *)(a1 + 12);
    }
    else if ( a2 <= a6 )
    {
      if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
      {
        v9 = (float)((float)(a3 - *(float *)(a1 + 16)) * *(float *)(a1 + 20)) + *(float *)(a1 + 16);
      }
      else
      {
        v14 = (float)(int)a6;
        if ( a6 < 0 )
          v14 = v14 + 1.8446744e19;
        v9 = (float)((float)(1.0 - (float)((float)(int)a2 / v14)) * *(float *)(a1 + 12)) + a3;
      }
    }
  }
  if ( !_finite(v9) )
    return 0;
  *a7 = v9;
  return v11;
}
