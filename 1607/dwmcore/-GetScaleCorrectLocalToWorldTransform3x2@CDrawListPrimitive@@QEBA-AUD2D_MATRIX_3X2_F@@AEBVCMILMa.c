/*
 * XREFs of ?GetScaleCorrectLocalToWorldTransform3x2@CDrawListPrimitive@@QEBA?AUD2D_MATRIX_3X2_F@@AEBVCMILMatrix@@@Z @ 0x18010F640
 * Callers:
 *     ??$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXYWColorDUV2_XYZ_Tangent@@AEBVCMILMatrix@@_NMPEBV2@@Z @ 0x180195AC4 (--$TransferVertices@VCVertexXYWColorDUV2_XYZ_Tangent@@@@YAXAEBVCDrawListPrimitive@@PEAVCVertexXY.c)
 * Callees:
 *     <none>
 */

struct D2D_MATRIX_3X2_F *__fastcall CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform3x2(
        CDrawListPrimitive *this,
        struct D2D_MATRIX_3X2_F *__return_ptr retstr,
        const struct CMILMatrix *a3)
{
  struct D2D_MATRIX_3X2_F *result; // rax
  float v4; // xmm2_4
  float v5; // xmm0_4
  unsigned __int64 v6; // xmm1_8
  float v7[10]; // [rsp+0h] [rbp-28h]

  result = retstr;
  v4 = 1.0 / *((float *)this + 24);
  v5 = 1.0 / *((float *)this + 23);
  v7[1] = v5 * *((float *)a3 + 1);
  v7[0] = v5 * *(float *)a3;
  v7[2] = v4 * *((float *)a3 + 4);
  v7[3] = v4 * *((float *)a3 + 5);
  v6 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 12), (__m128)*((unsigned int *)a3 + 13)).m128_u64[0];
  *(_OWORD *)&retstr->m11 = *(_OWORD *)v7;
  *(_QWORD *)&retstr->m[2][0] = v6;
  return result;
}
