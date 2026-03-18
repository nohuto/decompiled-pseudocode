/*
 * XREFs of ?Transfer@?$CVertexTransfer2@V?$CNonScale2DOperator@VCVertexXYWColorDUV2@@$01$0A@@@$01$0A@VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x18019674C
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180057F40 (--$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVertexTransfer2<CNonScale2DOperator<CVertexXYWColorDUV2,2,0>,2,0,CVertexXYWColorDUV2>::Transfer(
        float *a1,
        float *a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  float v4; // xmm4_4
  __int64 v5; // r10
  float v6; // xmm2_4
  unsigned int v7; // ecx
  __int64 result; // rax

  v2 = *((_QWORD *)a1 + 3);
  v3 = *(_QWORD *)a1;
  v4 = a1[8];
  if ( *((_DWORD *)a1 + 9) )
  {
    v5 = *((unsigned int *)a1 + 9);
    do
    {
      *(float *)v2 = (float)((float)(*(float *)v3 * *a2) + (float)(a2[4] * *(float *)(v3 + 4))) + a2[12];
      v6 = (float)((float)(*(float *)v3 * a2[1]) + (float)(a2[5] * *(float *)(v3 + 4))) + a2[13];
      *(_DWORD *)(v2 + 8) = 1065353216;
      *(float *)(v2 + 4) = v6;
      *(_QWORD *)(v2 + 16) = *(_QWORD *)(v3 + 16);
      *(_QWORD *)(v2 + 24) = *(_QWORD *)(v3 + 24);
      v7 = *(_DWORD *)(v3 + 12);
      v3 += 32LL;
      result = (unsigned int)(int)(float)(unsigned __int8)v7;
      *(_DWORD *)(v2 + 12) = result | (((int)(float)BYTE1(v7) | (((int)(float)BYTE2(v7) | ((int)(float)((float)HIBYTE(v7) * v4) << 8)) << 8)) << 8);
      v2 += 32LL;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
