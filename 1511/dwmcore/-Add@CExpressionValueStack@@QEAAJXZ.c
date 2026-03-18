/*
 * XREFs of ?Add@CExpressionValueStack@@QEAAJXZ @ 0x180119820
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1800BEBCC (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 *     ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x180136B74 (-GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x180136BC0 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180136D40 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180136E0C (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Add(CExpressionValueStack *this)
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
  __m128 v15; // xmm3
  char *v16; // r8
  float *v17; // rax
  __int64 v18; // rdx
  __m128 v19; // xmm7
  __m128 v20; // xmm6
  FLOAT m21; // eax
  __m128 v22; // xmm7
  __m128 v23; // xmm6
  float v24; // xmm6_4
  float v25; // xmm7_4
  unsigned int v27; // [rsp+28h] [rbp-89h]
  float v28[6]; // [rsp+48h] [rbp-69h]
  __int64 v29; // [rsp+60h] [rbp-51h]
  struct D2D_MATRIX_3X2_F v30; // [rsp+68h] [rbp-49h] BYREF
  _BYTE v31[64]; // [rsp+88h] [rbp-29h] BYREF

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
      v27 = 1310;
      goto LABEL_12;
    }
    if ( LODWORD(v7) == 18 )
    {
      v24 = v5[2];
      v25 = v6[2];
      CExpressionValue::SetDataType(v5);
      v5[2] = v25 + v24;
    }
    else if ( LODWORD(v7) == 35 )
    {
      v22 = (__m128)*((unsigned int *)v5 + 2);
      v23 = (__m128)*((unsigned int *)v5 + 3);
      v22.m128_f32[0] = v22.m128_f32[0] + v6[2];
      v23.m128_f32[0] = v23.m128_f32[0] + v6[3];
      CExpressionValue::SetDataType(v5);
      *((_QWORD *)v5 + 1) = _mm_unpacklo_ps(v22, v23).m128_u64[0];
    }
    else if ( LODWORD(v7) == 52 )
    {
      v19 = (__m128)*((unsigned int *)v6 + 2);
      v20 = (__m128)*((unsigned int *)v5 + 3);
      v19.m128_f32[0] = v19.m128_f32[0] + v5[2];
      v20.m128_f32[0] = v20.m128_f32[0] + v6[3];
      v30.m21 = v5[4] + v6[4];
      CExpressionValue::SetDataType(v5);
      m21 = v30.m21;
      *((_QWORD *)v5 + 1) = _mm_unpacklo_ps(v19, v20).m128_u64[0];
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
          v29 = *(_QWORD *)&Matrix3x2Value->m[2][0];
          v14 = CExpressionValue::GetMatrix3x2Value(v13);
          v15 = *(__m128 *)&v14->m11;
          *(_QWORD *)v28 = *(_QWORD *)&v14->m[2][0];
          v30.m11 = COERCE_FLOAT(*(_OWORD *)&v14->m11) + v12.m128_f32[0];
          v30.m12 = _mm_shuffle_ps(v15, v15, 85).m128_f32[0] + _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
          v30.m21 = _mm_shuffle_ps(v15, v15, 170).m128_f32[0] + _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
          v30.m22 = _mm_shuffle_ps(v15, v15, 255).m128_f32[0] + _mm_shuffle_ps(v12, v12, 255).m128_f32[0];
          v30.dx = v28[0] + *(float *)&v29;
          v30.dy = v28[1] + *((float *)&v29 + 1);
          CExpressionValue::SetMatrix3x2Value((CExpressionValue *)v5, &v30);
        }
        else
        {
          if ( LODWORD(v7) != 265 )
          {
            v27 = 1365;
            goto LABEL_12;
          }
          CExpressionValue::GetMatrix4x4Value((CExpressionValue *)v6);
          Matrix4x4Value = (float *)CExpressionValue::GetMatrix4x4Value((CExpressionValue *)v5);
          v10 = D2DMatrix::operator+(Matrix4x4Value, (D2DMatrix *)v31, v9);
          CExpressionValue::SetMatrix4x4Value((CExpressionValue *)v5, v10);
        }
LABEL_22:
        --*((_DWORD *)this + 4);
        return v2;
      }
      v16 = (char *)((char *)v6 - (char *)v5);
      v17 = v5 + 2;
      v18 = 4LL;
      do
      {
        *(float *)((char *)v17 + (char *)&v30 - (char *)(v5 + 2)) = *(float *)((char *)v17 + (_QWORD)v16) + *v17;
        ++v17;
        --v18;
      }
      while ( v18 );
      CExpressionValue::SetDataType(v5);
      *(_OWORD *)(v5 + 2) = *(_OWORD *)&v30.m11;
    }
    *((_BYTE *)v5 + 4) = 1;
    goto LABEL_22;
  }
  v27 = 1281;
LABEL_12:
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v27);
  return v2;
}
