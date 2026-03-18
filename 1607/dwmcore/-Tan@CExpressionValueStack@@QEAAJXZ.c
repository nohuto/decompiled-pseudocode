/*
 * XREFs of ?Tan@CExpressionValueStack@@QEAAJXZ @ 0x18015C73C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     tanf_0 @ 0x1800BF6CE (tanf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Tan(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  struct CExpressionValue *v2; // rax
  const int *v3; // rdx
  struct CExpressionValue *v4; // rdi
  float v5; // xmm6_4
  unsigned int v7; // [rsp+20h] [rbp-28h]

  v1 = 0;
  if ( !*((_DWORD *)this + 4) )
  {
    v7 = 4518;
LABEL_8:
    v3 = 0LL;
    goto LABEL_9;
  }
  v2 = CExpressionValueStack::PeekStackValue(this, 0);
  v4 = v2;
  if ( *((_DWORD *)v2 + 16) != 18 )
  {
    v7 = 4560;
LABEL_9:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, v3, 0, -2147467259, v7);
    return v1;
  }
  v5 = tanf_0(*(float *)v2);
  if ( _isnan(v5) )
  {
    v7 = 4545;
    goto LABEL_8;
  }
  *(float *)v4 = v5;
  *((_DWORD *)v4 + 16) = 18;
  *((_BYTE *)v4 + 68) = 1;
  return v1;
}
