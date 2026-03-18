/*
 * XREFs of ?TimeToMinimumVelocity@CScrollScaleAnimation@@MEBAMXZ @ 0x18015F760
 * Callers:
 *     <none>
 * Callees:
 *     logf_0 @ 0x1800BF64A (logf_0.c)
 */

float __fastcall CScrollScaleAnimation::TimeToMinimumVelocity(CScrollScaleAnimation *this)
{
  float v1; // xmm4_4
  float v2; // xmm3_4
  float v3; // xmm6_4
  float v4; // xmm5_4
  float v5; // xmm7_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm0_4

  v1 = *((float *)this + 96);
  v2 = *((float *)this + 98);
  v3 = 0.0;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v1) & _xmm);
  if ( v4 > v2 )
  {
    v5 = *((float *)this + 93);
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v5 - 1.0)) & _xmm);
    if ( v6 <= 0.0000011920929 )
    {
      if ( (float)(v1 > 0.0) <= 0.0 )
        v8 = 0.0;
      else
        v8 = FLOAT_3_4028235e38;
      return fmaxf((float)(v8 - *((float *)this + 97)) / v1, 0.0);
    }
    else
    {
      v7 = logf_0(v2 / v4);
      return v7 / logf_0(v5);
    }
  }
  return v3;
}
