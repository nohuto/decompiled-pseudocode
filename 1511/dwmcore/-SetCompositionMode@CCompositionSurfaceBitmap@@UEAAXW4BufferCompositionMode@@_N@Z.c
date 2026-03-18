/*
 * XREFs of ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z @ 0x1800F4D70
 * Callers:
 *     ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180121CF0 (-Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?Draw@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180122930 (-Draw@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z @ 0x18000BA80 (-SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18000CA24 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 */

_UNKNOWN **__fastcall CCompositionSurfaceBitmap::SetCompositionMode(__int64 a1)
{
  _UNKNOWN **result; // rax
  char v2; // r8
  __int64 v3; // r9
  int v4; // r10d

  result = (_UNKNOWN **)CCompositionSurfaceBitmap::IsSwapChain((CCompositionSurfaceBitmap *)(a1 - 40));
  if ( (_BYTE)result )
    return CCompositionSurfaceInfo::SetCompositionMode(*(_QWORD *)(v3 + 400), v4, v2);
  return result;
}
