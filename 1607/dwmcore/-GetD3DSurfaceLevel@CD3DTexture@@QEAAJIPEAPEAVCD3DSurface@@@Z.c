/*
 * XREFs of ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180080EEC
 * Callers:
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x180013C54 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x1800820B0 (-PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z @ 0x18011ECE0 (-GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x18017E81C (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 *     ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18017EC00 (-CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 *     ?PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ @ 0x180181EA0 (-PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180079CB0 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x18009F4FC (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x1800B27C8 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::GetD3DSurfaceLevel(CD3DTexture *this, __int64 a2, struct CD3DSurface **a3)
{
  unsigned int v5; // edi
  struct CD3DSurface **v6; // rcx
  unsigned int v7; // r9d
  struct ID3D11Texture2D *v8; // rdx
  struct CD3DResourceManager *v9; // rcx
  int ViewOfTexture; // eax
  struct CD3DSurface *v11; // rcx
  __int64 v13; // rax
  struct CD3DSurface **v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+34h] [rbp-24h]
  __int64 v17; // [rsp+3Ch] [rbp-1Ch]
  int v18; // [rsp+44h] [rbp-14h]

  v5 = 0;
  CD3DResourceManager::Use((CD3DResourceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 128LL) + 880LL), this);
  if ( *((_QWORD *)this + 25)
    || (v13 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                WPF::g_pProcessHeap,
                8LL * *((unsigned int *)this + 48)),
        (*((_QWORD *)this + 25) = v13) != 0LL) )
  {
    v6 = (struct CD3DSurface **)*((_QWORD *)this + 25);
    if ( !*v6 )
    {
      v7 = *((_DWORD *)this + 45);
      v8 = (struct ID3D11Texture2D *)*((_QWORD *)this + 16);
      v15 = *((_DWORD *)this + 38);
      v14 = v6;
      v9 = (struct CD3DResourceManager *)*((_QWORD *)this + 2);
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0;
      ViewOfTexture = CD3DSurface::CreateViewOfTexture(v9, v8, 0LL, v7, v14);
      v5 = ViewOfTexture;
      if ( ViewOfTexture < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ViewOfTexture, 0x127u);
        return v5;
      }
      v16 = *((_QWORD *)this + 23);
      CD3DSurface::UpdatePixelFormatInfo(**((CD3DSurface ***)this + 25), (const struct PixelFormatInfo *)&v15);
    }
    v11 = (struct CD3DSurface *)**((_QWORD **)this + 25);
    *a3 = v11;
    (**(void (__fastcall ***)(struct CD3DSurface *))v11)(v11);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x119u);
  }
  return v5;
}
