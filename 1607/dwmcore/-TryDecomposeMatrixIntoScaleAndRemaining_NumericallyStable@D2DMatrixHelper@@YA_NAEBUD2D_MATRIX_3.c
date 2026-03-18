/*
 * XREFs of ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180057E88
 * Callers:
 *     ?AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800965A0 (-AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 * Callees:
 *     <none>
 */

char __fastcall D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(
        D2DMatrixHelper *this,
        const struct D2D_MATRIX_3X2_F *a2,
        float *a3,
        float *a4)
{
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  bool v8; // cc
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  FLOAT v13; // xmm0_4
  float v14; // xmm0_4

  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 1)) & _xmm);
  if ( v4 >= 0.00012207031
    || (v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 2)) & _xmm), v5 >= 0.00012207031) )
  {
    v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)this) & _xmm);
    if ( v10 >= 0.00012207031 )
      return 0;
    v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 3)) & _xmm);
    if ( v11 >= 0.00012207031 )
      return 0;
  }
  *(_OWORD *)a4 = *(_OWORD *)this;
  *((_QWORD *)a4 + 2) = *((_QWORD *)this + 2);
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)this) & _xmm);
  if ( v6 < 0.00012207031 )
  {
    v12 = *((float *)this + 2);
    v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 1)) & _xmm);
    a2->m11 = v13;
    v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm);
    v8 = a4[1] >= 0.0;
    *a3 = v14;
    if ( v8 )
      a4[1] = 1.0;
    else
      a4[1] = -1.0;
    if ( a4[2] >= 0.0 )
      a4[2] = 1.0;
    else
      a4[2] = -1.0;
  }
  else
  {
    v7 = *((float *)this + 3);
    a2->m11 = v6;
    v8 = *a4 >= 0.0;
    *a3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7) & _xmm);
    if ( v8 )
      *a4 = 1.0;
    else
      *a4 = -1.0;
    if ( a4[3] < 0.0 )
      a4[3] = -1.0;
    else
      a4[3] = 1.0;
  }
  return 1;
}
