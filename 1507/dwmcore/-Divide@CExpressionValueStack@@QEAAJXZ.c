/*
 * XREFs of ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x180100CF0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Divide(CExpressionValueStack *this)
{
  unsigned int v1; // edi
  struct CExpressionValue *v3; // rbx
  struct CExpressionValue *v4; // rax
  int v5; // ecx
  struct CExpressionValue *v6; // rdx
  __int64 i; // rax
  __int32 v8; // eax
  __m128 v9; // xmm7
  __m128 v10; // xmm6
  __int32 v11; // eax
  __m128 v12; // xmm7
  __m128 v13; // xmm6
  float v14; // xmm7_4
  float v15; // xmm6_4
  unsigned int v17; // [rsp+20h] [rbp-60h]
  __int128 v18; // [rsp+30h] [rbp-50h]
  __m128i v19; // [rsp+40h] [rbp-40h]
  __int128 v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+A0h] [rbp+20h]
  __int64 v22; // [rsp+A8h] [rbp+28h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) >= 2u )
  {
    v3 = CExpressionValueStack::PeekStackValue(this, -1);
    v4 = CExpressionValueStack::PeekStackValue(this, 0);
    v5 = *(_DWORD *)v3;
    v6 = v4;
    if ( *(_DWORD *)v3 == *(_DWORD *)v4 )
    {
      switch ( v5 )
      {
        case 17:
          v14 = *((float *)v4 + 2);
          if ( v14 == 0.0 )
          {
            v17 = 1506;
            goto LABEL_10;
          }
          v15 = *((float *)v3 + 2);
          CExpressionValue::SetDataType(v3);
          *((float *)v3 + 2) = v15 / v14;
          break;
        case 34:
          v22 = *((_QWORD *)v3 + 1);
          v21 = *((_QWORD *)v4 + 1);
          if ( *(float *)&v21 == 0.0 || *((float *)&v21 + 1) == 0.0 )
          {
            v17 = 1525;
            goto LABEL_10;
          }
          v12 = (__m128)(unsigned int)v22;
          v13 = (__m128)HIDWORD(v22);
          v12.m128_f32[0] = *(float *)&v22 / COERCE_FLOAT(*((_QWORD *)v4 + 1));
          v13.m128_f32[0] = *((float *)&v22 + 1) / *((float *)&v21 + 1);
          CExpressionValue::SetDataType(v3);
          *((_QWORD *)v3 + 1) = _mm_unpacklo_ps(v12, v13).m128_u64[0];
          break;
        case 51:
          v8 = *((_DWORD *)v3 + 4);
          v19.m128i_i64[0] = *((_QWORD *)v3 + 1);
          *(_QWORD *)&v18 = *((_QWORD *)v6 + 1);
          v19.m128i_i32[2] = v8;
          DWORD2(v18) = *((_DWORD *)v6 + 4);
          if ( *(float *)&v18 == 0.0 || *((float *)&v18 + 1) == 0.0 || *((float *)&v18 + 2) == 0.0 )
          {
            v17 = 1546;
            goto LABEL_10;
          }
          v9 = (__m128)v19.m128i_u32[0];
          v10 = (__m128)v19.m128i_u32[1];
          v9.m128_f32[0] = *(float *)v19.m128i_i32 / *(float *)&v18;
          *(float *)&v19.m128i_i32[2] = *(float *)&v19.m128i_i32[2] / *((float *)&v18 + 2);
          v10.m128_f32[0] = *(float *)&v19.m128i_i32[1] / *((float *)&v18 + 1);
          CExpressionValue::SetDataType(v3);
          v11 = v19.m128i_i32[2];
          *((_QWORD *)v3 + 1) = _mm_unpacklo_ps(v9, v10).m128_u64[0];
          *((_DWORD *)v3 + 4) = v11;
          break;
        case 68:
          v18 = *(_OWORD *)((char *)v3 + 8);
          v19 = _mm_loadu_si128((const __m128i *)((char *)v4 + 8));
          if ( *(float *)v19.m128i_i32 == 0.0
            || *(float *)&v19.m128i_i32[1] == 0.0
            || *(float *)&v19.m128i_i32[2] == 0.0
            || *(float *)&v19.m128i_i32[3] == 0.0 )
          {
            v17 = 1569;
            goto LABEL_10;
          }
          for ( i = 0LL; i < 4; ++i )
            *(float *)((char *)&v20 + i * 4) = *(float *)((char *)&v18 + i * 4) / *(float *)&v19.m128i_i32[i];
          CExpressionValue::SetDataType(v3);
          *(_OWORD *)((char *)v3 + 8) = v20;
          break;
        default:
          v17 = 1588;
          goto LABEL_10;
      }
      *((_BYTE *)v3 + 4) = 1;
      --*((_DWORD *)this + 4);
      return v1;
    }
    v17 = 1493;
  }
  else
  {
    v17 = 1469;
  }
LABEL_10:
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v17);
  return v1;
}
