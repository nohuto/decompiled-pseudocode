/*
 * XREFs of ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x180148C14
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180148EF0 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800AD090 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1800C2360 (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CConditionalExpression::AddStackValueToSum(
        CConditionalExpression *this,
        struct CExpressionValue *a2,
        struct CExpressionValueStack *a3)
{
  struct CExpressionValue *v5; // rax
  unsigned int v6; // edi
  float *v7; // rdx
  int v8; // eax
  D2DMatrix *v9; // rax
  float v10; // xmm0_4
  __m128 v11; // xmm3
  __m128 v12; // xmm2
  unsigned int v13; // xmm1_4
  unsigned int v14; // xmm0_4
  signed __int64 v15; // rdx
  float *v16; // rax
  __int64 v17; // r8
  __int128 v18; // xmm0
  __m128 v19; // xmm2
  __m128 v20; // xmm1
  float v21; // eax
  __m128 v22; // xmm0
  __m128 v23; // xmm1
  float v24; // xmm0_4
  unsigned int v26; // [rsp+20h] [rbp-39h]
  float v27[8]; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v28[64]; // [rsp+50h] [rbp-9h] BYREF

  v5 = CExpressionValueStack::PeekStackValue(a3, 0);
  v6 = 0;
  v7 = (float *)v5;
  if ( !*((_BYTE *)a2 + 68) )
  {
    CExpressionValue::CopyFrom(a2, v5);
LABEL_23:
    --*((_DWORD *)a3 + 4);
    return v6;
  }
  v8 = *((_DWORD *)v5 + 16);
  switch ( v8 )
  {
    case 18:
      v24 = *v7 + *(float *)a2;
      *((_DWORD *)a2 + 16) = 18;
      *(float *)a2 = v24;
      goto LABEL_22;
    case 35:
      v22 = (__m128)*(unsigned int *)v7;
      v23 = (__m128)*((unsigned int *)a2 + 1);
      v22.m128_f32[0] = v22.m128_f32[0] + *(float *)a2;
      v23.m128_f32[0] = v23.m128_f32[0] + v7[1];
      *((_DWORD *)a2 + 16) = 35;
      *(_QWORD *)a2 = _mm_unpacklo_ps(v22, v23).m128_u64[0];
      goto LABEL_22;
    case 52:
      v19 = (__m128)*(unsigned int *)v7;
      v19.m128_f32[0] = v19.m128_f32[0] + *(float *)a2;
      v20 = (__m128)*((unsigned int *)a2 + 1);
      v20.m128_f32[0] = v20.m128_f32[0] + v7[1];
      v27[2] = *((float *)a2 + 2) + v7[2];
      v21 = v27[2];
      *((_DWORD *)a2 + 16) = 52;
      *(_QWORD *)a2 = _mm_unpacklo_ps(v19, v20).m128_u64[0];
      *((float *)a2 + 2) = v21;
      goto LABEL_22;
    case 69:
      v15 = (char *)v7 - (char *)a2;
      v16 = (float *)a2;
      v17 = 4LL;
      do
      {
        *(float *)((char *)v16 + (char *)v27 - (char *)a2) = *(float *)((char *)v16 + v15) + *v16;
        ++v16;
        --v17;
      }
      while ( v17 );
      v18 = *(_OWORD *)v27;
      *((_DWORD *)a2 + 16) = 69;
      *(_OWORD *)a2 = v18;
      goto LABEL_22;
  }
  if ( v8 <= 69 )
  {
LABEL_15:
    v26 = 458;
    goto LABEL_14;
  }
  if ( v8 > 71 )
  {
    if ( v8 == 104 )
    {
      v10 = *v7 + *(float *)a2;
      v11 = (__m128)*((unsigned int *)a2 + 4);
      v11.m128_f32[0] = v11.m128_f32[0] + v7[4];
      v12 = (__m128)*((unsigned int *)a2 + 5);
      v12.m128_f32[0] = v12.m128_f32[0] + v7[5];
      v27[1] = *((float *)a2 + 1) + v7[1];
      *(float *)&v13 = *((float *)a2 + 3) + v7[3];
      v27[0] = v10;
      *(float *)&v14 = *((float *)a2 + 2) + v7[2];
      *((_DWORD *)a2 + 16) = 104;
      *(_QWORD *)&v27[2] = __PAIR64__(v13, v14);
      *(_OWORD *)a2 = *(_OWORD *)v27;
      *((_QWORD *)a2 + 2) = _mm_unpacklo_ps(v11, v12).m128_u64[0];
      goto LABEL_22;
    }
    if ( v8 == 265 )
    {
      v9 = D2DMatrix::operator+((float *)a2, (D2DMatrix *)v28, v7);
      *((_DWORD *)a2 + 16) = 265;
      *(_OWORD *)a2 = *(_OWORD *)v9;
      *((_OWORD *)a2 + 1) = *((_OWORD *)v9 + 1);
      *((_OWORD *)a2 + 2) = *((_OWORD *)v9 + 2);
      *((_OWORD *)a2 + 3) = *((_OWORD *)v9 + 3);
LABEL_22:
      *((_BYTE *)a2 + 68) = 1;
      goto LABEL_23;
    }
    goto LABEL_15;
  }
  v26 = 439;
LABEL_14:
  v6 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v26);
  return v6;
}
