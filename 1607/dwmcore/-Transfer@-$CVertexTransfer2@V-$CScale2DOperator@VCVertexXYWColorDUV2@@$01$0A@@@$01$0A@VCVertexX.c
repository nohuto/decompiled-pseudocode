/*
 * XREFs of ?Transfer@?$CVertexTransfer2@V?$CScale2DOperator@VCVertexXYWColorDUV2@@$01$0A@@@$01$0A@VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180197864
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180057F40 (--$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@.c)
 * Callees:
 *     ?Transform2DAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBVCMILMatrix@@PEAV1@PEAUD2D_POINT_2F@@@Z @ 0x180020E04 (-Transform2DAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBVCMILMatrix@.c)
 */

__int64 __fastcall CVertexTransfer2<CScale2DOperator<CVertexXYWColorDUV2,2,0>,2,0,CVertexXYWColorDUV2>::Transfer(
        float *a1,
        const struct CMILMatrix *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  const struct CVertexAAFixupData *v5; // rbp
  float v6; // xmm6_4
  __int64 v7; // rsi
  unsigned int v8; // ecx
  __int64 result; // rax
  struct D2D_POINT_2F v10; // [rsp+30h] [rbp-38h] BYREF

  v3 = *((_QWORD *)a1 + 3);
  v4 = *(_QWORD *)a1;
  v5 = (const struct CVertexAAFixupData *)*((_QWORD *)a1 + 1);
  v6 = a1[8];
  if ( *((_DWORD *)a1 + 9) )
  {
    v7 = *((unsigned int *)a1 + 9);
    do
    {
      Transform2DAndFillPosXYUV2((const struct CVertexXYWColorDUV2 *)v4, v5, a2, (struct CVertexXYWColorDUV2 *)v3, &v10);
      *(_DWORD *)(v3 + 8) = 1065353216;
      v8 = *(_DWORD *)(v4 + 12);
      v4 += 32LL;
      v5 = (const struct CVertexAAFixupData *)((char *)v5 + 32);
      result = (unsigned int)(int)(float)(unsigned __int8)v8;
      *(_DWORD *)(v3 + 12) = result | (((int)(float)BYTE1(v8) | (((int)(float)BYTE2(v8) | ((int)(float)((float)HIBYTE(v8) * v6) << 8)) << 8)) << 8);
      v3 += 32LL;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
