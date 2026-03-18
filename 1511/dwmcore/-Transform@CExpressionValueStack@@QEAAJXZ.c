/*
 * XREFs of ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x18011F638
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x180136B74 (-GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x180136BC0 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x180157E40 (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Transform(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rsi
  CExpressionValue *v6; // rcx
  const struct D2DMatrix *Matrix4x4Value; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  unsigned int v11; // edx
  unsigned int v12; // r9d
  __m128 *Matrix3x2Value; // rax
  __m128 v14; // xmm7
  __m128 v15; // xmm6
  float v16; // xmm2_4
  unsigned int v18; // [rsp+28h] [rbp-49h]
  unsigned int v19; // [rsp+30h] [rbp-41h]
  _OWORD v20[4]; // [rsp+38h] [rbp-39h] BYREF
  __int128 v21; // [rsp+78h] [rbp+7h] BYREF
  __int128 v22; // [rsp+88h] [rbp+17h] BYREF
  unsigned __int64 v23; // [rsp+98h] [rbp+27h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = v4 + 24LL * (v1 - 2);
    v6 = (CExpressionValue *)(v4 + 24LL * (v1 - 1));
    if ( *(_DWORD *)v5 == 35 )
    {
      if ( *(_DWORD *)v6 != 104 )
      {
        v18 = 3402;
        goto LABEL_10;
      }
      *(_QWORD *)&v21 = *(_QWORD *)(v5 + 8);
      Matrix3x2Value = (__m128 *)CExpressionValue::GetMatrix3x2Value(v6);
      v14 = *Matrix3x2Value;
      v15 = _mm_shuffle_ps(*Matrix3x2Value, *Matrix3x2Value, 85);
      v16 = Matrix3x2Value->m128_f32[3] * *((float *)&v21 + 1);
      v14.m128_f32[0] = (float)(COERCE_FLOAT(*Matrix3x2Value) * *(float *)&v21)
                      + (float)(Matrix3x2Value->m128_f32[2] * *((float *)&v21 + 1));
      v23 = Matrix3x2Value[1].m128_u64[0];
      v14.m128_f32[0] = v14.m128_f32[0] + *(float *)&v23;
      v15.m128_f32[0] = (float)((float)(v15.m128_f32[0] * *(float *)&v21) + v16) + *((float *)&v23 + 1);
      CExpressionValue::SetDataType(v5);
      *(_QWORD *)(v5 + 8) = _mm_unpacklo_ps(v14, v15).m128_u64[0];
    }
    else
    {
      if ( *(_DWORD *)v5 != 69 )
      {
LABEL_13:
        --*((_DWORD *)this + 4);
        return v2;
      }
      if ( *(_DWORD *)v6 != 265 )
      {
        v18 = 3371;
        goto LABEL_10;
      }
      v21 = *(_OWORD *)(v5 + 8);
      Matrix4x4Value = CExpressionValue::GetMatrix4x4Value(v6);
      v8 = *((_OWORD *)Matrix4x4Value + 1);
      v20[0] = *(_OWORD *)Matrix4x4Value;
      v9 = *((_OWORD *)Matrix4x4Value + 2);
      v20[1] = v8;
      v10 = *((_OWORD *)Matrix4x4Value + 3);
      v20[2] = v9;
      v20[3] = v10;
      D3DXVec4TransformArray(
        (struct D2DVector4 *)&v22,
        v11,
        (const struct D2DVector4 *)&v21,
        v12,
        (const struct D2DMatrix *)v20,
        v19);
      CExpressionValue::SetDataType(v5);
      *(_OWORD *)(v5 + 8) = v22;
    }
    *(_BYTE *)(v5 + 4) = 1;
    goto LABEL_13;
  }
  v18 = 3344;
LABEL_10:
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v18);
  return v2;
}
