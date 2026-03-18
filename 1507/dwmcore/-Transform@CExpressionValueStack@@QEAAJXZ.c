/*
 * XREFs of ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x180102A04
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x18012135C (-GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x1801213A8 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x180149900 (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Transform(CExpressionValueStack *this)
{
  unsigned int v1; // edi
  struct CExpressionValue *v3; // rsi
  struct CExpressionValue *v4; // rax
  const struct D2DMatrix *Matrix4x4Value; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  unsigned int v9; // edx
  unsigned int v10; // r9d
  __m128 *Matrix3x2Value; // rax
  __m128 v12; // xmm7
  __m128 v13; // xmm6
  float v14; // xmm2_4
  unsigned int v16; // [rsp+28h] [rbp-49h]
  unsigned int v17; // [rsp+30h] [rbp-41h]
  _OWORD v18[4]; // [rsp+38h] [rbp-39h] BYREF
  __int128 v19; // [rsp+78h] [rbp+7h] BYREF
  __int128 v20; // [rsp+88h] [rbp+17h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp+27h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) >= 2u )
  {
    v3 = CExpressionValueStack::PeekStackValue(this, -1);
    v4 = CExpressionValueStack::PeekStackValue(this, 0);
    if ( *(_DWORD *)v3 == 34 )
    {
      if ( *(_DWORD *)v4 != 101 )
      {
        v16 = 2167;
        goto LABEL_10;
      }
      *(_QWORD *)&v19 = *((_QWORD *)v3 + 1);
      Matrix3x2Value = (__m128 *)CExpressionValue::GetMatrix3x2Value(v4);
      v12 = *Matrix3x2Value;
      v13 = _mm_shuffle_ps(*Matrix3x2Value, *Matrix3x2Value, 85);
      v14 = Matrix3x2Value->m128_f32[3] * *((float *)&v19 + 1);
      v12.m128_f32[0] = (float)(COERCE_FLOAT(*Matrix3x2Value) * *(float *)&v19)
                      + (float)(Matrix3x2Value->m128_f32[2] * *((float *)&v19 + 1));
      v21 = Matrix3x2Value[1].m128_u64[0];
      v12.m128_f32[0] = v12.m128_f32[0] + *(float *)&v21;
      v13.m128_f32[0] = (float)((float)(v13.m128_f32[0] * *(float *)&v19) + v14) + *((float *)&v21 + 1);
      CExpressionValue::SetDataType(v3);
      *((_QWORD *)v3 + 1) = _mm_unpacklo_ps(v12, v13).m128_u64[0];
    }
    else
    {
      if ( *(_DWORD *)v3 != 68 )
      {
LABEL_13:
        --*((_DWORD *)this + 4);
        return v1;
      }
      if ( *(_DWORD *)v4 != 262 )
      {
        v16 = 2136;
        goto LABEL_10;
      }
      v19 = *(_OWORD *)((char *)v3 + 8);
      Matrix4x4Value = CExpressionValue::GetMatrix4x4Value(v4);
      v6 = *((_OWORD *)Matrix4x4Value + 1);
      v18[0] = *(_OWORD *)Matrix4x4Value;
      v7 = *((_OWORD *)Matrix4x4Value + 2);
      v18[1] = v6;
      v8 = *((_OWORD *)Matrix4x4Value + 3);
      v18[2] = v7;
      v18[3] = v8;
      D3DXVec4TransformArray(
        (struct D2DVector4 *)&v20,
        v9,
        (const struct D2DVector4 *)&v19,
        v10,
        (const struct D2DMatrix *)v18,
        v17);
      CExpressionValue::SetDataType(v3);
      *(_OWORD *)((char *)v3 + 8) = v20;
    }
    *((_BYTE *)v3 + 4) = 1;
    goto LABEL_13;
  }
  v16 = 2109;
LABEL_10:
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v16);
  return v1;
}
