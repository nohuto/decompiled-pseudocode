/*
 * XREFs of sub_180024DEC @ 0x180024DEC
 * Callers:
 *     sub_180024628 @ 0x180024628 (sub_180024628.c)
 *     sub_1800252D8 @ 0x1800252D8 (sub_1800252D8.c)
 * Callees:
 *     <none>
 */

double __fastcall sub_180024DEC(double *a1, int a2)
{
  double v3; // xmm3_8
  double v4; // xmm2_8
  double v5; // xmm2_8
  double v6; // xmm0_8

  if ( !a2 )
    return 0.0;
  if ( a2 == 1 )
    return *a1;
  v3 = *a1;
  if ( *a1 == 0.0 )
    return *a1;
  v4 = a1[1];
  if ( v4 == 0.0 )
    return *a1;
  if ( a2 == 2 || a1[2] == 0.0 )
    return v4 + v3;
  v5 = v4 + v3;
  if ( a1[3] != 0.0 )
    *((_WORD *)a1 + 8) |= 1u;
  v6 = a1[1];
  if ( v5 - v3 != v6 )
    return v6 + a1[2] + v3;
  return v5 + a1[2];
}
