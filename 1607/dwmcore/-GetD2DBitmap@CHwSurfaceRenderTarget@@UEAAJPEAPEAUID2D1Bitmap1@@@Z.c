/*
 * XREFs of ?GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18002E82C
 * Callers:
 *     ?GetD2DBitmap@CHwDisplayRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18002D550 (-GetD2DBitmap@CHwDisplayRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18007983C (-GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetD2DBitmap(CD3DSurface **this, struct ID2D1Bitmap1 **a2)
{
  int D2DBitmap; // eax
  unsigned int v3; // ebx
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF

  D2DBitmap = CD3DSurface::GetD2DBitmap(this[21], a2);
  v5 = D2DBitmap;
  v3 = D2DBitmap;
  if ( D2DBitmap < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, 0x360u);
  TranslateDXGIorD3DErrorInContext(v3, 14LL, &v5);
  return v5;
}
