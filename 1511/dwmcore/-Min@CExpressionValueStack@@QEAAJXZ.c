/*
 * XREFs of ?Min@CExpressionValueStack@@QEAAJXZ @ 0x18011CBFC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Min(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // esi
  __int64 v4; // rdx
  float *v5; // rbx
  __int64 v6; // r8
  float v7; // eax
  float v8; // xmm1_4
  __int32 v9; // xmm3_4
  __int32 v10; // xmm2_4
  __int32 v11; // xmm0_4
  float v12; // xmm1_4
  __m128 v13; // xmm7
  __m128 v14; // xmm6
  __int64 v15; // xmm1_8
  __m128 v16; // xmm7
  __m128 v17; // xmm6
  float v18; // xmm6_4
  unsigned int v20; // [rsp+20h] [rbp-50h]
  __m128 v21; // [rsp+30h] [rbp-40h]
  __int64 v22; // [rsp+30h] [rbp-40h]
  __m128i v23; // [rsp+40h] [rbp-30h]
  __int128 v24; // [rsp+40h] [rbp-30h]
  __int64 v25; // [rsp+40h] [rbp-30h]
  __int64 v26; // [rsp+98h] [rbp+28h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = (float *)(v4 + 24LL * (v1 - 2));
    v6 = 3LL * (v1 - 1);
    v7 = *v5;
    if ( *(_DWORD *)v5 == *(_DWORD *)(v4 + 8 * v6) )
    {
      switch ( LODWORD(v7) )
      {
        case 0x12:
          v18 = v5[2];
          if ( *(float *)(v4 + 8 * v6 + 8) <= v18 )
            v18 = *(float *)(v4 + 8 * v6 + 8);
          CExpressionValue::SetDataType(v5);
          v5[2] = v18;
          break;
        case 0x23:
          v15 = *(_QWORD *)(v4 + 8 * v6 + 8);
          v26 = *((_QWORD *)v5 + 1);
          v16 = (__m128)HIDWORD(v26);
          if ( *((float *)&v15 + 1) <= *((float *)&v26 + 1) )
            v16 = (__m128)HIDWORD(v15);
          v17 = (__m128)(unsigned int)v26;
          if ( *(float *)&v15 <= *(float *)&v26 )
            v17 = (__m128)(unsigned int)v15;
          CExpressionValue::SetDataType(v5);
          *((_QWORD *)v5 + 1) = _mm_unpacklo_ps(v17, v16).m128_u64[0];
          break;
        case 0x34:
          v25 = *((_QWORD *)v5 + 1);
          v12 = v5[4];
          v22 = *(_QWORD *)(v4 + 8 * v6 + 8);
          if ( *(float *)(v4 + 8 * v6 + 16) <= v12 )
            v12 = *(float *)(v4 + 8 * v6 + 16);
          v13 = (__m128)HIDWORD(v25);
          if ( *((float *)&v22 + 1) <= *((float *)&v25 + 1) )
            v13 = (__m128)HIDWORD(v22);
          v14 = (__m128)(unsigned int)v25;
          if ( *(float *)&v22 <= *(float *)&v25 )
            v14 = (__m128)(unsigned int)v22;
          CExpressionValue::SetDataType(v5);
          *((_QWORD *)v5 + 1) = _mm_unpacklo_ps(v14, v13).m128_u64[0];
          v5[4] = v12;
          break;
        case 0x45:
          v21 = (__m128)_mm_loadu_si128((const __m128i *)(v5 + 2));
          v23 = _mm_loadu_si128((const __m128i *)(v4 + 8 * v6 + 8));
          v8 = _mm_shuffle_ps(v21, v21, 255).m128_f32[0];
          if ( *(float *)(v4 + 8 * v6 + 20) <= v8 )
            v8 = *(float *)(v4 + 8 * v6 + 20);
          v9 = v21.m128_i32[2];
          if ( *(float *)&v23.m128i_i32[2] <= v21.m128_f32[2] )
            v9 = v23.m128i_i32[2];
          v10 = v21.m128_i32[1];
          if ( *(float *)&v23.m128i_i32[1] <= v21.m128_f32[1] )
            v10 = v23.m128i_i32[1];
          v11 = v21.m128_i32[0];
          if ( *(float *)v23.m128i_i32 <= v21.m128_f32[0] )
            v11 = v23.m128i_i32[0];
          *(_QWORD *)&v24 = __PAIR64__(v10, v11);
          *((_QWORD *)&v24 + 1) = __PAIR64__(LODWORD(v8), v9);
          CExpressionValue::SetDataType(v5);
          *(_OWORD *)(v5 + 2) = v24;
          break;
        default:
          v20 = 2919;
          goto LABEL_10;
      }
      *((_BYTE *)v5 + 4) = 1;
      --*((_DWORD *)this + 4);
      return v2;
    }
    v20 = 2863;
  }
  else
  {
    v20 = 2839;
  }
LABEL_10:
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v20);
  return v2;
}
