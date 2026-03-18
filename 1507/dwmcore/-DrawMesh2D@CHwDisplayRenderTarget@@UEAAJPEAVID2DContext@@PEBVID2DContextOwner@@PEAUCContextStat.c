/*
 * XREFs of ?DrawMesh2D@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x180139130
 * Callers:
 *     ?DrawMesh2D@CHwDisplayRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x18009ABF0 (-DrawMesh2D@CHwDisplayRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x18013A318 (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
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
  int v11; // eax

  v6 = 0;
  if ( *((_BYTE *)this + 184) )
  {
    while ( 1 )
    {
      v11 = CHwSurfaceRenderTarget::DrawMesh2D(this, a2, a3, a4, a5, a6);
      v6 = v11;
      if ( v11 < 0 )
        break;
      if ( !dword_180196514 )
        return v6;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1D5u);
  }
  return v6;
}
