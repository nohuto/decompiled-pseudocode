/*
 * XREFs of ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x1800AE65C
 * Callers:
 *     ?PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z @ 0x180002E80 (-PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z.c)
 *     ?PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800032D0 (-PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MA.c)
 *     ?D2DSetWorldClip@CD2DContext@@IEAAXPEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x18007C754 (-D2DSetWorldClip@CD2DContext@@IEAAXPEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x18014FC34 (-SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801642D0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AreEqual(const struct D2D_RECT_F *a1, const struct D2D_RECT_F *a2)
{
  return a1->left == a2->left && a1->top == a2->top && a1->right == a2->right && a1->bottom == a2->bottom;
}
