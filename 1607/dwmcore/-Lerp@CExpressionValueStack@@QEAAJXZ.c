/*
 * XREFs of ?Lerp@CExpressionValueStack@@QEAAJXZ @ 0x18015A8B0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Lerp(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  const int *v2; // rdx
  CExpressionValueStack *v3; // r10
  struct CExpressionValue *v4; // rdi
  CExpressionValueStack *v5; // r10
  struct CExpressionValue *v6; // rax
  __int64 *v7; // r9
  __int64 v8; // r10
  int v9; // ecx
  float v10; // xmm3_4
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  float v14; // eax
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  float v17; // xmm0_4
  float v18; // eax
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  float v21; // xmm0_4
  unsigned int v23; // [rsp+20h] [rbp-40h]
  __int128 v24; // [rsp+30h] [rbp-30h]
  __int128 v25; // [rsp+40h] [rbp-20h]
  __int128 v26; // [rsp+50h] [rbp-10h]
  __int64 v27; // [rsp+70h] [rbp+10h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) < 3u )
  {
    v23 = 3168;
    v2 = 0LL;
LABEL_18:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, v2, 0, -2147467259, v23);
    return v1;
  }
  CExpressionValueStack::PeekStackValue(this, -2);
  v4 = CExpressionValueStack::PeekStackValue(v3, -1);
  v6 = CExpressionValueStack::PeekStackValue(v5, 0);
  v9 = *((_DWORD *)v7 + 16);
  v10 = *(float *)v6;
  if ( *((_DWORD *)v6 + 16) != 18 || v9 != *((_DWORD *)v4 + 16) )
  {
    v23 = 3195;
    goto LABEL_18;
  }
  switch ( v9 )
  {
    case 18:
      v21 = *(float *)v4 - *(float *)v7;
      *((_DWORD *)v7 + 16) = 18;
      *(float *)v7 = (float)(v21 * v10) + *(float *)v7;
      break;
    case 35:
      v27 = *v7;
      v19 = (__m128)(unsigned int)*(_QWORD *)v4;
      v19.m128_f32[0] = COERCE_FLOAT(*(_QWORD *)v4) - COERCE_FLOAT(*v7);
      v20 = (__m128)(unsigned int)HIDWORD(*(_QWORD *)v4);
      v20.m128_f32[0] = v20.m128_f32[0] - COERCE_FLOAT(HIDWORD(*v7));
      *((_DWORD *)v7 + 16) = 35;
      v19.m128_f32[0] = (float)(v19.m128_f32[0] * v10) + *(float *)&v27;
      v20.m128_f32[0] = (float)(v20.m128_f32[0] * v10) + *((float *)&v27 + 1);
      *v7 = _mm_unpacklo_ps(v19, v20).m128_u64[0];
      break;
    case 52:
      v14 = *((float *)v7 + 2);
      *(_QWORD *)&v24 = *v7;
      *(_QWORD *)&v25 = *(_QWORD *)v4;
      v15 = (__m128)(unsigned int)v25;
      v16 = (__m128)DWORD1(v25);
      v16.m128_f32[0] = *((float *)&v25 + 1) - *((float *)&v24 + 1);
      *((float *)&v24 + 2) = v14;
      v17 = *((float *)v4 + 2) - v14;
      v15.m128_f32[0] = (float)(*(float *)&v25 - *(float *)&v24) * v10;
      *((_DWORD *)v7 + 16) = 52;
      v15.m128_f32[0] = v15.m128_f32[0] + *(float *)&v24;
      v16.m128_f32[0] = (float)(v16.m128_f32[0] * v10) + *((float *)&v24 + 1);
      *((float *)&v25 + 2) = (float)(v17 * v10) + *((float *)&v24 + 2);
      v18 = *((float *)&v25 + 2);
      *v7 = _mm_unpacklo_ps(v15, v16).m128_u64[0];
      *((float *)v7 + 2) = v18;
      break;
    case 69:
      v11 = 0LL;
      v12 = *(_OWORD *)v4;
      v25 = *(_OWORD *)v7;
      v24 = v12;
      do
      {
        *(float *)((char *)&v26 + v11) = (float)((float)(*(float *)((char *)&v24 + v11) - *(float *)((char *)&v25 + v11))
                                               * v10)
                                       + *(float *)((char *)&v25 + v11);
        v11 += 4LL;
      }
      while ( v11 < 16 );
      v13 = v26;
      *((_DWORD *)v7 + 16) = 69;
      *(_OWORD *)v7 = v13;
      break;
    default:
      v23 = 3257;
      goto LABEL_18;
  }
  *((_BYTE *)v7 + 68) = 1;
  *(_DWORD *)(v8 + 16) -= 2;
  return v1;
}
