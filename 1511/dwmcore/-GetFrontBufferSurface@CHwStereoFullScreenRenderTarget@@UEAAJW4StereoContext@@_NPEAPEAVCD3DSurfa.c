/*
 * XREFs of ?GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x18014EE80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x18002AA38 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x180074640 (-GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::GetFrontBufferSurface(
        __int64 a1,
        __int64 a2,
        char a3,
        struct CD3DSurface **a4)
{
  int v5; // ebp
  int FrontBufferSurface; // eax
  CMILPoolResource *v8; // rdi
  unsigned int v9; // ebx
  int ViewOfTexture; // eax
  CMILPoolResource *v12; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v12 = 0LL;
  v5 = a2;
  FrontBufferSurface = CHwFullScreenRenderTarget::GetFrontBufferSurface(a1, a2, a3, &v12);
  v8 = v12;
  v9 = FrontBufferSurface;
  if ( FrontBufferSurface >= 0 )
  {
    if ( v5 != 2 )
    {
      *a4 = v12;
      return v9;
    }
    ViewOfTexture = CD3DSurface::CreateViewOfTexture(
                      (struct CD3DResourceManager *)(*(_QWORD *)(a1 + 160) + 848LL),
                      *((struct ID3D11Texture2D **)v12 + 17),
                      0LL,
                      1u,
                      a4);
    v9 = ViewOfTexture;
    if ( ViewOfTexture < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ViewOfTexture, 0x187u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, FrontBufferSurface, 0x17Au);
  }
  if ( v8 )
    CMILPoolResource::Release(v8);
  return v9;
}
