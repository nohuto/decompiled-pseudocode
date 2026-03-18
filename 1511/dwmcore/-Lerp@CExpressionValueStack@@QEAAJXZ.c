/*
 * XREFs of ?Lerp@CExpressionValueStack@@QEAAJXZ @ 0x18011BE34
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Lerp(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // edi
  __int64 v4; // rdx
  float *v5; // rbx
  float v6; // ecx
  float v7; // xmm8_4
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm1
  int v11; // eax
  __m128 v12; // xmm7
  __m128 v13; // xmm6
  int v14; // eax
  __m128 v15; // xmm7
  __m128 v16; // xmm6
  float v17; // xmm7_4
  float v18; // xmm6_4
  unsigned int v20; // [rsp+28h] [rbp-29h]
  __int128 v21; // [rsp+38h] [rbp-19h]
  __int128 v22; // [rsp+48h] [rbp-9h]
  __int128 v23; // [rsp+58h] [rbp+7h]
  __int64 v24; // [rsp+B8h] [rbp+67h]
  __int64 v25; // [rsp+C0h] [rbp+6Fh]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 3 )
  {
    v20 = 3556;
LABEL_18:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v20);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = (float *)(v4 + 24LL * (v1 - 3));
  v6 = *v5;
  v7 = *(float *)(v4 + 24LL * (v1 - 1) + 8);
  if ( *(_DWORD *)(v4 + 24LL * (v1 - 1)) != 18 || LODWORD(v6) != *(_DWORD *)(v4 + 24LL * (v1 - 2)) )
  {
    v20 = 3583;
    goto LABEL_18;
  }
  switch ( LODWORD(v6) )
  {
    case 0x12:
      v17 = *(float *)(v4 + 24LL * (v1 - 2) + 8);
      v18 = v5[2];
      CExpressionValue::SetDataType(v4 + 24LL * (v1 - 3));
      v5[2] = (float)((float)(v17 - v18) * v7) + v18;
      break;
    case 0x23:
      v24 = *((_QWORD *)v5 + 1);
      v25 = *(_QWORD *)(v4 + 24LL * (v1 - 2) + 8);
      v15 = (__m128)(unsigned int)v25;
      v16 = (__m128)HIDWORD(v25);
      v15.m128_f32[0] = (float)((float)(*(float *)&v25 - *(float *)&v24) * v7) + *(float *)&v24;
      v16.m128_f32[0] = (float)((float)(*((float *)&v25 + 1) - *((float *)&v24 + 1)) * v7) + *((float *)&v24 + 1);
      CExpressionValue::SetDataType(v4 + 24LL * (v1 - 3));
      *((_QWORD *)v5 + 1) = _mm_unpacklo_ps(v15, v16).m128_u64[0];
      break;
    case 0x34:
      v11 = *((_DWORD *)v5 + 4);
      *(_QWORD *)&v21 = *((_QWORD *)v5 + 1);
      *(_QWORD *)&v22 = *(_QWORD *)(v4 + 24LL * (v1 - 2) + 8);
      v12 = (__m128)(unsigned int)v22;
      v13 = (__m128)DWORD1(v22);
      DWORD2(v21) = v11;
      v12.m128_f32[0] = (float)((float)(*(float *)&v22 - *(float *)&v21) * v7) + *(float *)&v21;
      v13.m128_f32[0] = (float)((float)(*((float *)&v22 + 1) - *((float *)&v21 + 1)) * v7) + *((float *)&v21 + 1);
      *((float *)&v22 + 2) = (float)((float)(*(float *)(v4 + 24LL * (v1 - 2) + 16) - *((float *)&v21 + 2)) * v7)
                           + *((float *)&v21 + 2);
      CExpressionValue::SetDataType(v4 + 24LL * (v1 - 3));
      v14 = DWORD2(v22);
      *((_QWORD *)v5 + 1) = _mm_unpacklo_ps(v12, v13).m128_u64[0];
      *((_DWORD *)v5 + 4) = v14;
      break;
    case 0x45:
      v8 = 0LL;
      v9 = 4LL;
      v10 = *(_OWORD *)(v4 + 24LL * (v1 - 2) + 8);
      v22 = *(_OWORD *)(v5 + 2);
      v21 = v10;
      do
      {
        *(float *)((char *)&v23 + v8) = (float)((float)(*(float *)((char *)&v21 + v8) - *(float *)((char *)&v22 + v8))
                                              * v7)
                                      + *(float *)((char *)&v22 + v8);
        v8 += 4LL;
        --v9;
      }
      while ( v9 );
      CExpressionValue::SetDataType(v5);
      *(_OWORD *)(v5 + 2) = v23;
      break;
    default:
      v20 = 3645;
      goto LABEL_18;
  }
  *((_BYTE *)v5 + 4) = 1;
  *((_DWORD *)this + 4) -= 2;
  return v2;
}
