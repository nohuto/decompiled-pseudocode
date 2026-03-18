/*
 * XREFs of ?Slerp@CExpressionValueStack@@QEAAJXZ @ 0x18015C32C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z @ 0x180188794 (-D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Slerp(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  const int *v3; // rdx
  struct CExpressionValue *v4; // rsi
  struct CExpressionValue *v5; // rax
  __int64 v6; // r9
  int v7; // ecx
  __int128 v8; // xmm0
  unsigned int v10; // [rsp+20h] [rbp-28h]
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) < 3u )
  {
    v10 = 4056;
    v3 = 0LL;
LABEL_9:
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, v3, 0, -2147467259, v10);
    return v1;
  }
  v4 = CExpressionValueStack::PeekStackValue(this, -2);
  CExpressionValueStack::PeekStackValue(this, -1);
  v5 = CExpressionValueStack::PeekStackValue(this, 0);
  v7 = *((_DWORD *)v4 + 16);
  if ( *((_DWORD *)v5 + 16) != 18 || v7 != *(_DWORD *)(v6 + 64) )
  {
    v10 = 4082;
    goto LABEL_9;
  }
  if ( v7 != 71 )
  {
    v10 = 4114;
    goto LABEL_9;
  }
  D3DXQuaternionSlerp((struct D2DQuaternion *)&v11, v4, (const struct D2DQuaternion *)v6, *(float *)v5);
  v8 = v11;
  *((_DWORD *)v4 + 16) = 71;
  *((_BYTE *)v4 + 68) = 1;
  *(_OWORD *)v4 = v8;
  *((_DWORD *)this + 4) -= 2;
  return v1;
}
