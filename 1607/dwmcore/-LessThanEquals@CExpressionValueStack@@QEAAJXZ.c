/*
 * XREFs of ?LessThanEquals@CExpressionValueStack@@QEAAJXZ @ 0x18015AB58
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::LessThanEquals(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  const int *v2; // rdx
  CExpressionValueStack *v3; // r9
  struct CExpressionValue *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // ecx
  bool v8; // cf
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) >= 2u )
  {
    CExpressionValueStack::PeekStackValue(this, -1);
    v4 = CExpressionValueStack::PeekStackValue(v3, 0);
    v7 = *(_DWORD *)(v6 + 64);
    if ( v7 == *((_DWORD *)v4 + 16) )
    {
      if ( v7 == 18 )
      {
        v8 = *(float *)v4 < *(float *)v6;
        *(_DWORD *)(v6 + 64) = 17;
        *(_BYTE *)(v6 + 68) = 1;
        *(_BYTE *)v6 = !v8;
        --*(_DWORD *)(v5 + 16);
        return v1;
      }
      v10 = 1996;
    }
    else
    {
      v10 = 1976;
    }
  }
  else
  {
    v10 = 1947;
    v2 = 0LL;
  }
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, v2, 0, -2147467259, v10);
  return v1;
}
