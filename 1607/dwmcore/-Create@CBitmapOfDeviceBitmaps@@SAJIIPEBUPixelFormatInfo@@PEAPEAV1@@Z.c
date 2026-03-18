/*
 * XREFs of ?Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800B40F8
 * Callers:
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAVCRedirectedGDISurface@@II@Z @ 0x18002B440 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAVCRedirectedGDISurface@@II@Z.c)
 *     ?GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z @ 0x18002D610 (-GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x1800BC508 (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z @ 0x180094544 (--0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::Create(
        unsigned int a1,
        unsigned int a2,
        const struct PixelFormatInfo *a3,
        struct CBitmapOfDeviceBitmaps **a4)
{
  unsigned int v4; // ebx
  CBitmapOfDeviceBitmaps *v9; // rdi
  CBitmapOfDeviceBitmaps *v10; // rax
  __int64 result; // rax
  int v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-28h]

  v4 = 0;
  v9 = 0LL;
  if ( a1 > 0x1000000 || a2 > 0x1000000 )
  {
    v12 = -2147024809;
    v13 = 58;
    goto LABEL_10;
  }
  v10 = (CBitmapOfDeviceBitmaps *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 8LL))(
                                    WPF::g_pProcessHeap,
                                    568LL);
  if ( v10 )
    v9 = CBitmapOfDeviceBitmaps::CBitmapOfDeviceBitmaps(v10, a1, a2, a3);
  if ( !v9 )
  {
    v12 = -2147024882;
    v13 = 64;
LABEL_10:
    v4 = v12;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v13);
    goto LABEL_7;
  }
  CBitmapOfDeviceBitmaps::AddRef(v9);
LABEL_7:
  result = v4;
  *a4 = v9;
  return result;
}
