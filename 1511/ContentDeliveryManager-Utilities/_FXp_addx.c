/*
 * XREFs of _FXp_addx @ 0x1800252E8
 * Callers:
 *     _Stofx @ 0x1800235F0 (_Stofx.c)
 *     _FXp_mulx @ 0x1800255F8 (_FXp_mulx.c)
 * Callees:
 *     _FXp_addh @ 0x180024F8C (_FXp_addh.c)
 */

float *__fastcall FXp_addx(float *a1, int a2, float *a3, int a4)
{
  int i; // edi

  for ( i = 0; i < a4; ++a3 )
  {
    if ( *a3 == 0.0 )
      break;
    FXp_addh(a1, a2, *a3);
    ++i;
  }
  return a1;
}
