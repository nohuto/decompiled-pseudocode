/*
 * XREFs of ?Matrix3x2FromTranslation@CExpressionValueStack@@QEAAJXZ @ 0x18008C508
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromTranslation(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  struct CExpressionValue *v2; // rax
  const int *v3; // rdx
  unsigned int v5; // [rsp+20h] [rbp-28h]
  __int64 v6; // [rsp+30h] [rbp-18h]

  v1 = 0;
  if ( !*((_DWORD *)this + 4) )
  {
    v5 = 5989;
    v3 = 0LL;
LABEL_7:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, v3, 0, -2147467259, v5);
    return v1;
  }
  v2 = CExpressionValueStack::PeekStackValue(this, 0);
  if ( *((_DWORD *)v2 + 16) != 35 )
  {
    v5 = 6002;
    goto LABEL_7;
  }
  v6 = *(_QWORD *)v2;
  *((_DWORD *)v2 + 16) = 104;
  *(_OWORD *)v2 = _xmm;
  *((_BYTE *)v2 + 68) = 1;
  *((_QWORD *)v2 + 2) = _mm_unpacklo_ps((__m128)(unsigned int)v6, (__m128)HIDWORD(v6)).m128_u64[0];
  return v1;
}
