/*
 * XREFs of ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x180043BF0
 * Callers:
 *     ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@MEAAJ_N@Z @ 0x1800436A0 (-CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@MEAAJ_N@Z.c)
 *     ?GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x18013FC70 (-GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurfa.c)
 * Callees:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x18001467C (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?GetFrontBufferIndex@CSwapChainBase@@MEBAIXZ @ 0x180042450 (-GetFrontBufferIndex@CSwapChainBase@@MEBAIXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetFrontBufferSurface(
        __int64 a1,
        __int64 a2,
        char a3,
        struct CD3DSurface **a4)
{
  _QWORD *v6; // rbx
  __int64 (__fastcall *v7)(CSwapChainBase *); // rdi
  unsigned int FrontBufferIndex; // eax
  struct CD3DSurface *v9; // rdi
  unsigned int v10; // edi
  __int64 (__fastcall ***v12)(_QWORD, GUID *, struct ID3D11Texture2D **); // rdi
  int v13; // eax
  int ViewOfTexture; // eax
  struct ID3D11Texture2D *v15; // [rsp+30h] [rbp-18h] BYREF

  v15 = 0LL;
  if ( a3 && (v12 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Texture2D **))(a1 + 352)) != 0LL )
  {
    v13 = (**v12)(*(_QWORD *)(a1 + 352), &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v15);
    v10 = v13;
    if ( v13 >= 0 )
    {
      ViewOfTexture = CD3DSurface::CreateViewOfTexture(
                        (struct CD3DResourceManager *)(*(_QWORD *)(a1 + 160) + 896LL),
                        v15,
                        0LL,
                        0,
                        a4);
      v10 = ViewOfTexture;
      if ( ViewOfTexture < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ViewOfTexture, 0x44Fu);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x443u);
    }
  }
  else
  {
    v6 = *(_QWORD **)(a1 + 208);
    v7 = *(__int64 (__fastcall **)(CSwapChainBase *))(*v6 + 288LL);
    if ( v7 == CSwapChainBase::GetFrontBufferIndex )
      FrontBufferIndex = CSwapChainBase::GetFrontBufferIndex(*(CSwapChainBase **)(a1 + 208));
    else
      FrontBufferIndex = v7(*(CSwapChainBase **)(a1 + 208));
    v9 = *(struct CD3DSurface **)(v6[32] + 8LL * FrontBufferIndex);
    *a4 = v9;
    (**(void (__fastcall ***)(struct CD3DSurface *))v9)(v9);
    v10 = 0;
  }
  if ( v15 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v15->lpVtbl->Release)(v15);
  return v10;
}
