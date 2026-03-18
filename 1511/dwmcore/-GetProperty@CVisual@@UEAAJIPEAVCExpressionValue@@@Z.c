/*
 * XREFs of ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180120960
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CVisual::GetProperty(CVisual *this, int a2, struct CExpressionValue *a3)
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
  v5 = a2 - 23;
  if ( !v5 )
  {
    v11 = *((_DWORD *)this + 96);
    CExpressionValue::SetDataType(a3);
    *((_DWORD *)a3 + 2) = v11;
    goto LABEL_8;
  }
  v6 = v5 - 2;
  if ( !v6 )
  {
    v9 = (__m128)*((unsigned int *)this + 22);
    v10 = (__m128)*((unsigned int *)this + 23);
    v13 = *((_DWORD *)this + 24);
    CExpressionValue::SetDataType(a3);
    *((_QWORD *)a3 + 1) = _mm_unpacklo_ps(v9, v10).m128_u64[0];
    *((_DWORD *)a3 + 4) = v13;
    goto LABEL_8;
  }
  if ( v6 == 1 )
  {
    v7 = (__m128)*((unsigned int *)this + 29);
    v8 = (__m128)*((unsigned int *)this + 30);
    CExpressionValue::SetDataType(a3);
    *((_QWORD *)a3 + 1) = _mm_unpacklo_ps(v7, v8).m128_u64[0];
LABEL_8:
    *((_BYTE *)a3 + 4) = 1;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x11AAu);
  return v3;
}
