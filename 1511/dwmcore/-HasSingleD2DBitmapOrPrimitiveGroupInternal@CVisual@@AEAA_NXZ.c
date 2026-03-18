/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@AEAA_NXZ @ 0x180048EA0
 * Callers:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004BA50 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?GetContentAsSpriteNoRef@CVisual@@AEBA_NPEAPEAVCSpriteVisualContent@@@Z @ 0x18004882C (-GetContentAsSpriteNoRef@CVisual@@AEBA_NPEAPEAVCSpriteVisualContent@@@Z.c)
 *     ?GetContentAsYCbCrSurfaceNoRef@CVisual@@AEBA_NPEAPEAVCYCbCrSurface@@@Z @ 0x1800488B8 (-GetContentAsYCbCrSurfaceNoRef@CVisual@@AEBA_NPEAPEAVCYCbCrSurface@@@Z.c)
 *     ?GetContentAsCompositionSurfaceBitmapNoRef@CVisual@@AEBA_NPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x180048944 (-GetContentAsCompositionSurfaceBitmapNoRef@CVisual@@AEBA_NPEAPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?GetContentAsPrimitiveGroupNoRef@CVisual@@AEBA_NPEAPEAVCPrimitiveGroup@@@Z @ 0x1800489DC (-GetContentAsPrimitiveGroupNoRef@CVisual@@AEBA_NPEAPEAVCPrimitiveGroup@@@Z.c)
 */

char __fastcall CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(CVisual *this)
{
  char v1; // bl
  struct CSpriteVisualContent *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 45)
    && (CVisual::GetContentAsPrimitiveGroupNoRef(this, &v4)
     || CVisual::GetContentAsCompositionSurfaceBitmapNoRef(this, &v4)
     || CVisual::GetContentAsSpriteNoRef(this, &v4)
     || CVisual::GetContentAsYCbCrSurfaceNoRef(this, &v4)) )
  {
    return 1;
  }
  return v1;
}
