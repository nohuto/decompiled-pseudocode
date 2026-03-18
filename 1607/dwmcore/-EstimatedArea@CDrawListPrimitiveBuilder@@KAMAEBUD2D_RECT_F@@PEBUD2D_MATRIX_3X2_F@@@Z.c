/*
 * XREFs of ?EstimatedArea@CDrawListPrimitiveBuilder@@KAMAEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B0BFC
 * Callers:
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCDrawListCache@@@Z @ 0x180094B10 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?Insert@CDrawListPrimitiveBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18011115C (-Insert@CDrawListPrimitiveBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     sqrtf_0 @ 0x1800BF6B6 (sqrtf_0.c)
 */

float __fastcall CDrawListPrimitiveBuilder::EstimatedArea(
        const struct D2D_RECT_F *a1,
        const struct D2D_MATRIX_3X2_F *a2)
{
  float v3; // xmm6_4
  float v5; // xmm1_4

  v3 = FLOAT_1_0;
  v5 = FLOAT_1_0;
  if ( a2 )
  {
    v3 = sqrtf_0((float)(a2->m11 * a2->m11) + (float)(a2->m12 * a2->m12));
    v5 = sqrtf_0((float)(a2->m21 * a2->m21) + (float)(a2->m22 * a2->m22));
  }
  return (float)((float)(a1->bottom - a1->top) * v5) * (float)((float)(a1->right - a1->left) * v3);
}
