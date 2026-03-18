/*
 * XREFs of ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x18001970C
 * Callers:
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x180019790 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x18008A020 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpression::EnsureCacheBounds(CExpression *this, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // r9d
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( !*((_QWORD *)this + 40) )
  {
    v3 = -2147418113;
    v6 = 512;
LABEL_3:
    v4 = v3;
LABEL_11:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v6);
    return v3;
  }
  if ( a3 > 0xFFFFFFFF )
  {
    v6 = 515;
LABEL_10:
    v4 = -2147024362;
    v3 = -2147024362;
    goto LABEL_11;
  }
  if ( (unsigned int)a3 + a2 < a2 )
  {
    v6 = 516;
    goto LABEL_10;
  }
  if ( (unsigned int)a3 + a2 > *((_DWORD *)this + 82) )
  {
    v3 = -2147483637;
    v6 = 521;
    goto LABEL_3;
  }
  return v3;
}
