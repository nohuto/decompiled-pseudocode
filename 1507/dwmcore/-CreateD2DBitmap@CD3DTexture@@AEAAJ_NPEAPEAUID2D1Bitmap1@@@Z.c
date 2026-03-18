/*
 * XREFs of ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180084824
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180023530 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180084FE8 (-GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180072C70 (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     ?EnsureDXGISurface@CD3DTexture@@AEAAJXZ @ 0x180084784 (-EnsureDXGISurface@CD3DTexture@@AEAAJXZ.c)
 *     ?GetDXGIResource@CD3DTexture@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180084948 (-GetDXGIResource@CD3DTexture@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DTexture::CreateD2DBitmap(CD3DTexture *this, char a2, struct ID2D1Bitmap1 **a3)
{
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax
  int DXGIResource; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  struct D2D1_BITMAP_PROPERTIES1 v14; // [rsp+38h] [rbp-28h] BYREF
  int v15; // [rsp+88h] [rbp+28h] BYREF
  struct IDXGIResource *v16; // [rsp+98h] [rbp+38h] BYREF

  v16 = 0LL;
  v5 = 3;
  if ( !a2 )
    v5 = *((_DWORD *)this + 46);
  v6 = CD3DTexture::EnsureDXGISurface(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x22Cu);
  }
  else
  {
    v8 = *((_DWORD *)this + 38);
    v14.bitmapOptions = D2D1_BITMAP_OPTIONS_NONE;
    v14.pixelFormat = (D2D1_PIXEL_FORMAT)__PAIR64__(v5, v8);
    v14.dpiX = 96.0;
    v14.dpiY = 96.0;
    DXGIResource = CD3DTexture::GetDXGIResource(this, &v16);
    v7 = DXGIResource;
    if ( DXGIResource < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIResource, 0x239u);
    }
    else
    {
      v10 = ((__int64 (__fastcall *)(struct IDXGIResource *, int *))v16->lpVtbl->GetUsage)(v16, &v15);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x23Bu);
      }
      else
      {
        if ( (*((_BYTE *)this + 168) & 0x20) != 0
          && v14.pixelFormat.format != DXGI_FORMAT_B8G8R8X8_UNORM
          && (v15 & 0x100) == 0 )
        {
          v14.bitmapOptions |= 1u;
        }
        v11 = *((_QWORD *)this + 2);
        v14.colorContext = 0LL;
        v12 = CD2DContext::CreateD2DBitmapFromDxgiSurface(
                *(CD2DContext **)(v11 + 120),
                *((struct IDXGISurface **)this + 27),
                &v14,
                a3);
        v7 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x251u);
      }
    }
  }
  if ( v16 )
    ((void (__fastcall *)(struct IDXGIResource *))v16->lpVtbl->Release)(v16);
  return v7;
}
