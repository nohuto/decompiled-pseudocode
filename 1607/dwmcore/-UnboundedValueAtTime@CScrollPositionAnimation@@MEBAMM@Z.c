/*
 * XREFs of ?UnboundedValueAtTime@CScrollPositionAnimation@@MEBAMM@Z @ 0x18015F900
 * Callers:
 *     <none>
 * Callees:
 *     logf_0 @ 0x1800BF64A (logf_0.c)
 *     powf_0 @ 0x1800BF686 (powf_0.c)
 */

float __fastcall CScrollPositionAnimation::UnboundedValueAtTime(CScrollPositionAnimation *this, float a2)
{
  float v3; // xmm3_4
  float v4; // xmm6_4

  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 93) - 1.0)) & _xmm);
  if ( v3 <= 0.0000011920929 )
    return (float)(a2 * *((float *)this + 96)) + *((float *)this + 97);
  v4 = (float)(powf_0(*((float *)this + 93), a2) - 1.0) * *((float *)this + 96);
  return (float)(v4 / logf_0(*((float *)this + 93))) + *((float *)this + 97);
}
