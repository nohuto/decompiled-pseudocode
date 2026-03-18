/*
 * XREFs of ?Transfer@?$CVertexTransfer2@V?$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@$00$0A@VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180015224
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180057F40 (--$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@.c)
 * Callees:
 *     ?Transform@?$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@QEAAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@PEBVCMILMatrix@@PEAV2@@Z @ 0x18001535C (-Transform@-$CScale3DOperator@VCVertexXYWColorDUV2@@$0A@@@QEAAXPEBVCVertexXYWColorDUV2@@PEBVCVer.c)
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x18001B9C0 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 */

__int64 __fastcall CVertexTransfer2<CScale3DOperator<CVertexXYWColorDUV2,0>,1,0,CVertexXYWColorDUV2>::Transfer(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  bool v6; // zf
  float v7; // xmm6_4
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 result; // rax
  __int64 v12; // r14
  __int64 v13; // rdi
  unsigned int v14; // ecx
  _OWORD v15[4]; // [rsp+30h] [rbp-C8h] BYREF
  int v16; // [rsp+70h] [rbp-88h]
  __int64 v17; // [rsp+80h] [rbp-78h] BYREF

  v2 = a1[3];
  v3 = *a1;
  v4 = CMILMatrix::ComputeAdjointIgnoreZ(&v17, a2, a1);
  v6 = *(_DWORD *)(v5 + 36) == 0;
  v7 = *(float *)(v5 + 32);
  v8 = *(_OWORD *)(v4 + 16);
  v15[0] = *(_OWORD *)v4;
  v9 = *(_OWORD *)(v4 + 32);
  v15[1] = v8;
  v10 = *(_OWORD *)(v4 + 48);
  result = *(unsigned int *)(v4 + 64);
  v15[2] = v9;
  v15[3] = v10;
  v16 = result;
  if ( !v6 )
  {
    v12 = *(unsigned int *)(v5 + 36);
    v13 = v2 - v3;
    do
    {
      CScale3DOperator<CVertexXYWColorDUV2,0>::Transform((CMILMatrix *)v15, v13 + v3);
      v14 = *(_DWORD *)(v3 + 12);
      result = (unsigned int)(int)(float)((float)(unsigned __int8)v14 * v7);
      *(_DWORD *)(v13 + v3 + 12) = result | (((int)(float)((float)BYTE1(v14) * v7) | (((int)(float)((float)BYTE2(v14)
                                                                                                  * v7) | ((int)(float)((float)HIBYTE(v14) * v7) << 8)) << 8)) << 8);
      v3 += 32LL;
      --v12;
    }
    while ( v12 );
  }
  return result;
}
