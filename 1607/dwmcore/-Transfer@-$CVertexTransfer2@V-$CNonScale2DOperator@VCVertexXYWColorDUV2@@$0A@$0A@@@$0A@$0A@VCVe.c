/*
 * XREFs of ?Transfer@?$CVertexTransfer2@V?$CNonScale2DOperator@VCVertexXYWColorDUV2@@$0A@$0A@@@$0A@$0A@VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180196848
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180057F40 (--$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVertexTransfer2<CNonScale2DOperator<CVertexXYWColorDUV2,0,0>,0,0,CVertexXYWColorDUV2>::Transfer(
        __int64 *a1,
        float *a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // r10
  float v5; // xmm2_4
  __int64 result; // rax

  v2 = a1[3];
  v3 = *a1;
  if ( *((_DWORD *)a1 + 9) )
  {
    v4 = *((unsigned int *)a1 + 9);
    do
    {
      *(float *)v2 = (float)((float)(*(float *)v3 * *a2) + (float)(a2[4] * *(float *)(v3 + 4))) + a2[12];
      v5 = (float)((float)(*(float *)v3 * a2[1]) + (float)(a2[5] * *(float *)(v3 + 4))) + a2[13];
      *(_DWORD *)(v2 + 8) = 1065353216;
      *(float *)(v2 + 4) = v5;
      *(_QWORD *)(v2 + 16) = *(_QWORD *)(v3 + 16);
      *(_QWORD *)(v2 + 24) = *(_QWORD *)(v3 + 24);
      result = *(unsigned int *)(v3 + 12);
      v3 += 32LL;
      *(_DWORD *)(v2 + 12) = result;
      v2 += 32LL;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
