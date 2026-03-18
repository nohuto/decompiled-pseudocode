/*
 * XREFs of ?GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180014CD8
 * Callers:
 *     ?GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800449A0 (-GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?EnsureDXGISurface@CD3DSurface@@AEAAJXZ @ 0x180014E5C (-EnsureDXGISurface@CD3DSurface@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180072C70 (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DSurface::GetD2DBitmap(CD3DSurface *this, struct ID2D1Bitmap1 **a2)
{
  unsigned int v3; // esi
  _QWORD *v5; // r14
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // [rsp+20h] [rbp-48h]
  D2D1_BITMAP_PROPERTIES1 v11; // [rsp+30h] [rbp-38h] BYREF
  D2D1_PIXEL_FORMAT v12; // [rsp+70h] [rbp+8h]

  v3 = 0;
  *a2 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(CD3DSurface *))(*(_QWORD *)this + 24LL))(this) )
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x16Du);
    return v3;
  }
  v5 = (_QWORD *)((char *)this + 216);
  if ( !*((_QWORD *)this + 27) )
  {
    v7 = CD3DSurface::EnsureDXGISurface(this);
    v3 = v7;
    if ( v7 < 0 )
    {
      v10 = 372;
    }
    else
    {
      v8 = *((_DWORD *)this + 45);
      v12.format = *((_DWORD *)this + 41);
      v12.alphaMode = *((_DWORD *)this + 48);
      v11.pixelFormat = v12;
      v11.dpiX = 96.0;
      v11.dpiY = 96.0;
      v11.bitmapOptions = ((unsigned __int8)~(_BYTE)v8 >> 2) & 2;
      if ( (v8 & 0x20) != 0 )
        v11.bitmapOptions = ((unsigned __int8)~(_BYTE)v8 >> 2) & 2 | 1;
      v9 = *((_QWORD *)this + 2);
      v11.colorContext = 0LL;
      v7 = CD2DContext::CreateD2DBitmapFromDxgiSurface(
             *(CD2DContext **)(v9 + 120),
             *((struct IDXGISurface **)this + 26),
             &v11,
             (struct ID2D1Bitmap1 **)this + 27);
      v3 = v7;
      if ( v7 >= 0 )
        goto LABEL_3;
      v10 = 402;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v10);
    return v3;
  }
LABEL_3:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
  *a2 = (struct ID2D1Bitmap1 *)*v5;
  return v3;
}
