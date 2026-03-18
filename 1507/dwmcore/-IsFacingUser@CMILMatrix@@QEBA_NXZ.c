/*
 * XREFs of ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x1800F3BC0
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800F2618 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@AEBVCMILMatrix@@@Z @ 0x180103640 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@AEBVCMILMatrix@@@Z.c)
 *     ?IsBackfaced@CVisual@@IEBA_NXZ @ 0x18010432C (-IsBackfaced@CVisual@@IEBA_NXZ.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x18011B75C (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?GetDirection@CBspNode@@UEBA?AW4WalkDirection@@AEBVCMILMatrix@@W42@@Z @ 0x180158F10 (-GetDirection@CBspNode@@UEBA-AW4WalkDirection@@AEBVCMILMatrix@@W42@@Z.c)
 * Callees:
 *     ?IsInvertableDeterminant@CBaseMatrix@@SA_NM@Z @ 0x18000E600 (-IsInvertableDeterminant@CBaseMatrix@@SA_NM@Z.c)
 *     ?D2DMatrixDeterminant@@YAMPEBUD2DMatrix@@@Z @ 0x18009BAD0 (-D2DMatrixDeterminant@@YAMPEBUD2DMatrix@@@Z.c)
 */

bool __fastcall CMILMatrix::IsFacingUser(CMILMatrix *this)
{
  int v2; // ebx
  float v3; // xmm6_4

  v2 = 0;
  v3 = D2DMatrixDeterminant(this);
  if ( CBaseMatrix::IsInvertableDeterminant(v3) )
  {
    LOBYTE(v2) = v3 < 0.0;
    LOBYTE(v2) = (float)((float)((float)((float)((float)(*((float *)this + 4) * *((float *)this + 3))
                                               - (float)(*(float *)this * *((float *)this + 7)))
                                       * *((float *)this + 13))
                               + (float)((float)((float)(*((float *)this + 1) * *((float *)this + 7))
                                               - (float)(*((float *)this + 3) * *((float *)this + 5)))
                                       * *((float *)this + 12)))
                       + (float)((float)((float)(*(float *)this * *((float *)this + 5))
                                       - (float)(*((float *)this + 4) * *((float *)this + 1)))
                               * *((float *)this + 15))) < 0.0 == v2;
  }
  return v2;
}
