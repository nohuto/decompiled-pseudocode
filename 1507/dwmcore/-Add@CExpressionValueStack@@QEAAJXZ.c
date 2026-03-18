/*
 * XREFs of ?Add@CExpressionValueStack@@QEAAJXZ @ 0x1801008E8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Add(CExpressionValueStack *this)
{
  unsigned int v1; // esi
  struct CExpressionValue *v3; // rbx
  struct CExpressionValue *v4; // rax
  int v5; // ecx
  __int64 v6; // r8
  char *v7; // rcx
  float *v8; // rax
  __int64 v9; // rcx
  __m128 v10; // xmm7
  __m128 v11; // xmm6
  int v12; // eax
  __m128 v13; // xmm7
  __m128 v14; // xmm6
  float v15; // xmm6_4
  float v16; // xmm7_4
  unsigned int v18; // [rsp+20h] [rbp-58h]
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) >= 2u )
  {
    v3 = CExpressionValueStack::PeekStackValue(this, -1);
    v4 = CExpressionValueStack::PeekStackValue(this, 0);
    v5 = *(_DWORD *)v3;
    if ( *(_DWORD *)v3 == *(_DWORD *)v4 )
    {
      switch ( v5 )
      {
        case 17:
          v15 = *((float *)v3 + 2);
          v16 = *((float *)v4 + 2);
          CExpressionValue::SetDataType(v3);
          *((float *)v3 + 2) = v16 + v15;
          break;
        case 34:
          v13 = (__m128)*((unsigned int *)v3 + 2);
          v14 = (__m128)*((unsigned int *)v3 + 3);
          v13.m128_f32[0] = v13.m128_f32[0] + *((float *)v4 + 2);
          v14.m128_f32[0] = v14.m128_f32[0] + *((float *)v4 + 3);
          CExpressionValue::SetDataType(v3);
          *((_QWORD *)v3 + 1) = _mm_unpacklo_ps(v13, v14).m128_u64[0];
          break;
        case 51:
          v10 = (__m128)*((unsigned int *)v3 + 2);
          v11 = (__m128)*((unsigned int *)v3 + 3);
          v10.m128_f32[0] = v10.m128_f32[0] + *((float *)v4 + 2);
          v11.m128_f32[0] = v11.m128_f32[0] + *((float *)v4 + 3);
          *((float *)&v19 + 2) = *((float *)v3 + 4) + *((float *)v4 + 4);
          CExpressionValue::SetDataType(v3);
          v12 = DWORD2(v19);
          *((_QWORD *)v3 + 1) = _mm_unpacklo_ps(v10, v11).m128_u64[0];
          *((_DWORD *)v3 + 4) = v12;
          break;
        case 68:
          v6 = 4LL;
          v7 = (char *)v4 + 8;
          v8 = (float *)((char *)v3 + 8);
          v9 = v7 - ((char *)v3 + 8);
          do
          {
            *(float *)((char *)v8 + (char *)&v19 - ((char *)v3 + 8)) = *(float *)((char *)v8 + v9) + *v8;
            ++v8;
            --v6;
          }
          while ( v6 );
          CExpressionValue::SetDataType(v3);
          *(_OWORD *)((char *)v3 + 8) = v19;
          break;
        default:
          v18 = 1208;
          goto LABEL_10;
      }
      *((_BYTE *)v3 + 4) = 1;
      --*((_DWORD *)this + 4);
      return v1;
    }
    v18 = 1170;
  }
  else
  {
    v18 = 1141;
  }
LABEL_10:
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v18);
  return v1;
}
