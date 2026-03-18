/*
 * XREFs of ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180093CF0
 * Callers:
 *     ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x18004D048 (-ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 *     ?AdjustWorldBounds@CVisual@@AEAAXPEAV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18004FC24 (-AdjustWorldBounds@CVisual@@AEAAXPEAV-$CRectF@UPageInPixels@CoordinateSpace@@@@@Z.c)
 *     ?UpdateRegistrationAsBackdropBlur@CVisual@@QEAAXXZ @ 0x180050A88 (-UpdateRegistrationAsBackdropBlur@CVisual@@QEAAXXZ.c)
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ @ 0x180051150 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ.c)
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D010 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CCompositionSurfaceBitmap::IsOfType(__int64 a1, int a2)
{
  return a2 == 92 || a2 == 86;
}
