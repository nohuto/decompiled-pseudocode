/*
 * XREFs of ?Asin@CExpressionValueStack@@QEAAJXZ @ 0x180158EB4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     asinf_0 @ 0x1800BF5BA (asinf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Asin(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  const int *v2; // rdx
  struct CExpressionValue *v3; // rax
  struct CExpressionValue *v4; // rdi
  float v5; // xmm0_4
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v1 = 0;
  if ( !*((_DWORD *)this + 4) )
  {
    v7 = 4304;
    v2 = 0LL;
LABEL_9:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, v2, 0, -2147467259, v7);
    return v1;
  }
  v3 = CExpressionValueStack::PeekStackValue(this, 0);
  v4 = v3;
  if ( *((_DWORD *)v3 + 16) != 18 )
  {
    v7 = 4346;
    goto LABEL_9;
  }
  v5 = *(float *)v3;
  if ( *(float *)v3 < -1.0 || v5 > 1.0 )
  {
    v7 = 4331;
    goto LABEL_9;
  }
  *((_DWORD *)v3 + 16) = 18;
  *(float *)v3 = asinf_0(v5);
  *((_BYTE *)v4 + 68) = 1;
  return v1;
}
