/*
 * XREFs of ?IsInMotion@CForceEvaluator@@QEBA_NXZ @ 0x1801691CC
 * Callers:
 *     ?IsInMotion@CSpringForce@@UEBA_NXZ @ 0x180168E90 (-IsInMotion@CSpringForce@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CForceEvaluator::IsInMotion(CForceEvaluator *this)
{
  float v1; // xmm1_4
  float v2; // xmm1_4
  bool result; // al

  result = 1;
  if ( *((float *)this + 2) != 0.0 )
  {
    v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 3)) & _xmm);
    if ( v1 < 10.0 )
    {
      v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 5)) & _xmm);
      if ( v2 < 10.0 )
        return 0;
    }
  }
  return result;
}
