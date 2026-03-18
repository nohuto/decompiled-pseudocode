/*
 * XREFs of ?UpdateDeviceTransform@COcclusionContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x18001199C
 * Callers:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x1800036F8 (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180025320 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@@Z @ 0x18005C180 (-SetDeviceTransform@COcclusionContext@@QEAAJPEBV-$CMatrix@UPageInPixels@CoordinateSpace@@UDevice.c)
 */

__int64 __fastcall COcclusionContext::UpdateDeviceTransform(COcclusionContext *this, const struct CMILMatrix *a2)
{
  __int128 v2; // xmm0
  int v3; // eax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  int v8; // eax
  unsigned int v9; // ebx
  _OWORD v11[4]; // [rsp+30h] [rbp-A8h] BYREF
  int v12; // [rsp+70h] [rbp-68h]
  _BYTE v13[64]; // [rsp+80h] [rbp-58h] BYREF
  int v14; // [rsp+C0h] [rbp-18h]

  v2 = *(_OWORD *)a2;
  v3 = *((_DWORD *)a2 + 16);
  v5 = *((_OWORD *)a2 + 1);
  v14 = 0;
  v11[0] = v2;
  v6 = *((_OWORD *)a2 + 2);
  v12 = v3;
  v11[1] = v5;
  v7 = *((_OWORD *)a2 + 3);
  v11[2] = v6;
  v11[3] = v7;
  CMILMatrix::Multiply(
    (COcclusionContext *)((char *)this + 676),
    (const struct CMILMatrix *)v11,
    (struct CMILMatrix *)v13);
  v8 = COcclusionContext::SetDeviceTransform(this, v13);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x77u);
  return v9;
}
