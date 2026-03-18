/*
 * XREFs of ?Transform3DBounds@@YAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@W4Enum@MilBitmapBorderMode@@PEAV1@@Z @ 0x180125448
 * Callers:
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z @ 0x18002D784 (-FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18002DBD0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Transform2DBounds@@YAXAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@W4Enum@BufferingType@@PEAU2@@Z @ 0x180125D84 (-Transform2DBounds@@YAXAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@W4Enum@BufferingType@@PEAU2@@Z.c)
 */

char __fastcall Transform3DBounds(float *a1)
{
  char result; // al
  _OWORD *v2; // rcx
  int v3; // r9d
  __int64 v4; // r10
  _OWORD *v5; // r11
  _OWORD *v6; // r11
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a1);
  if ( result )
  {
    *v5 = *v2;
  }
  else
  {
    result = Transform2DBounds(v4, v2, v3 == 0, &v7);
    *v6 = v7;
  }
  return result;
}
