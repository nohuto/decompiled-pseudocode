/*
 * XREFs of ?Square@CExpressionValueStack@@QEAAJXZ @ 0x18015C484
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Square(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  const int *v2; // rdx
  struct CExpressionValue *v3; // rax
  float v4; // xmm0_4
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) )
  {
    v3 = CExpressionValueStack::PeekStackValue(this, 0);
    if ( *((_DWORD *)v3 + 16) == 18 )
    {
      v4 = *(float *)v3 * *(float *)v3;
      *((_DWORD *)v3 + 16) = 18;
      *((_BYTE *)v3 + 68) = 1;
      *(float *)v3 = v4;
      return v1;
    }
    v6 = 5056;
  }
  else
  {
    v6 = 5028;
    v2 = 0LL;
  }
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, v2, 0, -2147467259, v6);
  return v1;
}
