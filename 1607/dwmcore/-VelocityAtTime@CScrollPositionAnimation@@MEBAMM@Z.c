/*
 * XREFs of ?VelocityAtTime@CScrollPositionAnimation@@MEBAMM@Z @ 0x18015FF90
 * Callers:
 *     <none>
 * Callees:
 *     powf_0 @ 0x1800BF686 (powf_0.c)
 */

float __fastcall CScrollPositionAnimation::VelocityAtTime(CScrollPositionAnimation *this, float a2)
{
  float v2; // xmm4_4

  v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 93) - 1.0)) & _xmm);
  if ( v2 <= 0.0000011920929 )
    return *((float *)this + 96);
  else
    return powf_0(*((float *)this + 93), a2) * *((float *)this + 96);
}
