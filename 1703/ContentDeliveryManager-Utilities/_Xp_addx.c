/*
 * XREFs of _Xp_addx @ 0x18006D784
 * Callers:
 *     _Stodx @ 0x18006B754 (_Stodx.c)
 *     _Xp_mulx @ 0x18006D9E0 (_Xp_mulx.c)
 * Callees:
 *     _Xp_addh @ 0x18006D42C (_Xp_addh.c)
 */

double *__fastcall Xp_addx(double *a1, int a2, double *a3, int a4)
{
  int i; // edi

  for ( i = 0; i < a4; ++a3 )
  {
    if ( *a3 == 0.0 )
      break;
    Xp_addh(a1, a2, *a3);
    ++i;
  }
  return a1;
}
