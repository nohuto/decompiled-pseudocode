/*
 * XREFs of ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800B1AE4
 * Callers:
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180009A48 (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180010A00 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x180016250 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180016828 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?RecreateBitmap@CGdiSpriteBitmap@@IEAAJXZ @ 0x18002B704 (-RecreateBitmap@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_SOURCE@@@Z @ 0x1800AEAF0 (-ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_SOURCE@@@Z.c)
 *     ?GetBitmapSource@CSecondarySysmemBitmap@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x180132F04 (-GetBitmapSource@CSecondarySysmemBitmap@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x180133058 (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x180133444 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 *     ?EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017939C (-EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@Re.c)
 *     ?CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18017B560 (-CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x18018E874 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrInit@CClientMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z @ 0x1800B1C14 (-HrInit@CClientMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z.c)
 *     ??0CClientMemoryBitmap@@QEAA@XZ @ 0x1800B1D24 (--0CClientMemoryBitmap@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HrCreateBitmapFromMemoryEx(
        unsigned int a1,
        unsigned int a2,
        const struct PixelFormatInfo *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *a6,
        struct IUnknown *a7,
        struct IBitmapSource **a8)
{
  CClientMemoryBitmap *v12; // rax
  CClientMemoryBitmap *v13; // rbx
  int v14; // eax
  unsigned int v15; // edi

  v12 = (CClientMemoryBitmap *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                 WPF::g_pProcessHeap,
                                 288LL);
  if ( v12 )
    v13 = CClientMemoryBitmap::CClientMemoryBitmap(v12);
  else
    v13 = 0LL;
  if ( v13 )
  {
    (*(void (__fastcall **)(CClientMemoryBitmap *))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = CClientMemoryBitmap::HrInit(v13, a1, a2, a3, a5, a6, a4, a7);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x27u);
      (*(void (__fastcall **)(CClientMemoryBitmap *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    else
    {
      *a8 = (CClientMemoryBitmap *)((char *)v13 + 16);
    }
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Du);
  }
  return v15;
}
