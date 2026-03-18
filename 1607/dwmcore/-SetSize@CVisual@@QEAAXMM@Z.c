/*
 * XREFs of ?SetSize@CVisual@@QEAAXMM@Z @ 0x180109E2C
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18000C310 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetSize@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x180126000 (-SetSize@CCoRenderVisualProxy@@UEAAJMM@Z.c)
 *     ?DrawCommonRenderingEffect@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCVisual@@@Z @ 0x18014F1CC (-DrawCommonRenderingEffect@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCVisual@@@.c)
 * Callees:
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x180023F30 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800510C8 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CVisual::SetSize(CVisual *this, float a2, float a3)
{
  float v4; // [rsp+70h] [rbp+8h] BYREF
  float v5; // [rsp+74h] [rbp+Ch]

  if ( *((float *)this + 46) != a2 || *((float *)this + 47) != a3 )
  {
    *((float *)this + 46) = a2;
    *((float *)this + 47) = a3;
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
    CVisual::OnOuterTransformChanged(this);
    v4 = a2;
    v5 = a3;
    CPropertyChangeResource::NotifyVector2PropertyChanged(this, 26LL, (const struct D2DVector2 *)&v4);
    CResource::InvalidateAnimationSources(this, 26);
  }
}
