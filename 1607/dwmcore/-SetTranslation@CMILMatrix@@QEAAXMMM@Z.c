/*
 * XREFs of ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x18005B478
 * Callers:
 *     ?GetRealization@CTranslateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180021F10 (-GetRealization@CTranslateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CTranslateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800229D0 (-GetRealization@CTranslateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180026AF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012EAB0 (-ApplyState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18012EEB0 (-RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x180140150 (-GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 *     ?GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180143F40 (-GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?DrawCommonRenderingEffect@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCVisual@@@Z @ 0x18014F1CC (-DrawCommonRenderingEffect@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCVisual@@@.c)
 *     ?DrawMask@CDropShadow@@AEAAJPEAVCDrawingContext@@PEAVCBlurLayer@@AEBUD2D_SIZE_F@@M@Z @ 0x18014F460 (-DrawMask@CDropShadow@@AEAAJPEAVCDrawingContext@@PEAVCBlurLayer@@AEBUD2D_SIZE_F@@M@Z.c)
 *     ?PushOffset@CBaseMatrixStack@@IEAAJMMM@Z @ 0x180163D54 (-PushOffset@CBaseMatrixStack@@IEAAJMMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::SetTranslation(CMILMatrix *this, float a2, float a3, float a4)
{
  __int128 v4; // [rsp+30h] [rbp-18h]

  *((_WORD *)this + 32) = 15700;
  *(_QWORD *)&v4 = __PAIR64__(LODWORD(a3), LODWORD(a2));
  *(_OWORD *)this = _xmm;
  *((_OWORD *)this + 1) = _xmm;
  *((_QWORD *)&v4 + 1) = __PAIR64__(LODWORD(FLOAT_1_0), LODWORD(a4));
  *((_OWORD *)this + 2) = _xmm;
  *((_OWORD *)this + 3) = v4;
}
