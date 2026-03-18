/*
 * XREFs of ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800570E4
 * Callers:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1800147E8 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180061CBC (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RecreateBitmap@CGdiSpriteBitmap@@IEAAJXZ @ 0x18007F4A4 (-RecreateBitmap@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_SOURCE@@@Z @ 0x1800828C0 (-ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_SOURCE@@@Z.c)
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x1801339B0 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180137928 (-EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@Re.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18013DEC0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x18014D9FC (-EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x1801505F4 (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x180150BC0 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 *     ?GetBitmapSource@CSecondarySysmemBitmap@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x180152E44 (-GetBitmapSource@CSecondarySysmemBitmap@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?HrInit@CClientMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z @ 0x180057238 (-HrInit@CClientMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z.c)
 *     ??0CClientMemoryBitmap@@QEAA@XZ @ 0x18005734C (--0CClientMemoryBitmap@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
  CClientMemoryBitmap *v13; // rdi
  int v14; // eax
  unsigned int v15; // esi
  struct IBitmapSource *v16; // rcx

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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x2Fu);
    }
    else
    {
      v16 = (CClientMemoryBitmap *)((char *)v13 + 16);
      v13 = 0LL;
      *a8 = v16;
    }
    if ( v13 )
      (*(void (__fastcall **)(CClientMemoryBitmap *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x25u);
  }
  return v15;
}
