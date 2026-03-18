/*
 * XREFs of ?Transfer@?$CVertexTransfer2@V?$CScale2DOperator@VCVertexXYWColorDUV2@@$0A@$0A@@@$0A@$0A@VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180197954
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180057F40 (--$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@.c)
 * Callees:
 *     ?Transform2DAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBVCMILMatrix@@PEAV1@PEAUD2D_POINT_2F@@@Z @ 0x180020E04 (-Transform2DAndFillPosXYUV2@@YAXPEBVCVertexXYWColorDUV2@@PEBVCVertexAAFixupData@@AEBVCMILMatrix@.c)
 */

__int64 __fastcall CVertexTransfer2<CScale2DOperator<CVertexXYWColorDUV2,0,0>,0,0,CVertexXYWColorDUV2>::Transfer(
        __int64 *a1,
        const struct CMILMatrix *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  const struct CVertexAAFixupData *v5; // rsi
  __int64 v6; // rbp
  __int64 result; // rax
  struct D2D_POINT_2F v8; // [rsp+68h] [rbp+20h] BYREF

  v3 = a1[3];
  v4 = *a1;
  v5 = (const struct CVertexAAFixupData *)a1[1];
  if ( *((_DWORD *)a1 + 9) )
  {
    v6 = *((unsigned int *)a1 + 9);
    do
    {
      Transform2DAndFillPosXYUV2((const struct CVertexXYWColorDUV2 *)v4, v5, a2, (struct CVertexXYWColorDUV2 *)v3, &v8);
      *(_DWORD *)(v3 + 8) = 1065353216;
      v5 = (const struct CVertexAAFixupData *)((char *)v5 + 32);
      result = *(unsigned int *)(v4 + 12);
      v4 += 32LL;
      *(_DWORD *)(v3 + 12) = result;
      v3 += 32LL;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
