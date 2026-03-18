/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@AEAA_NXZ @ 0x180036470
 * Callers:
 *     ?SetContent@CVisual@@IEAAJPEAVCContent@@@Z @ 0x180034514 (-SetContent@CVisual@@IEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?GetContentAsPrimitiveNoRef@CVisual@@AEBA_NPEAPEAVCPrimitive@@@Z @ 0x180035E10 (-GetContentAsPrimitiveNoRef@CVisual@@AEBA_NPEAPEAVCPrimitive@@@Z.c)
 *     ?GetContentAsYCbCrSurfaceNoRef@CVisual@@AEBA_NPEAPEAVCYCbCrSurface@@@Z @ 0x180035E9C (-GetContentAsYCbCrSurfaceNoRef@CVisual@@AEBA_NPEAPEAVCYCbCrSurface@@@Z.c)
 *     ?GetContentAsCompositionSurfaceBitmapNoRef@CVisual@@AEBA_NPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x180035F28 (-GetContentAsCompositionSurfaceBitmapNoRef@CVisual@@AEBA_NPEAPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?GetContentAsPrimitiveGroupNoRef@CVisual@@AEBA_NPEAPEAVCPrimitiveGroup@@@Z @ 0x180035FC0 (-GetContentAsPrimitiveGroupNoRef@CVisual@@AEBA_NPEAPEAVCPrimitiveGroup@@@Z.c)
 */

char __fastcall CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(CVisual *this)
{
  char v1; // bl
  struct CPrimitive *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 47)
    && (CVisual::GetContentAsPrimitiveGroupNoRef(this, &v4)
     || CVisual::GetContentAsCompositionSurfaceBitmapNoRef(this, &v4)
     || CVisual::GetContentAsPrimitiveNoRef(this, &v4)
     || CVisual::GetContentAsYCbCrSurfaceNoRef(this, &v4)) )
  {
    return 1;
  }
  return v1;
}
