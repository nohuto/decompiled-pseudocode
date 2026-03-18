/*
 * XREFs of ??$_Pow_int@M@@YAMMH@Z @ 0x1800B4028
 * Callers:
 *     ?ComputePrefilteredSize@@YAXIMMAEAI@Z @ 0x1800B3EF0 (-ComputePrefilteredSize@@YAXIMMAEAI@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall _Pow_int<float>(float a1, int a2)
{
  unsigned int v3; // eax
  float v4; // xmm1_4

  v3 = a2;
  if ( a2 < 0 )
    v3 = -a2;
  v4 = FLOAT_1_0;
  while ( 1 )
  {
    if ( (v3 & 1) != 0 )
      v4 = v4 * a1;
    v3 >>= 1;
    if ( !v3 )
      break;
    a1 = a1 * a1;
  }
  if ( a2 < 0 )
    return 1.0 / v4;
  else
    return v4;
}
