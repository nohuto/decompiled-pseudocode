/*
 * XREFs of ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x18002D478
 * Callers:
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJXZ @ 0x18002C960 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJXZ.c)
 *     ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x180031130 (-PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z @ 0x180108210 (-GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x18014D66C (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 *     ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18014E0EC (-CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 *     ?PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ @ 0x18015189C (-PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x18002823C (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x18002A9A0 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x18002AA38 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180051FB0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DTexture::GetD3DSurfaceLevel(CD3DTexture *this, __int64 a2, struct CD3DSurface **a3)
{
  unsigned int v5; // esi
  void *(*v6)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rbp
  void *v7; // rax
  struct CD3DSurface **v8; // rcx
  unsigned int v9; // r9d
  struct ID3D11Texture2D *v10; // rdx
  struct CD3DResourceManager *v11; // rcx
  int ViewOfTexture; // eax
  CD3DSurface **v13; // rcx
  struct CD3DSurface *v14; // rdi
  struct CD3DSurface **v16; // [rsp+20h] [rbp-48h]
  int v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+34h] [rbp-34h]
  __int64 v19; // [rsp+3Ch] [rbp-2Ch]
  int v20; // [rsp+44h] [rbp-24h]

  v5 = 0;
  CD3DResourceManager::Use((CD3DResourceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 120LL) + 848LL), this);
  if ( *((_QWORD *)this + 25)
    || ((v6 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL),
         v6 != WPF::ProcessHeapImpl::AllocClear)
      ? (v7 = (void *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v6)(
                        WPF::g_pProcessHeap,
                        8LL * *((unsigned int *)this + 48)))
      : (v7 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 8LL * *((unsigned int *)this + 48))),
        (*((_QWORD *)this + 25) = v7) != 0LL) )
  {
    v8 = (struct CD3DSurface **)*((_QWORD *)this + 25);
    if ( !*v8 )
    {
      v9 = *((_DWORD *)this + 45);
      v10 = (struct ID3D11Texture2D *)*((_QWORD *)this + 16);
      v17 = *((_DWORD *)this + 38);
      v16 = v8;
      v11 = (struct CD3DResourceManager *)*((_QWORD *)this + 2);
      v18 = 0LL;
      v19 = 0LL;
      v20 = 0;
      ViewOfTexture = CD3DSurface::CreateViewOfTexture(v11, v10, 0LL, v9, v16);
      v5 = ViewOfTexture;
      if ( ViewOfTexture < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ViewOfTexture, 0x123u);
        return v5;
      }
      v13 = (CD3DSurface **)*((_QWORD *)this + 25);
      v18 = *((_QWORD *)this + 23);
      CD3DSurface::UpdatePixelFormatInfo(*v13, (const struct PixelFormatInfo *)&v17);
    }
    v14 = (struct CD3DSurface *)**((_QWORD **)this + 25);
    *a3 = v14;
    (**(void (__fastcall ***)(struct CD3DSurface *))v14)(v14);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x115u);
  }
  return v5;
}
