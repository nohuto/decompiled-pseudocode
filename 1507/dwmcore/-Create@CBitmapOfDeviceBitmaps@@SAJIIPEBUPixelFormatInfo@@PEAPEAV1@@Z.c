/*
 * XREFs of ?Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x18005EED8
 * Callers:
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAUIMilRedirectedGDISurface@@II@Z @ 0x18007F2F8 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAUIMilRedirectedGDISurface@@II@Z.c)
 *     ?GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z @ 0x180082D00 (-GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x180108A1C (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z @ 0x180048DCC (--0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::Create(
        unsigned int a1,
        unsigned int a2,
        const struct PixelFormatInfo *a3,
        struct CBitmapOfDeviceBitmaps **a4)
{
  unsigned int v4; // esi
  CBitmapOfDeviceBitmaps *v9; // rbx
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
    goto LABEL_11;
  }
  v10 = (CBitmapOfDeviceBitmaps *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 8LL))(
                                    WPF::g_pProcessHeap,
                                    568LL);
  if ( v10 )
    v9 = CBitmapOfDeviceBitmaps::CBitmapOfDeviceBitmaps(v10, a1, a2, a3);
  else
    v9 = 0LL;
  if ( !v9 )
  {
    v12 = -2147024882;
    v13 = 64;
LABEL_11:
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
