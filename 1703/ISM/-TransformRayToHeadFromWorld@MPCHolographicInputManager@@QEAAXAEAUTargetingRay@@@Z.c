/*
 * XREFs of ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x18004CB14
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004B610 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 *     ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x18005223C (-GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUHitTestResult3D@@Ufl.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall MPCHolographicInputManager::TransformRayToHeadFromWorld(
        MPCHolographicInputManager *this,
        struct TargetingRay *a2,
        __int64 a3,
        const char *a4)
{
  float v4; // xmm4_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm9_4
  float v8; // xmm3_4
  float v9; // xmm8_4
  float v10; // xmm4_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm8_4
  float v14; // xmm2_4
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !*((_BYTE *)this + 2160) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x30A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    JUMPOUT(0x18004CC6DLL);
  }
  v4 = *((float *)a2 + 4);
  v5 = *((float *)a2 + 3);
  v6 = *((float *)a2 + 5);
  v7 = (float)((float)(v4 * *((float *)this + 22)) + (float)(v5 * *((float *)this + 18)))
     + (float)(v6 * *((float *)this + 26));
  v8 = *((float *)a2 + 1);
  v9 = v8 * *((float *)this + 22);
  v10 = (float)((float)(v4 * *((float *)this + 21)) + (float)(v5 * *((float *)this + 17)))
      + (float)(v6 * *((float *)this + 25));
  v11 = *((float *)a2 + 2);
  v12 = (float)((float)((float)(v8 * *((float *)this + 20)) + (float)(*(float *)a2 * *((float *)this + 16)))
              + (float)(v11 * *((float *)this + 24)))
      + *((float *)this + 28);
  v13 = (float)((float)(v9 + (float)(*(float *)a2 * *((float *)this + 18))) + (float)(v11 * *((float *)this + 26)))
      + *((float *)this + 30);
  v14 = (float)((float)((float)(*((float *)a2 + 1) * *((float *)this + 21))
                      + (float)(*(float *)a2 * *((float *)this + 17)))
              + (float)(v11 * *((float *)this + 25)))
      + *((float *)this + 29);
  *((float *)a2 + 3) = (float)((float)(*((float *)a2 + 4) * *((float *)this + 20)) + (float)(v5 * *((float *)this + 16)))
                     + (float)(*((float *)a2 + 5) * *((float *)this + 24));
  *((float *)a2 + 2) = v13;
  *((float *)a2 + 5) = v7;
  *((float *)a2 + 1) = v14;
  *(float *)a2 = v12;
  *((float *)a2 + 4) = v10;
}
