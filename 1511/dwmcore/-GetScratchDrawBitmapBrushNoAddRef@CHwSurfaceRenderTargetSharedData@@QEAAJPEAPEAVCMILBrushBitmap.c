/*
 * XREFs of ?GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap@@@Z @ 0x1800FBCB0
 * Callers:
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1800B6E30 (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z @ 0x1800B3C2C (-Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CHwSurfaceRenderTargetSharedData::GetScratchDrawBitmapBrushNoAddRef(
        CHwSurfaceRenderTargetSharedData *this,
        struct CMILBrushBitmap **a2)
{
  unsigned int v2; // ebx
  struct CMILBrushBitmap **v3; // rdi
  int v5; // eax

  v2 = 0;
  v3 = (struct CMILBrushBitmap **)((char *)this + 32);
  if ( *((_QWORD *)this + 4) || (v5 = CMILBrushBitmap::Create(this, (struct IBitmapSource *)a2, v3), v2 = v5, v5 >= 0) )
    *a2 = *v3;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x11Au);
  return v2;
}
