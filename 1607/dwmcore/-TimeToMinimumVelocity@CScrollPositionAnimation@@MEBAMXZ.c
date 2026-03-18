/*
 * XREFs of ?TimeToMinimumVelocity@CScrollPositionAnimation@@MEBAMXZ @ 0x18015FDD0
 * Callers:
 *     <none>
 * Callees:
 *     logf_0 @ 0x1800BF64A (logf_0.c)
 */

float __fastcall CScrollPositionAnimation::TimeToMinimumVelocity(CScrollPositionAnimation *this)
{
  float v1; // xmm4_4
  float v2; // xmm6_4
  float v3; // xmm7_4
  float v4; // xmm8_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm6_4
  float v8; // xmm1_4

  v1 = *((float *)this + 96);
  v2 = 0.0;
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v1) & _xmm);
  if ( v3 > *((float *)this + 98) )
  {
    v4 = *((float *)this + 93);
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v4 - 1.0)) & _xmm);
    if ( v5 <= 0.0000011920929 )
    {
      v8 = ((float)((float)(v1 > 0.0) * 3.4028235e38) - *((float *)this + 97)) / v1;
      return fmaxf(v8, 0.0);
    }
    else
    {
      v6 = logf_0(*((float *)this + 98));
      v7 = v6 - logf_0(v3);
      return v7 / logf_0(v4);
    }
  }
  return v2;
}
