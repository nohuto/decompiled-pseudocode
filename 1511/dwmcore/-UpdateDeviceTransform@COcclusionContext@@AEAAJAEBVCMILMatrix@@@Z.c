/*
 * XREFs of ?UpdateDeviceTransform@COcclusionContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x18000AAFC
 * Callers:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18000DCEC (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     ?SetDeviceTransform@COcclusionContext@@AEAAJPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@@Z @ 0x18000B1CC (-SetDeviceTransform@COcclusionContext@@AEAAJPEBV-$CMatrix@UPageInPixels@CoordinateSpace@@UDevice.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::UpdateDeviceTransform(COcclusionContext *this, const struct CMILMatrix *a2)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // ebx
  _OWORD v9[4]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v10[64]; // [rsp+70h] [rbp-58h] BYREF

  v2 = *((_OWORD *)a2 + 1);
  v9[0] = *(_OWORD *)a2;
  v3 = *((_OWORD *)a2 + 2);
  v9[1] = v2;
  v4 = *((_OWORD *)a2 + 3);
  v9[2] = v3;
  v9[3] = v4;
  D2DMatrixMultiply((struct D2DMatrix *)v10, (COcclusionContext *)((char *)this + 524), (const struct D2DMatrix *)v9);
  v6 = COcclusionContext::SetDeviceTransform(v5, v10);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x77u);
  return v7;
}
