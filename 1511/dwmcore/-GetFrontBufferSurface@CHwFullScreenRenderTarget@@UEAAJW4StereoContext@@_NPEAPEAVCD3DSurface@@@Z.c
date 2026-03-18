/*
 * XREFs of ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x180074640
 * Callers:
 *     ?GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x18014EE80 (-GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurfa.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x18002AA38 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?GetFrontBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DSurface@@@Z @ 0x180072DD0 (-GetFrontBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetFrontBufferSurface(
        __int64 a1,
        __int64 a2,
        char a3,
        struct CD3DSurface **a4)
{
  int FrontBuffer; // eax
  unsigned int v7; // edi
  __int64 (__fastcall ***v9)(_QWORD, GUID *, struct ID3D11Texture2D **); // rdi
  int v10; // eax
  int ViewOfTexture; // eax
  struct ID3D11Texture2D *v12; // [rsp+30h] [rbp-18h] BYREF

  v12 = 0LL;
  if ( a3 && (v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Texture2D **))(a1 + 352)) != 0LL )
  {
    v10 = (**v9)(*(_QWORD *)(a1 + 352), &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v12);
    v7 = v10;
    if ( v10 >= 0 )
    {
      ViewOfTexture = CD3DSurface::CreateViewOfTexture(
                        (struct CD3DResourceManager *)(*(_QWORD *)(a1 + 160) + 848LL),
                        v12,
                        0LL,
                        0,
                        a4);
      v7 = ViewOfTexture;
      if ( ViewOfTexture < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ViewOfTexture, 0x45Fu);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x453u);
    }
  }
  else
  {
    FrontBuffer = CSwapChainBase::GetFrontBuffer(*(CSwapChainBase **)(a1 + 208), a4);
    v7 = FrontBuffer;
    if ( FrontBuffer < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, FrontBuffer, 0x463u);
  }
  if ( v12 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v12->lpVtbl->Release)(v12);
  return v7;
}
