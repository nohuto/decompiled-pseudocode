/*
 * XREFs of ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x18011CF40
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x1800BF03C (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x18011E968 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x180136B74 (-GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x180136BC0 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180136D40 (-SetMatrix3x2Value@CExpressionValue@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180136E0C (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Multiply(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  __int64 v2; // rbx
  unsigned int v4; // esi
  __int64 v5; // rdx
  float *v6; // rdi
  float *v7; // rcx
  float v8; // eax
  const struct D2DMatrix *Matrix4x4Value; // rax
  const struct D2DMatrix *v10; // r8
  const struct D2D_MATRIX_3X2_F *Matrix3x2Value; // rax
  float m22; // xmm2_4
  float m21; // xmm3_4
  __m128 dx_low; // xmm4
  float *v15; // rdx
  float v16; // xmm0_4
  FLOAT v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  FLOAT v21; // xmm3_4
  __m128 v22; // xmm2
  float dy; // xmm0_4
  CExpressionValue *v24; // rcx
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  float v27; // eax
  __m128 v28; // xmm7
  __m128 v29; // xmm6
  int v30; // eax
  __int64 v31; // xmm0_8
  __m128 v32; // xmm7
  __m128 v33; // xmm6
  float v34; // xmm7_4
  float v35; // xmm6_4
  int v36; // eax
  __int128 v38; // [rsp+38h] [rbp-69h] BYREF
  __int128 v39; // [rsp+48h] [rbp-59h]
  struct D2D_MATRIX_3X2_F v40; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v41[64]; // [rsp+78h] [rbp-29h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0LL;
  v4 = 0;
  if ( v1 < 2 )
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x5F1u);
    return v4;
  }
  v5 = *((_QWORD *)this + 3);
  v6 = (float *)(v5 + 24LL * (v1 - 2));
  v7 = (float *)(v5 + 24LL * (v1 - 1));
  v8 = *v6;
  if ( *(_DWORD *)v6 == *(_DWORD *)v7 )
  {
    if ( LODWORD(v8) == 18 )
    {
      v34 = v7[2];
      v35 = v6[2];
      CExpressionValue::SetDataType(v6);
      v6[2] = v34 * v35;
    }
    else if ( LODWORD(v8) == 35 )
    {
      v31 = *((_QWORD *)v6 + 1);
      *(_QWORD *)&v39 = *((_QWORD *)v7 + 1);
      v32 = (__m128)(unsigned int)v39;
      v33 = (__m128)DWORD1(v39);
      *(_QWORD *)&v38 = v31;
      v32.m128_f32[0] = *(float *)&v39 * *(float *)&v31;
      v33.m128_f32[0] = *((float *)&v39 + 1) * *((float *)&v31 + 1);
      CExpressionValue::SetDataType(v6);
      *((_QWORD *)v6 + 1) = _mm_unpacklo_ps(v32, v33).m128_u64[0];
    }
    else if ( LODWORD(v8) == 52 )
    {
      v27 = v6[4];
      *(_QWORD *)&v39 = *((_QWORD *)v6 + 1);
      *(_QWORD *)&v38 = *((_QWORD *)v7 + 1);
      v28 = (__m128)(unsigned int)v38;
      v29 = (__m128)DWORD1(v38);
      v28.m128_f32[0] = *(float *)&v38 * *(float *)&v39;
      *((float *)&v39 + 2) = v27;
      v29.m128_f32[0] = *((float *)&v38 + 1) * *((float *)&v39 + 1);
      *((float *)&v38 + 2) = v7[4] * v27;
      CExpressionValue::SetDataType(v6);
      v30 = DWORD2(v38);
      *((_QWORD *)v6 + 1) = _mm_unpacklo_ps(v28, v29).m128_u64[0];
      *((_DWORD *)v6 + 4) = v30;
    }
    else
    {
      if ( LODWORD(v8) == 69 )
      {
        v26 = *(_OWORD *)(v7 + 2);
        v39 = *(_OWORD *)(v6 + 2);
        v38 = v26;
        do
        {
          *(float *)((char *)&v40.m11 + v2) = *(float *)((char *)&v38 + v2) * *(float *)((char *)&v39 + v2);
          v2 += 4LL;
        }
        while ( v2 < 16 );
        CExpressionValue::SetDataType(v6);
        v25 = *(_OWORD *)&v40.m11;
      }
      else
      {
        if ( LODWORD(v8) != 71 )
        {
          if ( LODWORD(v8) == 104 )
          {
            CExpressionValue::GetMatrix3x2Value((CExpressionValue *)v7);
            Matrix3x2Value = CExpressionValue::GetMatrix3x2Value((CExpressionValue *)v6);
            m22 = Matrix3x2Value->m22;
            m21 = Matrix3x2Value->m21;
            dx_low = (__m128)LODWORD(Matrix3x2Value->dx);
            v16 = v15[3] * Matrix3x2Value->m12;
            v40.m11 = (float)(Matrix3x2Value->m11 * *v15) + (float)(v15[2] * Matrix3x2Value->m12);
            v17 = (float)(v15[1] * Matrix3x2Value->m11) + v16;
            v18 = m21 * *v15;
            v19 = m21 * v15[1];
            v40.m12 = v17;
            v20 = m22 * v15[2];
            v21 = v19 + (float)(m22 * v15[3]);
            v22 = dx_low;
            v22.m128_f32[0] = dx_low.m128_f32[0] * *v15;
            dx_low.m128_f32[0] = dx_low.m128_f32[0] * v15[1];
            v40.m21 = v20 + v18;
            dy = Matrix3x2Value->dy;
            v40.m22 = v21;
            dx_low.m128_f32[0] = (float)(dx_low.m128_f32[0] + (float)(dy * v15[3])) + v15[5];
            v22.m128_f32[0] = (float)(v22.m128_f32[0] + (float)(dy * v15[2])) + v15[4];
            *(_QWORD *)&v40.m[2][0] = _mm_unpacklo_ps(v22, dx_low).m128_u64[0];
            CExpressionValue::SetMatrix3x2Value(v24, &v40);
          }
          else
          {
            if ( LODWORD(v8) != 265 )
            {
              v4 = -2147467259;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x650u);
              return v4;
            }
            CExpressionValue::GetMatrix4x4Value((CExpressionValue *)v7);
            Matrix4x4Value = CExpressionValue::GetMatrix4x4Value((CExpressionValue *)v6);
            D2DMatrixMultiply((struct D2DMatrix *)v41, Matrix4x4Value, v10);
            CExpressionValue::SetMatrix4x4Value((CExpressionValue *)v6, (const struct D2DMatrix *)v41);
          }
LABEL_23:
          --*((_DWORD *)this + 4);
          return v4;
        }
        D3DXQuaternionMultiply(
          (struct D2DQuaternion *)&v38,
          (const struct D2DQuaternion *)(v7 + 2),
          (const struct D2DQuaternion *)(v6 + 2));
        CExpressionValue::SetDataType(v6);
        v25 = v38;
      }
      *(_OWORD *)(v6 + 2) = v25;
    }
    *((_BYTE *)v6 + 4) = 1;
    goto LABEL_23;
  }
  if ( *(_DWORD *)v7 == 18 || LODWORD(v8) == 18 )
  {
    v36 = CExpressionValueStack::Scale(this);
    v4 = v36;
    if ( v36 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x65Fu);
  }
  else
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x669u);
  }
  return v4;
}
