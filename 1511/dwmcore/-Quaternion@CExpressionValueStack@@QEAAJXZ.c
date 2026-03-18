/*
 * XREFs of ?Quaternion@CExpressionValueStack@@QEAAJXZ @ 0x18011E160
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Quaternion(CExpressionValueStack *this)
{
  unsigned int v1; // r8d
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rsi
  unsigned int v7; // [rsp+20h] [rbp-28h]
  __int128 v8; // [rsp+30h] [rbp-18h]

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 < 4 )
  {
    v7 = 6134;
LABEL_9:
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, v7);
    return v2;
  }
  v4 = *((_QWORD *)this + 3);
  v5 = v4 + 24LL * (v1 - 4);
  if ( *(_DWORD *)v5 != 18
    || *(_DWORD *)(v4 + 24LL * (v1 - 3)) != 18
    || *(_DWORD *)(v4 + 24LL * (v1 - 2)) != 18
    || *(_DWORD *)(v4 + 24LL * (v1 - 1)) != 18 )
  {
    v7 = 6153;
    goto LABEL_9;
  }
  LODWORD(v8) = *(_DWORD *)(v5 + 8);
  DWORD1(v8) = *(_DWORD *)(v4 + 24LL * (v1 - 3) + 8);
  DWORD2(v8) = *(_DWORD *)(v4 + 24LL * (v1 - 2) + 8);
  HIDWORD(v8) = *(_DWORD *)(v4 + 24LL * (v1 - 1) + 8);
  CExpressionValue::SetDataType(v4 + 24LL * (v1 - 4));
  *(_BYTE *)(v5 + 4) = 1;
  *(_OWORD *)(v5 + 8) = v8;
  *((_DWORD *)this + 4) -= 3;
  return v2;
}
