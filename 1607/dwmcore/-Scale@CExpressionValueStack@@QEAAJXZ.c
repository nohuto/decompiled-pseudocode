/*
 * XREFs of ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x18015C08C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x18008C318 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ??DD2DMatrix@@QEBA?AU0@M@Z @ 0x1800C1E94 (--DD2DMatrix@@QEBA-AU0@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Scale(CExpressionValueStack *this)
{
  unsigned int v1; // edi
  struct CExpressionValue *v3; // rdx
  __m128 *v4; // r9
  __m128 *v5; // rbx
  struct CExpressionValue *v6; // rax
  __int32 v7; // eax
  D2DMatrix *v8; // rax
  __m128 v9; // xmm3
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  __int64 v12; // rcx
  signed __int64 v13; // r9
  __m128 v14; // xmm0
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  float v17; // xmm0_4
  __m128 v18; // xmm1
  __m128 v19; // xmm0
  float v20; // xmm1_4
  unsigned int v22; // [rsp+28h] [rbp-29h]
  __m128 v23; // [rsp+38h] [rbp-19h] BYREF
  char v24[64]; // [rsp+58h] [rbp+7h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) >= 2u )
  {
    CExpressionValueStack::PeekStackValue(this, -1);
    v3 = CExpressionValueStack::PeekStackValue(this, 0);
    v5 = v4;
    if ( *((_DWORD *)v3 + 16) != 18 )
    {
      if ( v4[4].m128_i32[0] != 18 )
      {
        v22 = 2854;
        goto LABEL_3;
      }
      v6 = (struct CExpressionValue *)v4;
      v4 = (__m128 *)v3;
      v3 = v6;
    }
    v7 = v4[4].m128_i32[0];
    switch ( v7 )
    {
      case 18:
        v20 = *(float *)v3 * v4->m128_f32[0];
        v5[4].m128_i32[0] = 18;
        v5->m128_f32[0] = v20;
        break;
      case 35:
        v18 = (__m128)*(unsigned int *)v3;
        v19 = v18;
        v18.m128_f32[0] = v18.m128_f32[0] * v4->m128_f32[1];
        v19.m128_f32[0] = v19.m128_f32[0] * v4->m128_f32[0];
        v5[4].m128_i32[0] = 35;
        v5->m128_u64[0] = _mm_unpacklo_ps(v19, v18).m128_u64[0];
        break;
      case 52:
        v15 = (__m128)*(unsigned int *)v3;
        v16 = v15;
        v17 = v15.m128_f32[0] * v4->m128_f32[2];
        v15.m128_f32[0] = v15.m128_f32[0] * v4->m128_f32[0];
        v16.m128_f32[0] = v16.m128_f32[0] * v4->m128_f32[1];
        v5[4].m128_i32[0] = 52;
        v23.m128_f32[2] = v17;
        v5->m128_u64[0] = _mm_unpacklo_ps(v15, v16).m128_u64[0];
        v5->m128_f32[2] = v17;
        break;
      case 69:
        v12 = 0LL;
        v13 = (char *)v4 - (char *)&v23;
        do
        {
          v23.m128_f32[v12] = *(float *)v3 * *(float *)((char *)&v23.m128_f32[v12] + v13);
          ++v12;
        }
        while ( v12 < 4 );
        v14 = v23;
        v5[4].m128_i32[0] = 69;
        *v5 = v14;
        break;
      case 104:
        v9 = _mm_shuffle_ps((__m128)*(unsigned int *)v3, (__m128)*(unsigned int *)v3, 0);
        v10 = v9;
        v11 = _mm_mul_ps(*v4, v9);
        v10.m128_f32[0] = v9.m128_f32[0] * v4[1].m128_f32[0];
        v9.m128_f32[0] = v9.m128_f32[0] * v4[1].m128_f32[1];
        v5[4].m128_i32[0] = 104;
        *v5 = v11;
        v5[1].m128_u64[0] = _mm_unpacklo_ps(v10, v9).m128_u64[0];
        v23 = v11;
        break;
      case 265:
        v8 = D2DMatrix::operator*(v4->m128_f32, (D2DMatrix *)v24, *(float *)v3);
        v5[4].m128_i32[0] = 265;
        *v5 = *(__m128 *)v8;
        v5[1] = *((__m128 *)v8 + 1);
        v5[2] = *((__m128 *)v8 + 2);
        v5[3] = *((__m128 *)v8 + 3);
        break;
      default:
        v22 = 2917;
        goto LABEL_3;
    }
    v5[4].m128_i8[4] = 1;
    --*((_DWORD *)this + 4);
    return v1;
  }
  v22 = 2819;
LABEL_3:
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v22);
  return v1;
}
