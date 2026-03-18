/*
 * XREFs of ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x18015C4F4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ??GD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1800C2014 (--GD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Subtract(CExpressionValueStack *this)
{
  unsigned int v1; // esi
  const int *v3; // rdx
  struct CExpressionValue *v4; // rbx
  struct CExpressionValue *v5; // rax
  int v6; // ecx
  D2DMatrix *v7; // rax
  float v8; // xmm0_4
  __m128 v9; // xmm3
  __m128 v10; // xmm2
  unsigned int v11; // xmm1_4
  unsigned int v12; // xmm0_4
  signed __int64 v13; // rcx
  __int64 v14; // r8
  char *v15; // rdx
  __int128 v16; // xmm0
  __m128 v17; // xmm2
  __m128 v18; // xmm1
  float v19; // eax
  __m128 v20; // xmm0
  __m128 v21; // xmm1
  float v22; // xmm0_4
  unsigned int v24; // [rsp+28h] [rbp-29h]
  float v25[8]; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v26[64]; // [rsp+58h] [rbp+7h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) >= 2u )
  {
    v4 = CExpressionValueStack::PeekStackValue(this, -1);
    v5 = CExpressionValueStack::PeekStackValue(this, 0);
    v6 = *((_DWORD *)v4 + 16);
    if ( v6 == *((_DWORD *)v5 + 16) )
    {
      switch ( v6 )
      {
        case 18:
          v22 = *(float *)v4 - *(float *)v5;
          *((_DWORD *)v4 + 16) = 18;
          *(float *)v4 = v22;
          break;
        case 35:
          v20 = (__m128)*(unsigned int *)v4;
          v21 = (__m128)*((unsigned int *)v4 + 1);
          v20.m128_f32[0] = v20.m128_f32[0] - *(float *)v5;
          v21.m128_f32[0] = v21.m128_f32[0] - *((float *)v5 + 1);
          *((_DWORD *)v4 + 16) = 35;
          *(_QWORD *)v4 = _mm_unpacklo_ps(v20, v21).m128_u64[0];
          break;
        case 52:
          v17 = (__m128)*(unsigned int *)v4;
          v17.m128_f32[0] = v17.m128_f32[0] - *(float *)v5;
          v18 = (__m128)*((unsigned int *)v4 + 1);
          v18.m128_f32[0] = v18.m128_f32[0] - *((float *)v5 + 1);
          v25[2] = *((float *)v4 + 2) - *((float *)v5 + 2);
          v19 = v25[2];
          *((_DWORD *)v4 + 16) = 52;
          *(_QWORD *)v4 = _mm_unpacklo_ps(v17, v18).m128_u64[0];
          *((float *)v4 + 2) = v19;
          break;
        case 69:
          v13 = v4 - v5;
          v14 = 4LL;
          v15 = (char *)((char *)v25 - (char *)v5);
          do
          {
            *(float *)((char *)v5 + (_QWORD)v15) = *(float *)((char *)v5 + v13) - *(float *)v5;
            v5 = (struct CExpressionValue *)((char *)v5 + 4);
            --v14;
          }
          while ( v14 );
          v16 = *(_OWORD *)v25;
          *((_DWORD *)v4 + 16) = 69;
          *(_OWORD *)v4 = v16;
          break;
        case 104:
          v8 = *(float *)v4 - *(float *)v5;
          v9 = (__m128)*((unsigned int *)v4 + 4);
          v9.m128_f32[0] = v9.m128_f32[0] - *((float *)v5 + 4);
          v10 = (__m128)*((unsigned int *)v4 + 5);
          v10.m128_f32[0] = v10.m128_f32[0] - *((float *)v5 + 5);
          v25[1] = *((float *)v4 + 1) - *((float *)v5 + 1);
          *(float *)&v11 = *((float *)v4 + 3) - *((float *)v5 + 3);
          v25[0] = v8;
          *(float *)&v12 = *((float *)v4 + 2) - *((float *)v5 + 2);
          *((_DWORD *)v4 + 16) = 104;
          *(_QWORD *)&v25[2] = __PAIR64__(v11, v12);
          *(_OWORD *)v4 = *(_OWORD *)v25;
          *((_QWORD *)v4 + 2) = _mm_unpacklo_ps(v9, v10).m128_u64[0];
          break;
        case 265:
          v7 = D2DMatrix::operator-((float *)v4, (D2DMatrix *)v26, (float *)v5);
          *((_DWORD *)v4 + 16) = 265;
          *(_OWORD *)v4 = *(_OWORD *)v7;
          *((_OWORD *)v4 + 1) = *((_OWORD *)v7 + 1);
          *((_OWORD *)v4 + 2) = *((_OWORD *)v7 + 2);
          *((_OWORD *)v4 + 3) = *((_OWORD *)v7 + 3);
          break;
        default:
          v24 = 1102;
          goto LABEL_3;
      }
      *((_BYTE *)v4 + 68) = 1;
      --*((_DWORD *)this + 4);
      return v1;
    }
    v24 = 1048;
  }
  else
  {
    v24 = 1024;
    v3 = 0LL;
  }
LABEL_3:
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, v3, 0, -2147467259, v24);
  return v1;
}
