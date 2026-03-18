/*
 * XREFs of ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180084EB0
 * Callers:
 *     ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x18001C040 (-PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJXZ @ 0x180082E00 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJXZ.c)
 *     ?GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z @ 0x1800EC820 (-GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x18013D89C (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 *     ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18013EB1C (-CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 *     ?PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ @ 0x1801436C0 (-PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ.c)
 * Callees:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x18001467C (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180014DF0 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x180015A9C (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DTexture::GetD3DSurfaceLevel(CD3DTexture *this, __int64 a2, struct CD3DSurface **a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rax
  struct CD3DSurface **v7; // rcx
  unsigned int v8; // r9d
  struct ID3D11Texture2D *v9; // rdx
  struct CD3DResourceManager *v10; // rcx
  int ViewOfTexture; // eax
  CD3DSurface **v12; // rcx
  struct CD3DSurface *v13; // rdi
  struct CD3DSurface **v15; // [rsp+20h] [rbp-48h]
  int v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+34h] [rbp-34h]
  __int64 v18; // [rsp+3Ch] [rbp-2Ch]
  int v19; // [rsp+44h] [rbp-24h]

  v5 = 0;
  CD3DResourceManager::Use((CD3DResourceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 120LL) + 896LL), this);
  if ( *((_QWORD *)this + 25)
    || (v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
               WPF::g_pProcessHeap,
               8LL * *((unsigned int *)this + 48)),
        (*((_QWORD *)this + 25) = v6) != 0LL) )
  {
    v7 = (struct CD3DSurface **)*((_QWORD *)this + 25);
    if ( !*v7 )
    {
      v8 = *((_DWORD *)this + 45);
      v9 = (struct ID3D11Texture2D *)*((_QWORD *)this + 16);
      v16 = *((_DWORD *)this + 38);
      v15 = v7;
      v10 = (struct CD3DResourceManager *)*((_QWORD *)this + 2);
      v17 = 0LL;
      v18 = 0LL;
      v19 = 0;
      ViewOfTexture = CD3DSurface::CreateViewOfTexture(v10, v9, 0LL, v8, v15);
      v5 = ViewOfTexture;
      if ( ViewOfTexture < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ViewOfTexture, 0x123u);
        return v5;
      }
      v12 = (CD3DSurface **)*((_QWORD *)this + 25);
      v17 = *((_QWORD *)this + 23);
      CD3DSurface::UpdatePixelFormatInfo(*v12, (const struct PixelFormatInfo *)&v16);
    }
    v13 = (struct CD3DSurface *)**((_QWORD **)this + 25);
    *a3 = v13;
    (**(void (__fastcall ***)(struct CD3DSurface *))v13)(v13);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x115u);
  }
  return v5;
}
