/*
 * XREFs of ?Vector4@CExpressionValueStack@@QEAAJXZ @ 0x18015CA04
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector4(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  const int *v2; // rdx
  CExpressionValueStack *v3; // r9
  struct CExpressionValue *v4; // rdi
  CExpressionValueStack *v5; // r9
  struct CExpressionValue *v6; // rsi
  CExpressionValueStack *v7; // r9
  struct CExpressionValue *v8; // rax
  __int64 v9; // r9
  __int64 v10; // r10
  unsigned int v12; // [rsp+20h] [rbp-28h]
  __int128 v13; // [rsp+30h] [rbp-18h]

  v1 = 0;
  if ( *((_DWORD *)this + 4) < 4u )
  {
    v12 = 5492;
    v2 = 0LL;
LABEL_9:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, v2, 0, -2147467259, v12);
    return v1;
  }
  CExpressionValueStack::PeekStackValue(this, -3);
  v4 = CExpressionValueStack::PeekStackValue(v3, -2);
  v6 = CExpressionValueStack::PeekStackValue(v5, -1);
  v8 = CExpressionValueStack::PeekStackValue(v7, 0);
  if ( *(_DWORD *)(v10 + 64) != 18
    || *((_DWORD *)v4 + 16) != 18
    || *((_DWORD *)v6 + 16) != 18
    || *((_DWORD *)v8 + 16) != 18 )
  {
    v12 = 5511;
    goto LABEL_9;
  }
  LODWORD(v13) = *(_DWORD *)v10;
  DWORD1(v13) = *(_DWORD *)v4;
  DWORD2(v13) = *(_DWORD *)v6;
  HIDWORD(v13) = *(_DWORD *)v8;
  *(_DWORD *)(v10 + 64) = 69;
  *(_BYTE *)(v10 + 68) = 1;
  *(_OWORD *)v10 = v13;
  *(_DWORD *)(v9 + 16) -= 3;
  return v1;
}
