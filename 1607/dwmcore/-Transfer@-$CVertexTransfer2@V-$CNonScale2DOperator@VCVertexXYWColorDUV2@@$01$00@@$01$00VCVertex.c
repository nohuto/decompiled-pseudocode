/*
 * XREFs of ?Transfer@?$CVertexTransfer2@V?$CNonScale2DOperator@VCVertexXYWColorDUV2@@$01$00@@$01$00VCVertexXYWColorDUV2@@@@SAXPEBV?$CCommonTransferParameters@VCVertexXYWColorDUV2@@@@AEBVCMILMatrix@@PEBV3@2@Z @ 0x180196590
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180057F40 (--$TransferVertices@VCVertexXYWColorDUV2@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2@@.c)
 * Callees:
 *     ?Transform@?$CNonScale2DOperator@VCVertexXYWColorDUV2@@$01$00@@QEAQXPEBT__m128@@0T2@1PEAT2@@Z @ 0x180198AE4 (-Transform@-$CNonScale2DOperator@VCVertexXYWColorDUV2@@$01$00@@QEAQXPEBT__m128@@0T2@1PEAT2@@Z.c)
 */

__int64 __fastcall CVertexTransfer2<CNonScale2DOperator<CVertexXYWColorDUV2,2,1>,2,1,CVertexXYWColorDUV2>::Transfer(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 v2; // r11
  unsigned int v3; // r9d
  __int64 v4; // rbx
  __int64 v5; // rdi
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __int64 result; // rax
  int v10; // r9d
  __int64 v11; // r10
  int v12; // [rsp+20h] [rbp-98h]
  _OWORD v13[8]; // [rsp+30h] [rbp-88h] BYREF

  v2 = *a1;
  v3 = 0;
  v4 = a1[1];
  v5 = a1[3];
  v6 = (__m128)a2[5];
  v13[0] = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)0LL), _mm_unpacklo_ps((__m128)a2[1], (__m128)0LL));
  v7 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)a2[4], (__m128)0LL), _mm_unpacklo_ps(v6, (__m128)0LL));
  v8 = (__m128)a2[13];
  v13[1] = v7;
  result = *((unsigned int *)a1 + 9);
  v13[2] = _mm_unpacklo_ps(
             _mm_unpacklo_ps((__m128)a2[12], (__m128)LODWORD(FLOAT_1_0)),
             _mm_unpacklo_ps(v8, (__m128)0LL));
  if ( (_DWORD)result )
  {
    do
    {
      result = CNonScale2DOperator<CVertexXYWColorDUV2,2,1>::Transform(
                 (unsigned int)v13,
                 16 * v3 + (unsigned int)v2,
                 (unsigned int)v4 + 16 * v3,
                 v3,
                 v12,
                 16LL * v3 + v5);
      v3 = v10 + 4;
    }
    while ( v11 != 1 );
  }
  return result;
}
