/*
 * XREFs of ?EstimatedArea@@YAMPEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005DB20
 * Callers:
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18007627C (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 * Callees:
 *     sqrtf_0 @ 0x180099BF6 (sqrtf_0.c)
 */

float __fastcall EstimatedArea(const struct D2D_RECT_F *a1, const struct D2D_MATRIX_3X2_F *a2)
{
  float v4; // xmm6_4

  v4 = sqrtf_0((float)(a2->m11 * a2->m11) + (float)(a2->m12 * a2->m12));
  return (float)((float)(a1->bottom - a1->top) * sqrtf_0((float)(a2->m21 * a2->m21) + (float)(a2->m22 * a2->m22)))
       * (float)((float)(a1->right - a1->left) * v4);
}
