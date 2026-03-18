/*
 * XREFs of ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x18011E968
 * Callers:
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x18011CF40 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ??DD2DMatrix@@QEBA?AU0@M@Z @ 0x1800BE700 (--DD2DMatrix@@QEBA-AU0@M@Z.c)
 *     ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x180136B74 (-GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x180136BC0 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180136D40 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180136E0C (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Scale(CExpressionValueStack *this)
{
  unsigned int v1; // r9d
  unsigned int v2; // edi
  __int64 v4; // rdx
  float *v5; // r8
  float *v6; // rbx
  float *v7; // r9
  float *v8; // rax
  float v9; // xmm2_4
  float *Matrix4x4Value; // rax
  D2DMatrix *v11; // rax
  const struct D2D_MATRIX_3X2_F *Matrix3x2Value; // rax
  __int64 v13; // r9
  float v14; // xmm3_4
  __m128 v15; // xmm2
  __int64 v16; // r8
  __int64 i; // rcx
  __m128 v18; // xmm7
  __m128 v19; // xmm6
  FLOAT v20; // xmm0_4
  __m128 v21; // xmm7
  __m128 v22; // xmm6
  float v23; // xmm6_4
  float v24; // xmm7_4
  unsigned int v26; // [rsp+28h] [rbp-59h]
  __int64 v27; // [rsp+48h] [rbp-39h]
  struct D2D_MATRIX_3X2_F v28; // [rsp+50h] [rbp-31h] BYREF
  _BYTE v29[64]; // [rsp+68h] [rbp-19h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = (float *)(v4 + 24LL * (v1 - 2));
    v6 = v5;
    v7 = (float *)(v4 + 24LL * (v1 - 1));
    if ( *(_DWORD *)v7 != 18 )
    {
      if ( *(_DWORD *)v5 != 18 )
      {
        v26 = 3242;
        goto LABEL_14;
      }
      v8 = v5;
      v5 = v7;
      v7 = v8;
    }
    if ( *(_DWORD *)v5 == 18 )
    {
      v23 = v5[2];
      v24 = v7[2];
      CExpressionValue::SetDataType(v6);
      v6[2] = v24 * v23;
    }
    else if ( *(_DWORD *)v5 == 35 )
    {
      v21 = (__m128)*((unsigned int *)v7 + 2);
      v22 = v21;
      v21.m128_f32[0] = v21.m128_f32[0] * v5[3];
      v22.m128_f32[0] = v22.m128_f32[0] * v5[2];
      CExpressionValue::SetDataType(v6);
      *((_QWORD *)v6 + 1) = _mm_unpacklo_ps(v22, v21).m128_u64[0];
    }
    else if ( *(_DWORD *)v5 == 52 )
    {
      v18 = (__m128)*((unsigned int *)v7 + 2);
      v19 = v18;
      v20 = v18.m128_f32[0] * v5[4];
      v18.m128_f32[0] = v18.m128_f32[0] * v5[2];
      v19.m128_f32[0] = v19.m128_f32[0] * v5[3];
      v28.m21 = v20;
      CExpressionValue::SetDataType(v6);
      *((_QWORD *)v6 + 1) = _mm_unpacklo_ps(v18, v19).m128_u64[0];
      v6[4] = v20;
    }
    else
    {
      if ( *(_DWORD *)v5 != 69 )
      {
        if ( *(_DWORD *)v5 == 104 )
        {
          Matrix3x2Value = CExpressionValue::GetMatrix3x2Value((CExpressionValue *)v5);
          v14 = *(float *)(v13 + 8);
          v15 = *(__m128 *)&Matrix3x2Value->m11;
          v27 = *(_QWORD *)&Matrix3x2Value->m[2][0];
          v28.m11 = COERCE_FLOAT(*(_OWORD *)&Matrix3x2Value->m11) * v14;
          v28.m12 = _mm_shuffle_ps(v15, v15, 85).m128_f32[0] * v14;
          v28.m21 = _mm_shuffle_ps(v15, v15, 170).m128_f32[0] * v14;
          v28.dx = *(float *)&v27 * v14;
          v28.m22 = _mm_shuffle_ps(v15, v15, 255).m128_f32[0] * v14;
          v28.dy = *((float *)&v27 + 1) * v14;
          CExpressionValue::SetMatrix3x2Value((CExpressionValue *)v6, &v28);
        }
        else
        {
          if ( *(_DWORD *)v5 != 265 )
          {
            v26 = 3305;
            goto LABEL_14;
          }
          v9 = v7[2];
          Matrix4x4Value = (float *)CExpressionValue::GetMatrix4x4Value((CExpressionValue *)v5);
          v11 = D2DMatrix::operator*(Matrix4x4Value, (D2DMatrix *)v29, v9);
          CExpressionValue::SetMatrix4x4Value((CExpressionValue *)v6, v11);
        }
LABEL_24:
        --*((_DWORD *)this + 4);
        return v2;
      }
      v16 = (char *)(v5 + 2) - (char *)&v28;
      for ( i = 0LL; i < 4; ++i )
        *(&v28.m11 + i) = v7[2] * *(float *)((char *)&v28.m11 + 4 * i + v16);
      CExpressionValue::SetDataType(v6);
      *(_OWORD *)(v6 + 2) = *(_OWORD *)&v28.m11;
    }
    *((_BYTE *)v6 + 4) = 1;
    goto LABEL_24;
  }
  v26 = 3207;
LABEL_14:
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v26);
  return v2;
}
