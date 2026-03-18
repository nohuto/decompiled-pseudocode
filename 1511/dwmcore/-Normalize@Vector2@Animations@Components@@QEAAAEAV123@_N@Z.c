/*
 * XREFs of ?Normalize@Vector2@Animations@Components@@QEAAAEAV123@_N@Z @ 0x1801660A4
 * Callers:
 *     ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180165A30 (-Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 * Callees:
 *     sqrtf_0 @ 0x1800BC90E (sqrtf_0.c)
 */

struct Components::Animations::Vector2 *__fastcall Components::Animations::Vector2::Normalize(
        Components::Animations::Vector2 *this)
{
  float v2; // xmm6_4
  float v3; // xmm7_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4

  v2 = *(float *)this;
  v3 = *((float *)this + 1);
  v4 = (float)(v3 * v3) + (float)(v2 * v2);
  if ( v4 <= 0.0000099999997 )
  {
    *(_DWORD *)this = 0;
LABEL_8:
    *((_DWORD *)this + 1) = 0;
    return this;
  }
  if ( (float)(v2 * v2) == v4 )
  {
    if ( v2 >= 0.0 )
      v5 = FLOAT_1_0;
    else
      v5 = FLOAT_N1_0;
    *(float *)this = v5;
    goto LABEL_8;
  }
  if ( (float)(v3 * v3) == v4 )
  {
    *(_DWORD *)this = 0;
    if ( v3 >= 0.0 )
      v6 = FLOAT_1_0;
    else
      v6 = FLOAT_N1_0;
    *((float *)this + 1) = v6;
  }
  else
  {
    v7 = sqrtf_0(v4);
    *(float *)this = v2 / v7;
    *((float *)this + 1) = v3 / v7;
  }
  return this;
}
