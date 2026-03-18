/*
 * XREFs of ?Conditional@CExpressionValueStack@@QEAAJPEAUExpressionConditionalNode@@PEA_N@Z @ 0x180159C74
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Conditional(
        CExpressionValueStack *this,
        struct ExpressionConditionalNode *a2,
        bool *a3)
{
  unsigned int v3; // ebx
  const int *v4; // rdx
  struct CExpressionValue *v5; // rax
  __int64 v6; // r9
  _BYTE *v7; // r10
  char v8; // cl
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( *((_DWORD *)this + 4) )
  {
    v5 = CExpressionValueStack::PeekStackValue(this, 0);
    if ( *((_DWORD *)v5 + 16) == 17 )
    {
      v8 = *(_BYTE *)v5;
      --*(_DWORD *)(v6 + 16);
      *v7 = v8;
      return v3;
    }
    v10 = 6688;
  }
  else
  {
    v10 = 6668;
    v4 = 0LL;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR(0x14u, v4, 0, -2147467259, v10);
  return v3;
}
