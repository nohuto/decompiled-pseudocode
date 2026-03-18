/*
 * XREFs of ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x18010F210
 * Callers:
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x18010FFE0 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x180110228 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x18010F2C8 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall CExpression::EnsureCacheBounds(CExpression *this, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v6; // ebx
  int v7; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v6 = 0;
  if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_3198205243_57931441_FeatureDescriptorDetails)
    && !*((_QWORD *)this + 21) )
  {
    v6 = -2147418113;
    v9 = 77;
LABEL_4:
    v7 = v6;
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v9);
    return v6;
  }
  if ( a3 > 0xFFFFFFFF )
  {
    v9 = 85;
LABEL_11:
    v7 = -2147024362;
    v6 = -2147024362;
    goto LABEL_12;
  }
  if ( (unsigned int)a3 + a2 < a2 )
  {
    v9 = 86;
    goto LABEL_11;
  }
  if ( (unsigned int)a3 + a2 > *((_DWORD *)this + 44) )
  {
    v6 = -2147483637;
    v9 = 91;
    goto LABEL_4;
  }
  return v6;
}
