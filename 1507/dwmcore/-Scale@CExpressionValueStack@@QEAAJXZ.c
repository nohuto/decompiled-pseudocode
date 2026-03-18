/*
 * XREFs of ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x180102220
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ??DD2DMatrix@@QEBA?AU0@M@Z @ 0x18009B950 (--DD2DMatrix@@QEBA-AU0@M@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x18012135C (-GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x1801213A8 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180121494 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180121560 (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Scale(CExpressionValueStack *this)
{
  unsigned int v1; // edi
  struct CExpressionValue *v3; // rbx
  struct CExpressionValue *v4; // rax
  float v5; // xmm2_4
  float *Matrix4x4Value; // rax
  D2DMatrix *v7; // rax
  const struct D2D_MATRIX_3X2_F *Matrix3x2Value; // rax
  __int64 v9; // rdx
  float v10; // xmm3_4
  __m128 v11; // xmm2
  CExpressionValue *v12; // rcx
  __int64 i; // rcx
  __m128 v14; // xmm7
  __m128 v15; // xmm6
  FLOAT v16; // xmm0_4
  __m128 v17; // xmm7
  __m128 v18; // xmm6
  float v19; // xmm6_4
  float v20; // xmm7_4
  unsigned int v22; // [rsp+28h] [rbp-69h]
  __int64 v23; // [rsp+48h] [rbp-49h]
  struct D2D_MATRIX_3X2_F v24; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v25[64]; // [rsp+68h] [rbp-29h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) >= 2u )
  {
    v3 = CExpressionValueStack::PeekStackValue(this, -1);
    v4 = CExpressionValueStack::PeekStackValue(this, 0);
    if ( *(_DWORD *)v4 != 17 )
    {
      v22 = 2015;
      goto LABEL_12;
    }
    if ( *(_DWORD *)v3 == 17 )
    {
      v19 = *((float *)v3 + 2);
      v20 = *((float *)v4 + 2);
      CExpressionValue::SetDataType(v3);
      *((float *)v3 + 2) = v20 * v19;
    }
    else if ( *(_DWORD *)v3 == 34 )
    {
      v17 = (__m128)*((unsigned int *)v4 + 2);
      v18 = v17;
      v18.m128_f32[0] = v17.m128_f32[0] * *((float *)v3 + 2);
      v17.m128_f32[0] = v17.m128_f32[0] * *((float *)v3 + 3);
      CExpressionValue::SetDataType(v3);
      *((_QWORD *)v3 + 1) = _mm_unpacklo_ps(v18, v17).m128_u64[0];
    }
    else if ( *(_DWORD *)v3 == 51 )
    {
      v14 = (__m128)*((unsigned int *)v4 + 2);
      v15 = v14;
      v16 = v14.m128_f32[0] * *((float *)v3 + 4);
      v14.m128_f32[0] = v14.m128_f32[0] * *((float *)v3 + 2);
      v15.m128_f32[0] = v15.m128_f32[0] * *((float *)v3 + 3);
      v24.m21 = v16;
      CExpressionValue::SetDataType(v3);
      *((_QWORD *)v3 + 1) = _mm_unpacklo_ps(v14, v15).m128_u64[0];
      *((FLOAT *)v3 + 4) = v16;
    }
    else
    {
      if ( *(_DWORD *)v3 != 68 )
      {
        if ( *(_DWORD *)v3 == 101 )
        {
          Matrix3x2Value = CExpressionValue::GetMatrix3x2Value(v3);
          v10 = *(float *)(v9 + 8);
          v11 = *(__m128 *)&Matrix3x2Value->m11;
          v23 = *(_QWORD *)&Matrix3x2Value->m[2][0];
          v24.m11 = COERCE_FLOAT(*(_OWORD *)&Matrix3x2Value->m11) * v10;
          v24.m12 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0] * v10;
          v24.m21 = _mm_shuffle_ps(v11, v11, 170).m128_f32[0] * v10;
          v24.dx = *(float *)&v23 * v10;
          v24.m22 = _mm_shuffle_ps(v11, v11, 255).m128_f32[0] * v10;
          v24.dy = *((float *)&v23 + 1) * v10;
          CExpressionValue::SetMatrix3x2Value(v12, &v24);
        }
        else
        {
          if ( *(_DWORD *)v3 != 262 )
          {
            v22 = 2070;
            goto LABEL_12;
          }
          v5 = *((float *)v4 + 2);
          Matrix4x4Value = (float *)CExpressionValue::GetMatrix4x4Value(v3);
          v7 = D2DMatrix::operator*(Matrix4x4Value, (D2DMatrix *)v25, v5);
          CExpressionValue::SetMatrix4x4Value(v3, v7);
        }
LABEL_22:
        --*((_DWORD *)this + 4);
        return v1;
      }
      for ( i = 0LL; i < 4; ++i )
        *(&v24.m11 + i) = *((float *)v4 + 2)
                        * *(float *)((char *)&v24.m11
                                   + 4 * i
                                   + (struct CExpressionValue *)((char *)v3 + 8)
                                   - (struct CExpressionValue *)&v24);
      CExpressionValue::SetDataType(v3);
      *(_OWORD *)((char *)v3 + 8) = *(_OWORD *)&v24.m11;
    }
    *((_BYTE *)v3 + 4) = 1;
    goto LABEL_22;
  }
  v22 = 1986;
LABEL_12:
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v22);
  return v1;
}
