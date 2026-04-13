/*
 * XREFs of _FXp_getw @ 0x1800237DC
 * Callers:
 *     sub_180023CBC @ 0x180023CBC (sub_180023CBC.c)
 * Callees:
 *     <none>
 */

float __fastcall FXp_getw(float *a1, int a2)
{
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm2_4
  float v6; // xmm0_4

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
    *((_WORD *)a1 + 4) |= 1u;
  v6 = a1[1];
  if ( (float)(v5 - v3) != v6 )
    return (float)(v6 + a1[2]) + v3;
  return v5 + a1[2];
}
