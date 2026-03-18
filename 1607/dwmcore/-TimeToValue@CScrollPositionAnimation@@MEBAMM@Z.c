/*
 * XREFs of ?TimeToValue@CScrollPositionAnimation@@MEBAMM@Z @ 0x18015FED0
 * Callers:
 *     <none>
 * Callees:
 *     log_0 @ 0x1800BF632 (log_0.c)
 *     logf_0 @ 0x1800BF64A (logf_0.c)
 */

float __fastcall CScrollPositionAnimation::TimeToValue(CScrollPositionAnimation *this, float a2)
{
  double v2; // xmm7_8
  double v3; // xmm8_8
  float v4; // xmm2_4
  double v5; // xmm6_8

  v2 = a2 - *((float *)this + 97);
  v3 = *((float *)this + 96);
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 93) - 1.0)) & _xmm);
  if ( v4 <= 0.0000011920929 )
    return COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v2 / v3) & _xmm);
  v5 = logf_0(*((float *)this + 93));
  return log_0(v5 * v2 / v3 + 1.0) / v5;
}
