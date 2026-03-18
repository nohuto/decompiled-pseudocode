/*
 * XREFs of ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x18011EEE8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ??GD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1800BE880 (--GD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 *     ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x180136B74 (-GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x180136BC0 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180136D40 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180136E0C (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Subtract(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // esi
  __int64 v4; // rdx
  float *v5; // rbx
  float *v6; // r8
  float v7; // eax
  float *Matrix4x4Value; // rax
  float *v9; // r8
  D2DMatrix *v10; // rax
  const struct D2D_MATRIX_3X2_F *Matrix3x2Value; // rax
  __m128 v12; // xmm6
  CExpressionValue *v13; // r8
  const struct D2D_MATRIX_3X2_F *v14; // rax
  float v15; // xmm2_4
  __m128 v16; // xmm3
  FLOAT v17; // xmm0_4
  float v18; // xmm1_4
  float *v19; // r8
  __int64 v20; // rax
  char *v21; // rcx
  __int64 v22; // rdx
  __m128 v23; // xmm7
  __m128 v24; // xmm6
  FLOAT m21; // eax
  __m128 v26; // xmm7
  __m128 v27; // xmm6
  float v28; // xmm7_4
  float v29; // xmm6_4
  unsigned int v31; // [rsp+28h] [rbp-89h]
  float v32[6]; // [rsp+48h] [rbp-69h]
  __int64 v33; // [rsp+60h] [rbp-51h]
  struct D2D_MATRIX_3X2_F v34; // [rsp+68h] [rbp-49h] BYREF
  _BYTE v35[64]; // [rsp+88h] [rbp-29h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = (float *)(v4 + 24LL * (v1 - 2));
    v6 = (float *)(v4 + 24LL * (v1 - 1));
    v7 = *v5;
    if ( *(_DWORD *)v5 != *(_DWORD *)v6 )
    {
      v31 = 1428;
      goto LABEL_12;
    }
    if ( LODWORD(v7) == 18 )
    {
      v28 = v5[2];
      v29 = v6[2];
      CExpressionValue::SetDataType(v5);
      v5[2] = v28 - v29;
    }
    else if ( LODWORD(v7) == 35 )
    {
      v26 = (__m128)*((unsigned int *)v5 + 2);
      v27 = (__m128)*((unsigned int *)v5 + 3);
      v26.m128_f32[0] = v26.m128_f32[0] - v6[2];
      v27.m128_f32[0] = v27.m128_f32[0] - v6[3];
      CExpressionValue::SetDataType(v5);
      *((_QWORD *)v5 + 1) = _mm_unpacklo_ps(v26, v27).m128_u64[0];
    }
    else if ( LODWORD(v7) == 52 )
    {
      v23 = (__m128)*((unsigned int *)v5 + 2);
      v24 = (__m128)*((unsigned int *)v5 + 3);
      v23.m128_f32[0] = v23.m128_f32[0] - v6[2];
      v24.m128_f32[0] = v24.m128_f32[0] - v6[3];
      v34.m21 = v5[4] - v6[4];
      CExpressionValue::SetDataType(v5);
      m21 = v34.m21;
      *((_QWORD *)v5 + 1) = _mm_unpacklo_ps(v23, v24).m128_u64[0];
      v5[4] = m21;
    }
    else
    {
      if ( LODWORD(v7) != 69 )
      {
        if ( LODWORD(v7) == 104 )
        {
          Matrix3x2Value = CExpressionValue::GetMatrix3x2Value((CExpressionValue *)v5);
          v12 = *(__m128 *)&Matrix3x2Value->m11;
          *(_QWORD *)v32 = *(_QWORD *)&Matrix3x2Value->m[2][0];
          v14 = CExpressionValue::GetMatrix3x2Value(v13);
          v15 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
          v16 = *(__m128 *)&v14->m11;
          v17 = v12.m128_f32[0] - COERCE_FLOAT(*(_OWORD *)&v14->m11);
          v33 = *(_QWORD *)&v14->m[2][0];
          v18 = _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
          v12.m128_f32[0] = _mm_shuffle_ps(v12, v12, 255).m128_f32[0] - v14->m22;
          v34.m11 = v17;
          LODWORD(v34.m22) = v12.m128_i32[0];
          v34.m12 = v18 - _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
          v34.m21 = v15 - _mm_shuffle_ps(v16, v16, 170).m128_f32[0];
          v34.dx = v32[0] - *(float *)&v33;
          v34.dy = v32[1] - *((float *)&v33 + 1);
          CExpressionValue::SetMatrix3x2Value((CExpressionValue *)v5, &v34);
        }
        else
        {
          if ( LODWORD(v7) != 265 )
          {
            v31 = 1482;
            goto LABEL_12;
          }
          CExpressionValue::GetMatrix4x4Value((CExpressionValue *)v6);
          Matrix4x4Value = (float *)CExpressionValue::GetMatrix4x4Value((CExpressionValue *)v5);
          v10 = D2DMatrix::operator-(Matrix4x4Value, (D2DMatrix *)v35, v9);
          CExpressionValue::SetMatrix4x4Value((CExpressionValue *)v5, v10);
        }
LABEL_22:
        --*((_DWORD *)this + 4);
        return v2;
      }
      v19 = v6 + 2;
      v20 = (char *)(v5 + 2) - (char *)v19;
      v21 = (char *)((char *)&v34 - (char *)v19);
      v22 = 4LL;
      do
      {
        *(float *)((char *)v19 + (_QWORD)v21) = *(float *)((char *)v19 + v20) - *v19;
        ++v19;
        --v22;
      }
      while ( v22 );
      CExpressionValue::SetDataType(v5);
      *(_OWORD *)(v5 + 2) = *(_OWORD *)&v34.m11;
    }
    *((_BYTE *)v5 + 4) = 1;
    goto LABEL_22;
  }
  v31 = 1404;
LABEL_12:
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v31);
  return v2;
}
