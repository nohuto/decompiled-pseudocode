/*
 * XREFs of ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x18011B100
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x1800BF03C (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18015764C (-D3DXQuaternionInverse@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Divide(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // edi
  __int64 v4; // rdx
  float *v5; // rbx
  __int64 v6; // r8
  float v7; // eax
  __m128i v8; // xmm0
  __int64 i; // rax
  __int32 v10; // eax
  __m128 v11; // xmm7
  __m128 v12; // xmm6
  __int32 v13; // eax
  __m128 v14; // xmm7
  __m128 v15; // xmm6
  float v16; // xmm7_4
  float v17; // xmm6_4
  unsigned int v19; // [rsp+20h] [rbp-60h]
  __m128i v20; // [rsp+30h] [rbp-50h] BYREF
  __m128i v21; // [rsp+40h] [rbp-40h] BYREF
  __int128 v22; // [rsp+50h] [rbp-30h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+20h]
  __int64 v24; // [rsp+A8h] [rbp+28h]

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
      if ( LODWORD(v7) == 18 )
      {
        v16 = *(float *)(v4 + 8 * v6 + 8);
        if ( v16 == 0.0 )
        {
          v19 = 1713;
          goto LABEL_11;
        }
        v17 = v5[2];
        CExpressionValue::SetDataType(v5);
        v5[2] = v17 / v16;
      }
      else if ( LODWORD(v7) == 35 )
      {
        v24 = *((_QWORD *)v5 + 1);
        v23 = *(_QWORD *)(v4 + 8 * v6 + 8);
        if ( *(float *)&v23 == 0.0 || *((float *)&v23 + 1) == 0.0 )
        {
          v19 = 1732;
          goto LABEL_11;
        }
        v14 = (__m128)(unsigned int)v24;
        v15 = (__m128)HIDWORD(v24);
        v14.m128_f32[0] = *(float *)&v24 / COERCE_FLOAT(*(_QWORD *)(v4 + 8 * v6 + 8));
        v15.m128_f32[0] = *((float *)&v24 + 1) / *((float *)&v23 + 1);
        CExpressionValue::SetDataType(v5);
        *((_QWORD *)v5 + 1) = _mm_unpacklo_ps(v14, v15).m128_u64[0];
      }
      else if ( LODWORD(v7) == 52 )
      {
        v10 = *((_DWORD *)v5 + 4);
        v21.m128i_i64[0] = *((_QWORD *)v5 + 1);
        v20.m128i_i64[0] = *(_QWORD *)(v4 + 8 * v6 + 8);
        v21.m128i_i32[2] = v10;
        v20.m128i_i32[2] = *(_DWORD *)(v4 + 8 * v6 + 16);
        if ( *(float *)v20.m128i_i32 == 0.0 || *(float *)&v20.m128i_i32[1] == 0.0 || *(float *)&v20.m128i_i32[2] == 0.0 )
        {
          v19 = 1753;
          goto LABEL_11;
        }
        v11 = (__m128)v21.m128i_u32[0];
        v12 = (__m128)v21.m128i_u32[1];
        v11.m128_f32[0] = *(float *)v21.m128i_i32 / *(float *)v20.m128i_i32;
        *(float *)&v21.m128i_i32[2] = *(float *)&v21.m128i_i32[2] / *(float *)&v20.m128i_i32[2];
        v12.m128_f32[0] = *(float *)&v21.m128i_i32[1] / *(float *)&v20.m128i_i32[1];
        CExpressionValue::SetDataType(v5);
        v13 = v21.m128i_i32[2];
        *((_QWORD *)v5 + 1) = _mm_unpacklo_ps(v11, v12).m128_u64[0];
        *((_DWORD *)v5 + 4) = v13;
      }
      else
      {
        if ( LODWORD(v7) == 69 )
        {
          v22 = *(_OWORD *)(v5 + 2);
          v21 = _mm_loadu_si128((const __m128i *)(v4 + 8 * v6 + 8));
          if ( *(float *)v21.m128i_i32 == 0.0
            || *(float *)&v21.m128i_i32[1] == 0.0
            || *(float *)&v21.m128i_i32[2] == 0.0
            || *(float *)&v21.m128i_i32[3] == 0.0 )
          {
            v19 = 1776;
            goto LABEL_11;
          }
          for ( i = 0LL; i < 4; ++i )
            *(float *)&v20.m128i_i32[i] = *(float *)((char *)&v22 + i * 4) / *(float *)&v21.m128i_i32[i];
          CExpressionValue::SetDataType(v5);
          v8 = v20;
        }
        else
        {
          if ( LODWORD(v7) != 71 )
          {
            v19 = 1828;
            goto LABEL_11;
          }
          v20 = *(__m128i *)(v5 + 2);
          v21 = _mm_loadu_si128((const __m128i *)(v4 + 8 * v6 + 8));
          if ( *(float *)v21.m128i_i32 == 0.0
            || *(float *)&v21.m128i_i32[1] == 0.0
            || *(float *)&v21.m128i_i32[2] == 0.0
            || *(float *)&v21.m128i_i32[3] == 0.0 )
          {
            v19 = 1800;
            goto LABEL_11;
          }
          D3DXQuaternionInverse((struct D2DQuaternion *)&v22, (const struct D2DQuaternion *)&v21);
          D3DXQuaternionMultiply(
            (struct D2DQuaternion *)&v21,
            (const struct D2DQuaternion *)&v22,
            (const struct D2DQuaternion *)&v20);
          CExpressionValue::SetDataType(v5);
          v8 = v21;
        }
        *(__m128i *)(v5 + 2) = v8;
      }
      *((_BYTE *)v5 + 4) = 1;
      --*((_DWORD *)this + 4);
      return v2;
    }
    v19 = 1700;
  }
  else
  {
    v19 = 1676;
  }
LABEL_11:
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v19);
  return v2;
}
