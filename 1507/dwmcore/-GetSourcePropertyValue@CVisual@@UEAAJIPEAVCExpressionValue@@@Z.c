/*
 * XREFs of ?GetSourcePropertyValue@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801041B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CVisual::GetSourcePropertyValue(CVisual *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // edi
  int v5; // edx
  int v6; // edx
  __m128 v7; // xmm6
  __m128 v8; // xmm7
  __m128 v9; // xmm6
  __m128 v10; // xmm7
  int v11; // xmm6_4
  int v13; // [rsp+38h] [rbp-30h]

  v3 = 0;
  v5 = a2 - 22;
  if ( !v5 )
  {
    v11 = *((_DWORD *)this + 86);
    CExpressionValue::SetDataType(a3);
    *((_DWORD *)a3 + 2) = v11;
    goto LABEL_8;
  }
  v6 = v5 - 2;
  if ( !v6 )
  {
    v9 = (__m128)*((unsigned int *)this + 12);
    v10 = (__m128)*((unsigned int *)this + 13);
    v13 = *((_DWORD *)this + 14);
    CExpressionValue::SetDataType(a3);
    *((_QWORD *)a3 + 1) = _mm_unpacklo_ps(v9, v10).m128_u64[0];
    *((_DWORD *)a3 + 4) = v13;
    goto LABEL_8;
  }
  if ( v6 == 1 )
  {
    v7 = (__m128)*((unsigned int *)this + 19);
    v8 = (__m128)*((unsigned int *)this + 20);
    CExpressionValue::SetDataType(a3);
    *((_QWORD *)a3 + 1) = _mm_unpacklo_ps(v7, v8).m128_u64[0];
LABEL_8:
    *((_BYTE *)a3 + 4) = 1;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x11EEu);
  return v3;
}
