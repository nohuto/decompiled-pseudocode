/*
 * XREFs of ?Transfer@?$CVertexTransfer2@V?$CScale2DOperator@VCVertexXYWColorDUV2@@$00$00@@$00$00VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x18001AF50
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180057F40 (--$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@.c)
 * Callees:
 *     ?Transform@?$CScale2DOperator@VCVertexXYWColorDUV2@@$01$00@@QEAQXPEBT__m128@@0T2@1PEAT2@@Z @ 0x18001B1A0 (-Transform@-$CScale2DOperator@VCVertexXYWColorDUV2@@$01$00@@QEAQXPEBT__m128@@0T2@1PEAT2@@Z.c)
 */

__int64 __fastcall CVertexTransfer2<CScale2DOperator<CVertexXYWColorDUV2,1,1>,1,1,CVertexXYWColorDUV2>::Transfer(
        __int64 *a1,
        unsigned int *a2)
{
  unsigned int v2; // r9d
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __m128 v6; // xmm0
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  __m128 v9; // xmm2
  __int64 result; // rax
  int v11; // r9d
  __int64 v12; // r10
  int v13; // [rsp+20h] [rbp-68h]
  _OWORD v14[3]; // [rsp+30h] [rbp-58h] BYREF

  v2 = 0;
  v3 = *a1;
  v4 = a1[1];
  v5 = a1[3];
  v6 = (__m128)a2[4];
  v7 = (__m128)a2[5];
  v14[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)*a2), _mm_unpacklo_ps((__m128)a2[1], (__m128)a2[1]));
  v8 = _mm_unpacklo_ps(_mm_unpacklo_ps(v6, v6), _mm_unpacklo_ps(v7, v7));
  v9 = (__m128)a2[13];
  v14[1] = v8;
  result = *((unsigned int *)a1 + 9);
  v14[2] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[12], (__m128)0LL), _mm_unpacklo_ps(v9, (__m128)0LL));
  if ( (_DWORD)result )
  {
    do
    {
      result = CScale2DOperator<CVertexXYWColorDUV2,2,1>::Transform(
                 (unsigned int)v14,
                 16 * v2 + (unsigned int)v3,
                 (unsigned int)v4 + 16 * v2,
                 v2,
                 v13,
                 16LL * v2 + v5);
      v2 = v11 + 4;
    }
    while ( v12 != 1 );
  }
  return result;
}
