/*
 * XREFs of ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x180016178
 * Callers:
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x18002AA08 (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV-$CMatrix@UBaseSampling@.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x18003F7D0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x18013A318 (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper(
        CMILBrushBitmapLocalSetterWrapper *this)
{
  __int64 v1; // rdx
  int v2; // eax

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v2 = ++*(_DWORD *)(v1 + 120);
    if ( !v2 )
      v2 = 1;
    *(_DWORD *)(v1 + 120) = v2;
    *(_QWORD *)(*(_QWORD *)this + 192LL) = 0LL;
  }
}
