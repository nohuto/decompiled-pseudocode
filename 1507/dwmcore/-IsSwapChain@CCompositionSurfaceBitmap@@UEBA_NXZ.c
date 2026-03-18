/*
 * XREFs of ?IsSwapChain@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180008CE0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@WBI@EBA_NXZ @ 0x18009A290 (-IsSwapChain@CCompositionSurfaceBitmap@@WBI@EBA_NXZ.c)
 *     ?GetInputTransform@CCompiledEffect@@QEAAJIAEBUD2D_RECT_F@@PEAU2@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180112A08 (-GetInputTransform@CCompiledEffect@@QEAAJIAEBUD2D_RECT_F@@PEAU2@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Draw@CPrimitive@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180116FD0 (-Draw@CPrimitive@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?HitTest@CPrimitive@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180117480 (-HitTest@CPrimitive@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceBitmap::IsSwapChain(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 49);
  result = 0;
  if ( v1 )
    return *(_DWORD *)(v1 + 112) > 1u;
  return result;
}
