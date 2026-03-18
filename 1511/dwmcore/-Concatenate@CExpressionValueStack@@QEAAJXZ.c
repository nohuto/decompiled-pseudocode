/*
 * XREFs of ?Concatenate@CExpressionValueStack@@QEAAJXZ @ 0x18011AAB0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x1800BF03C (-D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Concatenate(CExpressionValueStack *this)
{
  unsigned int v1; // edx
  unsigned int v2; // edi
  __int64 v4; // r8
  __int64 v5; // r14
  __int64 v6; // rdx
  __int128 v7; // xmm0
  unsigned int v9; // [rsp+20h] [rbp-28h]
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 >= 2 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = v4 + 24LL * (v1 - 2);
    v6 = 3LL * (v1 - 1);
    if ( *(_DWORD *)v5 == *(_DWORD *)(v4 + 8 * v6) )
    {
      if ( *(_DWORD *)v5 == 71 )
      {
        D3DXQuaternionMultiply(
          (struct D2DQuaternion *)&v10,
          (const struct D2DQuaternion *)(v5 + 8),
          (const struct D2DQuaternion *)(v4 + 8 * v6 + 8));
        CExpressionValue::SetDataType(v5);
        v7 = v10;
        *(_BYTE *)(v5 + 4) = 1;
        *(_OWORD *)(v5 + 8) = v7;
        --*((_DWORD *)this + 4);
        return v2;
      }
      v9 = 4596;
    }
    else
    {
      v9 = 4566;
    }
  }
  else
  {
    v9 = 4542;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v9);
  return v2;
}
