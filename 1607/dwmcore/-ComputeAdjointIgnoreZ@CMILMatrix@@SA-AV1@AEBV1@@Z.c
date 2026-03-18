/*
 * XREFs of ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x18001B9C0
 * Callers:
 *     ?Transfer@?$CVertexTransfer2@V?$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@$00$0A@VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180015224 (-Transfer@-$CVertexTransfer2@V-$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@$00$0A@VCVertexXYWC.c)
 *     ?Transfer@?$CVertexTransfer2@V?$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@$0A@$0A@VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x18001A0D0 (-Transfer@-$CVertexTransfer2@V-$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@$0A@$0A@VCVertexXYW.c)
 *     ?Transfer@?$CVertexTransfer2@V?$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@$01$0A@VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x1801985B4 (-Transfer@-$CVertexTransfer2@V-$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@$01$0A@VCVertexXYWC.c)
 *     ?Transfer@?$CVertexTransfer2@V?$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@$00$0A@VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x1801986E0 (-Transfer@-$CVertexTransfer2@V-$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@$00$0A@.c)
 *     ?Transfer@?$CVertexTransfer2@V?$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@$01$0A@VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180198860 (-Transfer@-$CVertexTransfer2@V-$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@$01$0A@.c)
 *     ?Transfer@?$CVertexTransfer2@V?$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@$0A@$0A@VCVertexXYWColorDUV2_XYZ_Tangent@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2_XYZ_Tangent@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x1801989D4 (-Transfer@-$CVertexTransfer2@V-$CScale3DOperator@VCVertexXYWColorDUV2_XYZ_Tangent@@$0A@@@$0A@$0A.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILMatrix::ComputeAdjointIgnoreZ(__int64 a1, float *a2)
{
  float v2; // xmm1_4
  float v3; // xmm14_4
  float v4; // xmm13_4
  float v5; // xmm11_4
  float v6; // xmm8_4
  float v7; // xmm5_4
  float v8; // xmm4_4
  float v9; // xmm2_4
  float v10; // xmm7_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm3_4

  v2 = a2[12];
  v3 = (float)(*a2 * a2[5]) - (float)(a2[1] * a2[4]);
  v4 = (float)(v2 * a2[1]) - (float)(a2[13] * *a2);
  v5 = (float)(a2[13] * a2[4]) - (float)(v2 * a2[5]);
  v6 = (float)(a2[3] * a2[4]) - (float)(a2[7] * *a2);
  v7 = a2[7] * a2[13];
  v8 = (float)(a2[15] * *a2) - (float)(a2[3] * v2);
  v9 = (float)(a2[7] * v2) - (float)(a2[15] * a2[4]);
  v10 = a2[3] * a2[13];
  v11 = (float)(a2[7] * a2[1]) - (float)(a2[3] * a2[5]);
  v12 = a2[15] * a2[1];
  v13 = a2[15] * a2[5];
  *(_DWORD *)(a1 + 8) = 0;
  *(float *)(a1 + 28) = v6;
  *(float *)(a1 + 48) = v5;
  *(float *)(a1 + 52) = v4;
  *(float *)(a1 + 4) = v10 - v12;
  *(float *)(a1 + 60) = v3;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(float *)a1 = v13 - v7;
  *(float *)(a1 + 12) = v11;
  *(float *)(a1 + 16) = v9;
  *(float *)(a1 + 20) = v8;
  *(_DWORD *)(a1 + 64) = 0;
  return a1;
}
