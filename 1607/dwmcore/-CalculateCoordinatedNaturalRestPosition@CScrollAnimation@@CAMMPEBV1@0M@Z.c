/*
 * XREFs of ?CalculateCoordinatedNaturalRestPosition@CScrollAnimation@@CAMMPEBV1@0M@Z @ 0x18015D6D8
 * Callers:
 *     ?CalculateCoordinatedNaturalRestPositions@CScrollAnimation@@SA?AUD2DVector3@@AEBU2@PEBV1@110@Z @ 0x18015D858 (-CalculateCoordinatedNaturalRestPositions@CScrollAnimation@@SA-AUD2DVector3@@AEBU2@PEBV1@110@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CScrollAnimation::CalculateCoordinatedNaturalRestPosition(
        float a1,
        const struct CScrollAnimation *a2,
        const struct CScrollAnimation *a3,
        float a4)
{
  float v7; // xmm9_4
  float v8; // xmm10_4
  double v9; // xmm0_8
  float v10; // xmm6_4
  double v11; // xmm0_8
  float v12; // xmm0_4

  v7 = *((float *)a2 + 94);
  v8 = *((float *)a3 + 94);
  if ( fminf(v7, v8) > 0.0 )
  {
    v9 = (*(double (__fastcall **)(const struct CScrollAnimation *))(*(_QWORD *)a2 + 280LL))(a2);
    v10 = *(float *)&v9 - *((float *)a2 + 97);
    v11 = (*(double (__fastcall **)(const struct CScrollAnimation *))(*(_QWORD *)a3 + 280LL))(a3);
    a1 = (float)((float)(v10 + a4) - (float)((float)(*(float *)&v11 / *((float *)a3 + 97)) * a4))
       + (float)((float)(*(float *)&v11 / *((float *)a3 + 97)) * a1);
  }
  if ( v8 <= v7 )
  {
    if ( v7 > v8 )
      return a1
           + (float)(*((float *)a2 + 102)
                   - (*(float (__fastcall **)(const struct CScrollAnimation *))(*(_QWORD *)a2 + 280LL))(a2));
  }
  else
  {
    v12 = (*(float (__fastcall **)(const struct CScrollAnimation *))(*(_QWORD *)a3 + 280LL))(a3);
    return (float)((float)((float)(*((float *)a2 + 102) - *((float *)a2 + 97)) + a4)
                 * (float)(1.0 - (float)(*((float *)a3 + 102) / v12)))
         + (float)((float)(*((float *)a3 + 102) / v12) * a1);
  }
  return a1;
}
