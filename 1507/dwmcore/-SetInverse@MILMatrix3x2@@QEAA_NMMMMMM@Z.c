/*
 * XREFs of ?SetInverse@MILMatrix3x2@@QEAA_NMMMMMM@Z @ 0x1800DE0CC
 * Callers:
 *     ?GetBounds@?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@QEBA_NAEAV?$CRectF@URealizationSampling@CoordinateSpace@@@@@Z @ 0x1800E0B70 (-GetBounds@-$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@QEBA_NAEAV-$CRectF@URe.c)
 * Callees:
 *     <none>
 */

bool __fastcall MILMatrix3x2::SetInverse(
        MILMatrix3x2 *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  float v8; // xmm4_4
  bool result; // al
  float v10; // xmm6_4

  v8 = (float)(a2 * a5) - (float)(a3 * a4);
  if ( v8 == 0.0 )
    return 0;
  v10 = 1.0 / v8;
  if ( !_finite((float)(1.0 / v8)) )
    return 0;
  result = 1;
  *(float *)this = v10 * a5;
  *((_DWORD *)this + 2) = COERCE_UNSIGNED_INT(v10 * a4) ^ _xmm;
  *((_DWORD *)this + 1) = COERCE_UNSIGNED_INT(v10 * a3) ^ _xmm;
  *((float *)this + 3) = v10 * a2;
  *((float *)this + 4) = (float)((float)(a4 * a7) - (float)(a5 * a6)) * v10;
  *((float *)this + 5) = (float)((float)(a3 * a6) - (float)(a2 * a7)) * v10;
  return result;
}
