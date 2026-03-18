/*
 * XREFs of ?Transfer@?$CVertexTransfer2@V?$CScale2DOperator@VCVertexXYWColorDUV2@@$0A@$00@@$0A@$00VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x18001B0C0
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180057F40 (--$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@.c)
 * Callees:
 *     ?Transform@?$CScale2DOperator@VCVertexXYWColorDUV2@@$01$00@@QEAQXPEBT__m128@@0T2@1PEAT2@@Z @ 0x18001B1A0 (-Transform@-$CScale2DOperator@VCVertexXYWColorDUV2@@$01$00@@QEAQXPEBT__m128@@0T2@1PEAT2@@Z.c)
 */

__int64 __fastcall CVertexTransfer2<CScale2DOperator<CVertexXYWColorDUV2,0,1>,0,1,CVertexXYWColorDUV2>::Transfer(
        __int64 *a1,
        unsigned int *a2)
{
  unsigned int v2; // r10d
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbp
  __m128 v7; // xmm0
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  __m128 v10; // xmm2
  __int64 v11; // rbx
  int v12; // r10d
  int v13; // [rsp+20h] [rbp-48h]
  _OWORD v14[3]; // [rsp+30h] [rbp-38h] BYREF

  v2 = 0;
  result = *((unsigned int *)a1 + 9);
  v4 = *a1;
  v5 = a1[1];
  v6 = a1[3];
  v7 = (__m128)a2[4];
  v8 = (__m128)a2[5];
  v14[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v9 = _mm_unpacklo_ps(_mm_unpacklo_ps(v7, v7), _mm_unpacklo_ps(v8, v8));
  v10 = (__m128)a2[13];
  v14[1] = v9;
  v14[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v10, (__m128)0LL));
  if ( (_DWORD)result )
  {
    v11 = ((unsigned int)(result - 1) >> 1) + 1;
    do
    {
      result = CScale2DOperator<CVertexXYWColorDUV2,2,1>::Transform(
                 (unsigned int)v14,
                 16 * v2 + (unsigned int)v4,
                 (unsigned int)v5 + 16 * v2,
                 16 * v2 + (unsigned int)v6,
                 v13,
                 16LL * v2 + v6);
      v2 = v12 + 4;
      --v11;
    }
    while ( v11 );
  }
  return result;
}
