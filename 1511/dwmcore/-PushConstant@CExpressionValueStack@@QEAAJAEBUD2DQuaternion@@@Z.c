/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DQuaternion@@@Z @ 0x18011DD64
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SetQuaternionValue@CKeyframeAnimation@@UEAAJMMMM@Z @ 0x18012C3C0 (-SetQuaternionValue@CKeyframeAnimation@@UEAAJMMMM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z @ 0x180119D78 (-CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, const struct D2DQuaternion *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int128 v7; // xmm0

  v4 = CExpressionValueStack::CheckAvailableStackSpace(this);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = *((_QWORD *)this + 3) + 24LL * (unsigned int)(*((_DWORD *)this + 4))++;
    CExpressionValue::SetDataType(v6);
    v7 = *(_OWORD *)a2;
    *(_BYTE *)(v6 + 4) = 1;
    *(_OWORD *)(v6 + 8) = v7;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x3D7u);
  }
  return v5;
}
