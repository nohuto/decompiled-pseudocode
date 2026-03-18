/*
 * XREFs of ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x18000C16C
 * Callers:
 *     ?GetInverseTransform@CHitTestContext@@AEAA_NPEAVMatrix3x2F@D2D1@@@Z @ 0x18000A898 (-GetInverseTransform@CHitTestContext@@AEAA_NPEAVMatrix3x2F@D2D1@@@Z.c)
 *     ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBUMilPoint2F@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@11PEAV3@2@Z @ 0x18011DDF0 (-CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXA.c)
 * Callees:
 *     <none>
 */

bool __fastcall D2D1::Matrix3x2F::Invert(D2D1_MATRIX_3X2_F *this)
{
  return D2D1InvertMatrix(this);
}
