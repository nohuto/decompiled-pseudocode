/*
 * XREFs of ?DrawMesh2D@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x18017A470
 * Callers:
 *     ?DrawMesh2D@CHwDisplayRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1800C0F70 (-DrawMesh2D@CHwDisplayRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1800BAC7C (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::DrawMesh2D(
        CHwDisplayRenderTarget *this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3,
        struct CContextState *a4,
        struct CGeometry2D *a5,
        struct IBitmapSource *a6)
{
  unsigned int v6; // ebx
  int v7; // eax

  v6 = 0;
  if ( *((_BYTE *)this + 192) )
  {
    v7 = CHwSurfaceRenderTarget::DrawMesh2D(this, a2, a3, a4, a5, a6);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1A7u);
  }
  return v6;
}
