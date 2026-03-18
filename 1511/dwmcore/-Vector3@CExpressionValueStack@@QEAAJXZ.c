/*
 * XREFs of ?Vector3@CExpressionValueStack@@QEAAJXZ @ 0x18011F99C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rsi
  __m128 v6; // xmm7
  __m128 v7; // xmm6
  unsigned int v9; // [rsp+20h] [rbp-48h]
  int v10; // [rsp+38h] [rbp-30h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 3 )
  {
    v9 = 5815;
LABEL_8:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v9);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = v4 + 24LL * (v1 - 3);
  if ( *(_DWORD *)v5 != 18 || *(_DWORD *)(v4 + 24LL * (v1 - 2)) != 18 || *(_DWORD *)(v4 + 24LL * (v1 - 1)) != 18 )
  {
    v9 = 5832;
    goto LABEL_8;
  }
  v6 = (__m128)*(unsigned int *)(v4 + 24LL * (v1 - 2) + 8);
  v7 = (__m128)*(unsigned int *)(v5 + 8);
  v10 = *(_DWORD *)(v4 + 24LL * (v1 - 1) + 8);
  CExpressionValue::SetDataType(v4 + 24LL * (v1 - 3));
  *(_QWORD *)(v5 + 8) = _mm_unpacklo_ps(v7, v6).m128_u64[0];
  *(_DWORD *)(v5 + 16) = v10;
  *(_BYTE *)(v5 + 4) = 1;
  *((_DWORD *)this + 4) -= 2;
  return v2;
}
