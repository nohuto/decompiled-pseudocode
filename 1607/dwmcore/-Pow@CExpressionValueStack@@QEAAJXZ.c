/*
 * XREFs of ?Pow@CExpressionValueStack@@QEAAJXZ @ 0x18015B968
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     powf_0 @ 0x1800BF686 (powf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Pow(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  const int *v3; // rdx
  struct CExpressionValue *v4; // rsi
  struct CExpressionValue *v5; // rax
  int v6; // ecx
  float v7; // xmm6_4
  unsigned int v9; // [rsp+20h] [rbp-28h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) < 2u )
  {
    v9 = 4934;
LABEL_3:
    v3 = 0LL;
LABEL_11:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, v3, 0, -2147467259, v9);
    return v1;
  }
  v4 = CExpressionValueStack::PeekStackValue(this, -1);
  v5 = CExpressionValueStack::PeekStackValue(this, 0);
  v6 = *((_DWORD *)v4 + 16);
  if ( v6 != *((_DWORD *)v5 + 16) )
  {
    v9 = 4958;
    goto LABEL_11;
  }
  if ( v6 != 18 )
  {
    v9 = 4992;
    goto LABEL_11;
  }
  v7 = powf_0(*(float *)v4, *(float *)v5);
  if ( _isnan(v7) )
  {
    v9 = 4978;
    goto LABEL_3;
  }
  *(float *)v4 = v7;
  *((_DWORD *)v4 + 16) = 18;
  *((_BYTE *)v4 + 68) = 1;
  --*((_DWORD *)this + 4);
  return v1;
}
