/*
 * XREFs of ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x180101420
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x1801213A8 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z @ 0x180121560 (-SetMatrix4x4Value@CExpressionValue@@QEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Multiply(CExpressionValueStack *this)
{
  unsigned int v1; // edi
  struct CExpressionValue *v3; // rbx
  float *v4; // rax
  int v5; // ecx
  float *v6; // rdx
  const struct D2DMatrix *Matrix4x4Value; // rax
  const struct D2DMatrix *v8; // r8
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int128 v11; // xmm0
  float v12; // eax
  __m128 v13; // xmm7
  __m128 v14; // xmm6
  int v15; // eax
  __int64 v16; // xmm0_8
  __m128 v17; // xmm7
  __m128 v18; // xmm6
  float v19; // xmm6_4
  float v20; // xmm7_4
  unsigned int v22; // [rsp+28h] [rbp-59h]
  __int128 v23; // [rsp+38h] [rbp-49h]
  __int128 v24; // [rsp+48h] [rbp-39h]
  __int128 v25; // [rsp+58h] [rbp-29h]
  _BYTE v26[64]; // [rsp+68h] [rbp-19h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) >= 2u )
  {
    v3 = CExpressionValueStack::PeekStackValue(this, -1);
    v4 = (float *)CExpressionValueStack::PeekStackValue(this, 0);
    v5 = *(_DWORD *)v3;
    v6 = v4;
    if ( *(_DWORD *)v3 != *(_DWORD *)v4 )
    {
      v22 = 1371;
      goto LABEL_11;
    }
    switch ( v5 )
    {
      case 17:
        v19 = *((float *)v3 + 2);
        v20 = v4[2];
        CExpressionValue::SetDataType(v3);
        *((float *)v3 + 2) = v20 * v19;
        break;
      case 34:
        v16 = *((_QWORD *)v3 + 1);
        *(_QWORD *)&v24 = *((_QWORD *)v4 + 1);
        v17 = (__m128)(unsigned int)v24;
        v18 = (__m128)DWORD1(v24);
        *(_QWORD *)&v23 = v16;
        v17.m128_f32[0] = *(float *)&v24 * *(float *)&v16;
        v18.m128_f32[0] = *((float *)&v24 + 1) * *((float *)&v16 + 1);
        CExpressionValue::SetDataType(v3);
        *((_QWORD *)v3 + 1) = _mm_unpacklo_ps(v17, v18).m128_u64[0];
        break;
      case 51:
        v12 = *((float *)v3 + 4);
        *(_QWORD *)&v24 = *((_QWORD *)v3 + 1);
        *(_QWORD *)&v23 = *((_QWORD *)v6 + 1);
        v13 = (__m128)(unsigned int)v23;
        v14 = (__m128)DWORD1(v23);
        v13.m128_f32[0] = *(float *)&v23 * *(float *)&v24;
        *((float *)&v24 + 2) = v12;
        v14.m128_f32[0] = *((float *)&v23 + 1) * *((float *)&v24 + 1);
        *((float *)&v23 + 2) = v6[4] * v12;
        CExpressionValue::SetDataType(v3);
        v15 = DWORD2(v23);
        *((_QWORD *)v3 + 1) = _mm_unpacklo_ps(v13, v14).m128_u64[0];
        *((_DWORD *)v3 + 4) = v15;
        break;
      case 68:
        v9 = *(_OWORD *)(v4 + 2);
        v10 = 0LL;
        v11 = *(_OWORD *)((char *)v3 + 8);
        v23 = v9;
        v24 = v11;
        do
        {
          *(float *)&v26[v10 - 16] = *(float *)((char *)&v23 + v10) * *(float *)((char *)&v24 + v10);
          v10 += 4LL;
        }
        while ( v10 < 16 );
        CExpressionValue::SetDataType(v3);
        *(_OWORD *)((char *)v3 + 8) = v25;
        break;
      case 262:
        CExpressionValue::GetMatrix4x4Value((CExpressionValue *)v4);
        Matrix4x4Value = CExpressionValue::GetMatrix4x4Value(v3);
        D2DMatrixMultiply((struct D2DMatrix *)v26, Matrix4x4Value, v8);
        CExpressionValue::SetMatrix4x4Value(v3, (const struct D2DMatrix *)v26);
LABEL_20:
        --*((_DWORD *)this + 4);
        return v1;
      default:
        v22 = 1430;
        goto LABEL_11;
    }
    *((_BYTE *)v3 + 4) = 1;
    goto LABEL_20;
  }
  v22 = 1347;
LABEL_11:
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v22);
  return v1;
}
