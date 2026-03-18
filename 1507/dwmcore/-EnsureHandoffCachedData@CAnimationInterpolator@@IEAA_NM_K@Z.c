/*
 * XREFs of ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z @ 0x18000F358
 * Callers:
 *     ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x18000F44C (-GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEA.c)
 * Callees:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18000F500 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 */

char __fastcall CAnimationInterpolator::EnsureHandoffCachedData(CAnimationInterpolator *this, float a2, __int64 a3)
{
  char InterpolatedValue; // di
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm6_4
  float v13; // [rsp+40h] [rbp+8h] BYREF

  InterpolatedValue = 1;
  if ( (*((_BYTE *)this + 24) & 2) == 0 )
  {
    v13 = 0.0;
    InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(this, 0LL, &v13, 0LL);
    if ( InterpolatedValue )
    {
      InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(this, a3, (float *)this + 4, 0LL);
      if ( InterpolatedValue )
      {
        v8 = *((float *)this + 4);
        v9 = v8 - v13;
        v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v8 - v13)) & _xmm);
        if ( v10 < 0.0000011920929 )
        {
          *((_BYTE *)this + 24) &= ~1u;
        }
        else
        {
          *((_BYTE *)this + 24) |= 1u;
          v11 = (float)(v8 - a2) / v9;
          *((float *)this + 5) = v11;
          InterpolatedValue = _finite(v11) != 0 ? InterpolatedValue : 0;
        }
        if ( InterpolatedValue )
        {
          v12 = a2 - v13;
          *((_BYTE *)this + 24) |= 2u;
          *((float *)this + 3) = v12;
        }
      }
    }
  }
  return InterpolatedValue;
}
