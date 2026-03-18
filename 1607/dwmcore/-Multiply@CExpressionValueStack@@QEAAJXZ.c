/*
 * XREFs of ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x18008C318
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800AC2F0 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x1800C2508 (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x18015C08C (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 */

__int64 __fastcall CExpressionValueStack::Multiply(CExpressionValueStack *this)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  CExpressionValueStack *v3; // r10
  struct CExpressionValue *v4; // rax
  __int128 *v5; // r9
  CExpressionValueStack *v6; // r10
  int v7; // ecx
  struct CExpressionValue *v8; // rdx
  int v9; // eax
  __int128 v10; // xmm1
  int v11; // r11d
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  float v15; // xmm2_4
  float v16; // xmm3_4
  __m128 v17; // xmm4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  __m128 v25; // xmm2
  float v26; // xmm0_4
  float v27; // xmm0_4
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  float v30; // eax
  __m128 v31; // xmm2
  __m128 v32; // xmm1
  float v33; // xmm0_4
  __int64 v34; // xmm1_8
  __m128 v35; // xmm0
  __m128 v36; // xmm1
  int v37; // eax
  __int128 v38; // [rsp+30h] [rbp-39h] BYREF
  __int128 v39; // [rsp+40h] [rbp-29h]
  float v40[8]; // [rsp+50h] [rbp-19h]
  _OWORD v41[4]; // [rsp+70h] [rbp+7h] BYREF

  v1 = 0LL;
  v2 = 0;
  if ( *((_DWORD *)this + 4) < 2u )
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x475u);
    return v2;
  }
  CExpressionValueStack::PeekStackValue(this, -1);
  v4 = CExpressionValueStack::PeekStackValue(v3, 0);
  v7 = *((_DWORD *)v5 + 16);
  v8 = v4;
  v9 = *((_DWORD *)v4 + 16);
  if ( v7 == v9 )
  {
    switch ( v7 )
    {
      case 104:
        v15 = *((float *)v5 + 3);
        v16 = *((float *)v5 + 2);
        v17 = (__m128)*((unsigned int *)v5 + 4);
        v18 = *((float *)v8 + 3) * *((float *)v5 + 1);
        v40[0] = (float)(*(float *)v8 * *(float *)v5) + (float)(*((float *)v8 + 2) * *((float *)v5 + 1));
        v19 = (float)(*((float *)v8 + 1) * *(float *)v5) + v18;
        v20 = v15;
        v21 = v15 * *((float *)v8 + 3);
        v22 = v20 * *((float *)v8 + 2);
        v40[1] = v19;
        v23 = v16 * *(float *)v8;
        v24 = (float)(v16 * *((float *)v8 + 1)) + v21;
        v25 = v17;
        v25.m128_f32[0] = v17.m128_f32[0] * *(float *)v8;
        v17.m128_f32[0] = v17.m128_f32[0] * *((float *)v8 + 1);
        v40[2] = v23 + v22;
        v26 = *((float *)v5 + 5);
        v40[3] = v24;
        v17.m128_f32[0] = (float)(v17.m128_f32[0] + (float)(v26 * *((float *)v8 + 3))) + *((float *)v8 + 5);
        v25.m128_f32[0] = (float)(v25.m128_f32[0] + (float)(v26 * *((float *)v8 + 2))) + *((float *)v8 + 4);
        *v5 = *(_OWORD *)v40;
        *((_DWORD *)v5 + 16) = 104;
        *((_QWORD *)v5 + 2) = _mm_unpacklo_ps(v25, v17).m128_u64[0];
        break;
      case 18:
        v27 = *(float *)v8 * *(float *)v5;
        *((_DWORD *)v5 + 16) = 18;
        *(float *)v5 = v27;
        break;
      case 35:
        v34 = *(_QWORD *)v8;
        *(_QWORD *)&v38 = *(_QWORD *)v5;
        *(_QWORD *)&v39 = v34;
        v35 = (__m128)(unsigned int)v34;
        v36 = (__m128)HIDWORD(v34);
        v35.m128_f32[0] = v35.m128_f32[0] * *(float *)&v38;
        *((_DWORD *)v5 + 16) = 35;
        v36.m128_f32[0] = v36.m128_f32[0] * *((float *)&v38 + 1);
        *(_QWORD *)v5 = _mm_unpacklo_ps(v35, v36).m128_u64[0];
        break;
      case 52:
        v30 = *((float *)v5 + 2);
        *(_QWORD *)&v39 = *(_QWORD *)v5;
        *(_QWORD *)&v38 = *(_QWORD *)v8;
        v31 = (__m128)(unsigned int)v38;
        v31.m128_f32[0] = *(float *)&v38 * *(float *)&v39;
        *((float *)&v39 + 2) = v30;
        v32 = (__m128)DWORD1(v38);
        v32.m128_f32[0] = *((float *)&v38 + 1) * *((float *)&v39 + 1);
        v33 = *((float *)v8 + 2) * v30;
        *((_DWORD *)v5 + 16) = 52;
        *((float *)&v38 + 2) = v33;
        *(_QWORD *)v5 = _mm_unpacklo_ps(v31, v32).m128_u64[0];
        *((float *)v5 + 2) = v33;
        break;
      default:
        switch ( v7 )
        {
          case 69:
            v29 = *(_OWORD *)v8;
            v39 = *v5;
            v38 = v29;
            do
            {
              v40[v1] = *(float *)((char *)&v38 + v1 * 4) * v40[v1 - 4];
              ++v1;
            }
            while ( v1 < 4 );
            v28 = *(_OWORD *)v40;
            *((_DWORD *)v5 + 16) = 69;
            break;
          case 71:
            D3DXQuaternionMultiply((struct D2DQuaternion *)&v38, v8, (const struct D2DQuaternion *)v5);
            v28 = v38;
            *((_DWORD *)v5 + 16) = 71;
            break;
          case 265:
            D2DMatrixMultiply((struct D2DMatrix *)v41, (const struct D2DMatrix *)v5, v8);
            v10 = v41[1];
            *v5 = v41[0];
            *((_DWORD *)v5 + 16) = v11;
            v12 = v41[2];
            v5[1] = v10;
            v13 = v41[3];
            v5[2] = v12;
            v5[3] = v13;
            goto LABEL_11;
          default:
            v2 = -2147467259;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x4D4u);
            return v2;
        }
        *v5 = v28;
        break;
    }
LABEL_11:
    *((_BYTE *)v5 + 68) = 1;
    --*((_DWORD *)v6 + 4);
    return v2;
  }
  if ( v9 == 18 || v7 == 18 )
  {
    v37 = CExpressionValueStack::Scale(v6);
    v2 = v37;
    if ( v37 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x4E3u);
  }
  else
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x4EDu);
  }
  return v2;
}
