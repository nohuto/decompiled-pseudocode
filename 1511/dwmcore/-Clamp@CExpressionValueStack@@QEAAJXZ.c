/*
 * XREFs of ?Clamp@CExpressionValueStack@@QEAAJXZ @ 0x180119DD0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Clamp(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // edi
  __int64 v4; // rdx
  float *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r8
  float v8; // eax
  float v9; // xmm1_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  __m128 v14; // xmm7
  __m128 v15; // xmm6
  __m128 v16; // xmm7
  __m128 v17; // xmm6
  float v18; // xmm6_4
  unsigned int v20; // [rsp+20h] [rbp-60h]
  __m128 v21; // [rsp+30h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-50h]
  __int128 v23; // [rsp+40h] [rbp-40h]
  __int64 v24; // [rsp+40h] [rbp-40h]
  __m128i v25; // [rsp+50h] [rbp-30h]
  __int128 v26; // [rsp+50h] [rbp-30h]
  __int64 v27; // [rsp+50h] [rbp-30h]
  __int64 v28; // [rsp+A0h] [rbp+20h]
  __int64 v29; // [rsp+A8h] [rbp+28h]
  __int64 v30; // [rsp+B0h] [rbp+30h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 3 )
  {
    v20 = 3078;
LABEL_56:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v20);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = (float *)(v4 + 24LL * (v1 - 3));
  v6 = 3LL * (v1 - 2);
  v7 = 3LL * (v1 - 1);
  v8 = *v5;
  if ( *(_DWORD *)v5 != *(_DWORD *)(v4 + 8 * v6) || LODWORD(v8) != *(_DWORD *)(v4 + 8 * v7) )
  {
    v20 = 3104;
    goto LABEL_56;
  }
  switch ( LODWORD(v8) )
  {
    case 0x12:
      v18 = v5[2];
      if ( v18 <= *(float *)(v4 + 8 * v6 + 8) )
        v18 = *(float *)(v4 + 8 * v6 + 8);
      if ( *(float *)(v4 + 8 * v7 + 8) <= v18 )
        v18 = *(float *)(v4 + 8 * v7 + 8);
      CExpressionValue::SetDataType(v5);
      v5[2] = v18;
      break;
    case 0x23:
      v29 = *((_QWORD *)v5 + 1);
      v16 = (__m128)HIDWORD(v29);
      v28 = *(_QWORD *)(v4 + 8 * v6 + 8);
      v30 = *(_QWORD *)(v4 + 8 * v7 + 8);
      if ( *((float *)&v29 + 1) <= *((float *)&v28 + 1) )
        v16 = (__m128)HIDWORD(v28);
      if ( *((float *)&v30 + 1) <= v16.m128_f32[0] )
        v16 = (__m128)HIDWORD(v30);
      v17 = (__m128)(unsigned int)v29;
      if ( *(float *)&v29 <= *(float *)&v28 )
        v17 = (__m128)(unsigned int)v28;
      if ( *(float *)&v30 <= v17.m128_f32[0] )
        v17 = (__m128)(unsigned int)v30;
      CExpressionValue::SetDataType(v5);
      *((_QWORD *)v5 + 1) = _mm_unpacklo_ps(v17, v16).m128_u64[0];
      break;
    case 0x34:
      v13 = v5[4];
      v24 = *((_QWORD *)v5 + 1);
      v22 = *(_QWORD *)(v4 + 8 * v6 + 8);
      v27 = *(_QWORD *)(v4 + 8 * v7 + 8);
      if ( v13 <= *(float *)(v4 + 8 * v6 + 16) )
        v13 = *(float *)(v4 + 8 * v6 + 16);
      if ( *(float *)(v4 + 8 * v7 + 16) <= v13 )
        v13 = *(float *)(v4 + 8 * v7 + 16);
      v14 = (__m128)HIDWORD(v24);
      if ( *((float *)&v24 + 1) <= *((float *)&v22 + 1) )
        v14 = (__m128)HIDWORD(v22);
      if ( *((float *)&v27 + 1) <= v14.m128_f32[0] )
        v14 = (__m128)HIDWORD(v27);
      v15 = (__m128)(unsigned int)v24;
      if ( *(float *)&v24 <= *(float *)&v22 )
        v15 = (__m128)(unsigned int)v22;
      if ( *(float *)&v27 <= v15.m128_f32[0] )
        v15 = (__m128)(unsigned int)v27;
      CExpressionValue::SetDataType(v5);
      *((_QWORD *)v5 + 1) = _mm_unpacklo_ps(v15, v14).m128_u64[0];
      v5[4] = v13;
      break;
    case 0x45:
      v21 = (__m128)_mm_loadu_si128((const __m128i *)(v5 + 2));
      v25 = _mm_loadu_si128((const __m128i *)(v4 + 8 * v6 + 8));
      v9 = _mm_shuffle_ps(v21, v21, 255).m128_f32[0];
      v23 = *(_OWORD *)(v4 + 8 * v7 + 8);
      if ( v9 <= *(float *)(v4 + 8 * v6 + 20) )
        v9 = *(float *)(v4 + 8 * v6 + 20);
      if ( *((float *)&v23 + 3) <= v9 )
        LODWORD(v9) = HIDWORD(*(_OWORD *)(v4 + 8 * v7 + 8));
      v10 = v21.m128_f32[2];
      if ( v21.m128_f32[2] <= *(float *)&v25.m128i_i32[2] )
        v10 = *(float *)&v25.m128i_i32[2];
      if ( *((float *)&v23 + 2) <= v10 )
        LODWORD(v10) = *(_QWORD *)(v4 + 8 * v7 + 16);
      v11 = v21.m128_f32[1];
      if ( v21.m128_f32[1] <= *(float *)&v25.m128i_i32[1] )
        v11 = *(float *)&v25.m128i_i32[1];
      if ( *((float *)&v23 + 1) <= v11 )
        LODWORD(v11) = HIDWORD(*(_QWORD *)(v4 + 8 * v7 + 8));
      v12 = v21.m128_f32[0];
      if ( v21.m128_f32[0] <= *(float *)v25.m128i_i32 )
        v12 = *(float *)v25.m128i_i32;
      if ( *(float *)&v23 <= v12 )
        LODWORD(v12) = *(_OWORD *)(v4 + 8 * v7 + 8);
      *(_QWORD *)&v26 = __PAIR64__(LODWORD(v11), LODWORD(v12));
      *((_QWORD *)&v26 + 1) = __PAIR64__(LODWORD(v9), LODWORD(v10));
      CExpressionValue::SetDataType(v5);
      *(_OWORD *)(v5 + 2) = v26;
      break;
    default:
      v20 = 3167;
      goto LABEL_56;
  }
  *((_BYTE *)v5 + 4) = 1;
  *((_DWORD *)this + 4) -= 2;
  return v2;
}
