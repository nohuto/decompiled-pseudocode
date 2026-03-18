/*
 * XREFs of ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x18001A6CC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x1800C2508 (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 *     ?D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x180188398 (-D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Divide(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  CExpressionValueStack *v2; // r10
  const __m128i *v3; // rax
  __m128i *v4; // r9
  __int64 v5; // r10
  int v6; // ecx
  const __m128i *v7; // rdx
  float v8; // xmm0_4
  __m128i v10; // xmm0
  __int64 i; // rax
  __int32 v12; // eax
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  __m128 v16; // xmm2
  __m128 v17; // xmm1
  float v18; // xmm1_4
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  unsigned int v21; // [rsp+20h] [rbp-40h]
  __m128i v22; // [rsp+30h] [rbp-30h] BYREF
  __m128i v23; // [rsp+40h] [rbp-20h] BYREF
  __m128i v24; // [rsp+50h] [rbp-10h] BYREF
  __int64 v25; // [rsp+70h] [rbp+10h]
  __int64 v26; // [rsp+78h] [rbp+18h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) < 2u )
  {
    v21 = 1296;
    goto LABEL_10;
  }
  CExpressionValueStack::PeekStackValue(this, -1);
  v3 = (const __m128i *)CExpressionValueStack::PeekStackValue(v2, 0);
  v6 = v4[4].m128i_i32[0];
  v7 = v3;
  if ( v6 != v3[4].m128i_i32[0] )
  {
    v21 = 1320;
    goto LABEL_10;
  }
  if ( v6 != 18 )
  {
    if ( v6 == 35 )
    {
      v26 = v4->m128i_i64[0];
      v25 = v3->m128i_i64[0];
      v18 = COERCE_FLOAT(v3->m128i_i64[0]);
      if ( v18 != 0.0 && *((float *)&v25 + 1) != 0.0 )
      {
        v19 = (__m128)(unsigned int)v26;
        v19.m128_f32[0] = *(float *)&v26 / v18;
        v4[4].m128i_i32[0] = 35;
        v20 = (__m128)HIDWORD(v26);
        v20.m128_f32[0] = *((float *)&v26 + 1) / *((float *)&v25 + 1);
        v4->m128i_i64[0] = _mm_unpacklo_ps(v19, v20).m128_u64[0];
        goto LABEL_6;
      }
      v21 = 1352;
    }
    else
    {
      if ( v6 != 52 )
      {
        if ( v6 == 69 )
        {
          v24 = *v4;
          v23 = _mm_loadu_si128(v3);
          if ( *(float *)v23.m128i_i32 == 0.0
            || *(float *)&v23.m128i_i32[1] == 0.0
            || *(float *)&v23.m128i_i32[2] == 0.0
            || *(float *)&v23.m128i_i32[3] == 0.0 )
          {
            v21 = 1396;
            goto LABEL_10;
          }
          for ( i = 0LL; i < 4; ++i )
            *(float *)&v22.m128i_i32[i] = *(float *)&v24.m128i_i32[i] / *(float *)&v23.m128i_i32[i];
          v10 = v22;
          v4[4].m128i_i32[0] = 69;
        }
        else
        {
          if ( v6 != 71 )
          {
            v21 = 1448;
            goto LABEL_10;
          }
          v22 = *v4;
          v23 = _mm_loadu_si128(v3);
          if ( *(float *)v23.m128i_i32 == 0.0
            || *(float *)&v23.m128i_i32[1] == 0.0
            || *(float *)&v23.m128i_i32[2] == 0.0
            || *(float *)&v23.m128i_i32[3] == 0.0 )
          {
            v21 = 1420;
            goto LABEL_10;
          }
          D3DXQuaternionInverse((struct D2DQuaternion *)&v24, (const struct D2DQuaternion *)&v23);
          D3DXQuaternionMultiply(
            (struct D2DQuaternion *)&v23,
            (const struct D2DQuaternion *)&v24,
            (const struct D2DQuaternion *)&v22);
          v10 = v23;
          v4[4].m128i_i32[0] = 71;
        }
        *v4 = v10;
        goto LABEL_6;
      }
      v12 = v4->m128i_i32[2];
      v23.m128i_i64[0] = v4->m128i_i64[0];
      v22.m128i_i64[0] = v7->m128i_i64[0];
      v23.m128i_i32[2] = v12;
      v22.m128i_i32[2] = v7->m128i_i32[2];
      if ( *(float *)v22.m128i_i32 != 0.0 )
      {
        v13 = *(float *)&v22.m128i_i32[1];
        if ( *(float *)&v22.m128i_i32[1] != 0.0 )
        {
          v14 = *(float *)&v22.m128i_i32[2];
          if ( *(float *)&v22.m128i_i32[2] != 0.0 )
          {
            v15 = *(float *)&v23.m128i_i32[2];
            v16 = (__m128)v23.m128i_u32[0];
            v16.m128_f32[0] = *(float *)v23.m128i_i32 / *(float *)v22.m128i_i32;
            v4[4].m128i_i32[0] = 52;
            v17 = (__m128)v23.m128i_u32[1];
            v17.m128_f32[0] = *(float *)&v23.m128i_i32[1] / v13;
            *(float *)&v23.m128i_i32[2] = v15 / v14;
            v4->m128i_i64[0] = _mm_unpacklo_ps(v16, v17).m128_u64[0];
            *(float *)&v4->m128i_i32[2] = v15 / v14;
            goto LABEL_6;
          }
        }
      }
      v21 = 1373;
    }
LABEL_10:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v21);
    return v1;
  }
  if ( *(float *)v3->m128i_i32 == 0.0 )
  {
    v21 = 1333;
    goto LABEL_10;
  }
  v8 = *(float *)v4->m128i_i32 / *(float *)v3->m128i_i32;
  v4[4].m128i_i32[0] = 18;
  *(float *)v4->m128i_i32 = v8;
LABEL_6:
  v4[4].m128i_i8[4] = 1;
  --*(_DWORD *)(v5 + 16);
  return v1;
}
