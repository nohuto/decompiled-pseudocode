/*
 * XREFs of ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z @ 0x180015FF0
 * Callers:
 *     ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x1800160DC (-GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEA.c)
 * Callees:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x180016270 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?IsCloseRealZero@@YAHMM@Z @ 0x180035D90 (-IsCloseRealZero@@YAHMM@Z.c)
 */

char __fastcall CAnimationInterpolator::EnsureHandoffCachedData(CAnimationInterpolator *this, float a2, __int64 a3)
{
  char InterpolatedValue; // di
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm6_4
  float v11; // [rsp+40h] [rbp+8h] BYREF

  InterpolatedValue = 1;
  if ( (*((_BYTE *)this + 24) & 2) == 0 )
  {
    v11 = 0.0;
    InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(this, 0LL, &v11, 0LL);
    if ( InterpolatedValue )
    {
      InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(this, a3, (float *)this + 4, 0LL);
      if ( InterpolatedValue )
      {
        v7 = *((float *)this + 4);
        if ( (unsigned int)IsCloseRealZero(v7 - v11, 0.0000011920929) )
        {
          *((_BYTE *)this + 24) &= ~1u;
        }
        else
        {
          *((_BYTE *)this + 24) |= 1u;
          v9 = (float)(v7 - a2) / v8;
          *((float *)this + 5) = v9;
          InterpolatedValue = _finite(v9) != 0 ? InterpolatedValue : 0;
        }
        if ( InterpolatedValue )
        {
          v10 = a2 - v11;
          *((_BYTE *)this + 24) |= 2u;
          *((float *)this + 3) = v10;
        }
      }
    }
  }
  return InterpolatedValue;
}
