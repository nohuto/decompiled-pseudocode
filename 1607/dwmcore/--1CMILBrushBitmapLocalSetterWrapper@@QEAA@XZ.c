/*
 * XREFs of ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x1800226EC
 * Callers:
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x18006948C (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV-$CMatrix@UBaseSampling@.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180072730 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1800BAC7C (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper(
        CMILBrushBitmapLocalSetterWrapper *this)
{
  __int64 v1; // rdx
  bool v2; // zf
  int v3; // eax

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v2 = (*(_DWORD *)(v1 + 120))++ == -1;
    v3 = *(_DWORD *)(v1 + 120);
    if ( v2 )
      v3 = 1;
    *(_DWORD *)(v1 + 120) = v3;
    *(_QWORD *)(*(_QWORD *)this + 200LL) = 0LL;
  }
}
