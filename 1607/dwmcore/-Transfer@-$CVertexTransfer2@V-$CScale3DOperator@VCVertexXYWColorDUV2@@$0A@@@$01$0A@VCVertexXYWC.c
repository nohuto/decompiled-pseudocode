/*
 * XREFs of ?Transfer@?$CVertexTransfer2@V?$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@$01$0A@VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x1801985B4
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180057F40 (--$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@.c)
 * Callees:
 *     ?Transform@?$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@QEAAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEBVCMILMatrix@@PEAV2@@Z @ 0x18001535C (-Transform@-$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@QEAAXPEBVCVertexXYWColorDUV2@@PEBVCVer.c)
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x18001B9C0 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 */

__int64 __fastcall CVertexTransfer2<CScale3DOperator<CVertexXYWColorDUV2,0>,2,0,CVertexXYWColorDUV2>::Transfer(
        __int64 *a1,
        float *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r8
  bool v8; // zf
  float v9; // xmm6_4
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 result; // rax
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdi
  unsigned int v17; // ecx
  _OWORD v18[4]; // [rsp+30h] [rbp-C8h] BYREF
  int v19; // [rsp+70h] [rbp-88h]
  __int64 v20; // [rsp+80h] [rbp-78h] BYREF

  v2 = a1[3];
  v3 = *a1;
  v5 = a1[1];
  v6 = CMILMatrix::ComputeAdjointIgnoreZ((__int64)&v20, a2);
  v8 = *(_DWORD *)(v7 + 36) == 0;
  v9 = *(float *)(v7 + 32);
  v10 = *(_OWORD *)(v6 + 16);
  v18[0] = *(_OWORD *)v6;
  v11 = *(_OWORD *)(v6 + 32);
  v18[1] = v10;
  v12 = *(_OWORD *)(v6 + 48);
  result = *(unsigned int *)(v6 + 64);
  v18[2] = v11;
  v18[3] = v12;
  v19 = result;
  if ( !v8 )
  {
    v14 = *(unsigned int *)(v7 + 36);
    v15 = v5 - v3;
    v16 = v2 - v3;
    do
    {
      CScale3DOperator<CVertexXYWColorDUV2,0>::Transform(
        (CMILMatrix *)v18,
        (const struct D2D_POINT_2F *)v3,
        (const struct D2D_POINT_2F *)(v15 + v3),
        (CMILMatrix *)a2,
        v16 + v3);
      v17 = *(_DWORD *)(v3 + 12);
      result = (unsigned int)(int)(float)(unsigned __int8)v17;
      *(_DWORD *)(v16 + v3 + 12) = result | (((int)(float)BYTE1(v17) | (((int)(float)BYTE2(v17) | ((int)(float)((float)HIBYTE(v17) * v9) << 8)) << 8)) << 8);
      v3 += 32LL;
      --v14;
    }
    while ( v14 );
  }
  return result;
}
