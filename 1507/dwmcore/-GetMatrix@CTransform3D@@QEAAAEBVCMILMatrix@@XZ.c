/*
 * XREFs of ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ @ 0x18001AEB0
 * Callers:
 *     ?GetRealization@CTransform3DGroup@@MEAAXPEAVCMILMatrix@@@Z @ 0x18000FFE0 (-GetRealization@CTransform3DGroup@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@@Z @ 0x180017A14 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@@Z.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x18001FD48 (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x18001FE90 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x180029720 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x180034EC0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x1800377D0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?GetTilePropertyCurrentValues@CTileBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBrushMappingMode@@2PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@3PEAW43MilStretch@@PEAW43MilTileMode@@PEAW43MilHorizontalAlignment@@PEAW43MilVerticalAlignment@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@@Z @ 0x180085C44 (-GetTilePropertyCurrentValues@CTileBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBrushMapping.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800ED270 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?IsBackfaced@CVisual@@IEBA_NXZ @ 0x18010432C (-IsBackfaced@CVisual@@IEBA_NXZ.c)
 *     ?RealizeGradientPoints@CLinearGradientBrush@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUMilPoint2F@@11@Z @ 0x1801202B4 (-RealizeGradientPoints@CLinearGradientBrush@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 * Callees:
 *     ?GetRealization@CMatrixTransform@@MEAAXPEAVCMILMatrix@@@Z @ 0x180017E40 (-GetRealization@CMatrixTransform@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CTranslateTransform3D@@MEAAXPEAVCMILMatrix@@@Z @ 0x18005E710 (-GetRealization@CTranslateTransform3D@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

const struct CMILMatrix *__fastcall CTransform3D::GetMatrix(CTransform3D *this)
{
  void (__fastcall *v3)(CMatrixTransform *, struct CMILMatrix *); // rdi

  if ( (*((_BYTE *)this + 32) & 1) != 0 )
  {
    v3 = *(void (__fastcall **)(CMatrixTransform *, struct CMILMatrix *))(*(_QWORD *)this + 96LL);
    if ( v3 == CMatrixTransform::GetRealization )
    {
      CMatrixTransform::GetRealization(this, (CTransform3D *)((char *)this + 40));
    }
    else if ( v3 == CTranslateTransform3D::GetRealization )
    {
      CTranslateTransform3D::GetRealization(this, (CTransform3D *)((char *)this + 40));
    }
    else
    {
      v3(this, (CTransform3D *)((char *)this + 40));
    }
    *((_DWORD *)this + 8) &= ~1u;
  }
  return (CTransform3D *)((char *)this + 40);
}
