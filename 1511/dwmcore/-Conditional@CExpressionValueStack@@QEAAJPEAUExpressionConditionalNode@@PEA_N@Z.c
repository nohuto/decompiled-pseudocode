/*
 * XREFs of ?Conditional@CExpressionValueStack@@QEAAJPEAUExpressionConditionalNode@@PEA_N@Z @ 0x18011AB80
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Conditional(
        CExpressionValueStack *this,
        struct ExpressionConditionalNode *a2,
        bool *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v3 = *((_DWORD *)this + 4);
  v4 = 0;
  if ( v3 )
  {
    v6 = (unsigned int)(v3 - 1);
    v7 = *((_QWORD *)this + 3);
    if ( *(_DWORD *)(v7 + 24 * v6) == 17 )
    {
      *a3 = *(_BYTE *)(v7 + 24 * v6 + 8);
      *((_DWORD *)this + 4) = v6;
      return v4;
    }
    v9 = 6906;
  }
  else
  {
    v9 = 6886;
  }
  v4 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v9);
  return v4;
}
