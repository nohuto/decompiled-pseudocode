/*
 * XREFs of ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x18012A9F8
 * Callers:
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x18012B334 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x18012B5E0 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpression::EnsureCacheBounds(CExpression *this, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // [rsp+20h] [rbp-18h]

  if ( a3 > 0xFFFFFFFF )
  {
    v5 = 74;
LABEL_8:
    v3 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v5);
    return v3;
  }
  if ( (unsigned int)a3 + a2 < a2 )
  {
    v5 = 75;
    goto LABEL_8;
  }
  if ( (unsigned int)a3 + a2 <= *((_DWORD *)this + 44) )
  {
    return 0;
  }
  else
  {
    v3 = -2147483637;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147483637, 0x50u);
  }
  return v3;
}
