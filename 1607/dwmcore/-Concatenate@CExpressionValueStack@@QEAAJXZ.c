/*
 * XREFs of ?Concatenate@CExpressionValueStack@@QEAAJXZ @ 0x180159BCC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18008A450 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x1800C2508 (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Concatenate(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  const int *v2; // rdx
  CExpressionValueStack *v3; // r9
  struct CExpressionValue *v4; // rax
  __int64 v5; // r10
  int v6; // ecx
  __int128 v7; // xmm0
  __int64 v8; // r10
  __int64 v9; // r9
  unsigned int v11; // [rsp+20h] [rbp-28h]
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) >= 2u )
  {
    CExpressionValueStack::PeekStackValue(this, -1);
    v4 = CExpressionValueStack::PeekStackValue(v3, 0);
    v6 = *(_DWORD *)(v5 + 64);
    if ( v6 == *((_DWORD *)v4 + 16) )
    {
      if ( v6 == 71 )
      {
        D3DXQuaternionMultiply((struct D2DQuaternion *)&v12, (const struct D2DQuaternion *)v5, v4);
        v7 = v12;
        *(_DWORD *)(v8 + 64) = 71;
        *(_BYTE *)(v8 + 68) = 1;
        *(_OWORD *)v8 = v7;
        --*(_DWORD *)(v9 + 16);
        return v1;
      }
      v11 = 4208;
    }
    else
    {
      v11 = 4178;
    }
  }
  else
  {
    v11 = 4154;
    v2 = 0LL;
  }
  v1 = -2147467259;
  MilInstrumentationCheckHR(0x14u, v2, 0, -2147467259, v11);
  return v1;
}
