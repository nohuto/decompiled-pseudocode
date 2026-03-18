/*
 * XREFs of ?IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z @ 0x1801283D8
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180128008 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x180136B74 (-GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x180136BC0 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
 */

char __fastcall CBaseExpression::IsExpressionValueValid(CBaseExpression *this, struct CExpressionValue *a2)
{
  char v2; // bl
  const struct D2DMatrix *Matrix4x4Value; // rax
  float v4; // xmm0_4
  double dx; // xmm0_8
  struct D2D_MATRIX_3X2_F v7; // [rsp+28h] [rbp-19h]
  __m128i v8; // [rsp+28h] [rbp-19h]
  __int64 v9; // [rsp+28h] [rbp-19h]
  float v10; // [rsp+30h] [rbp-11h]
  __int128 v11; // [rsp+48h] [rbp+7h]
  __int128 v12; // [rsp+58h] [rbp+17h]
  __int128 v13; // [rsp+68h] [rbp+27h]
  float v14[8]; // [rsp+78h] [rbp+37h]
  __int64 v15; // [rsp+A8h] [rbp+67h]

  switch ( *(_DWORD *)a2 )
  {
    case 0x12:
      return _finite(*((float *)a2 + 2)) != 0;
    case 0x23:
      v15 = *((_QWORD *)a2 + 1);
      v2 = 0;
      if ( !_finite(*(float *)&v15) )
        return v2;
      v4 = *((float *)&v15 + 1);
      goto LABEL_26;
    case 0x34:
      v9 = *((_QWORD *)a2 + 1);
      v10 = *((float *)a2 + 4);
      v2 = 0;
      if ( !_finite(*(float *)&v9) || !_finite(*((float *)&v9 + 1)) )
        return v2;
      v4 = v10;
      goto LABEL_26;
    case 0x45:
    case 0x46:
    case 0x47:
      v8 = _mm_loadu_si128((const __m128i *)((char *)a2 + 8));
      v2 = 0;
      if ( !_finite(*(float *)v8.m128i_i32)
        || !_finite(*(float *)&v8.m128i_i32[1])
        || !_finite(*(float *)&v8.m128i_i32[2]) )
      {
        return v2;
      }
      v4 = *(float *)&v8.m128i_i32[3];
      goto LABEL_26;
    case 0x68:
      v7 = *CExpressionValue::GetMatrix3x2Value(a2);
      v2 = 0;
      if ( !_finite(v7.m11) || !_finite(v7.m12) || !_finite(v7.m21) || !_finite(v7.m22) || !_finite(v7.dx) )
        return v2;
      dx = v7.dx;
      goto LABEL_27;
  }
  if ( *(_DWORD *)a2 != 265 )
    return 0;
  Matrix4x4Value = CExpressionValue::GetMatrix4x4Value(a2);
  v12 = *((_OWORD *)Matrix4x4Value + 1);
  v11 = *(_OWORD *)Matrix4x4Value;
  *(_OWORD *)v14 = *((_OWORD *)Matrix4x4Value + 3);
  v13 = *((_OWORD *)Matrix4x4Value + 2);
  v2 = 0;
  if ( _finite(COERCE_FLOAT(*(_OWORD *)Matrix4x4Value))
    && _finite(*((float *)&v11 + 1))
    && _finite(*((float *)&v11 + 2))
    && _finite(*((float *)&v11 + 3))
    && _finite(*(float *)&v12)
    && _finite(*((float *)&v12 + 1))
    && _finite(*((float *)&v12 + 2))
    && _finite(*((float *)&v12 + 3))
    && _finite(*(float *)&v13)
    && _finite(*((float *)&v13 + 1))
    && _finite(*((float *)&v13 + 2))
    && _finite(*((float *)&v13 + 3))
    && _finite(v14[0])
    && _finite(v14[1])
    && _finite(v14[2]) )
  {
    v4 = v14[3];
LABEL_26:
    dx = v4;
LABEL_27:
    if ( _finite(dx) )
      return 1;
  }
  return v2;
}
