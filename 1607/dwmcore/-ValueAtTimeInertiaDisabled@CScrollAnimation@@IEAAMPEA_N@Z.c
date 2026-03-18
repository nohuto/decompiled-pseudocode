/*
 * XREFs of ?ValueAtTimeInertiaDisabled@CScrollAnimation@@IEAAMPEA_N@Z @ 0x18015F114
 * Callers:
 *     ?ValueAtTime@CScrollAnimation@@IEAAMM@Z @ 0x18015EEE0 (-ValueAtTime@CScrollAnimation@@IEAAMM@Z.c)
 * Callees:
 *     ?ClampValueToBoundaries@CScrollAnimation@@AEBAMM@Z @ 0x18015DDDC (-ClampValueToBoundaries@CScrollAnimation@@AEBAMM@Z.c)
 */

float __fastcall CScrollAnimation::ValueAtTimeInertiaDisabled(CScrollAnimation *this, bool *a2)
{
  bool v2; // zf
  float result; // xmm0_4

  v2 = *((_DWORD *)this + 105) == 0;
  result = *((float *)this + 97);
  *a2 = 1;
  if ( !v2 )
    return CScrollAnimation::ClampValueToBoundaries(this, result);
  return result;
}
