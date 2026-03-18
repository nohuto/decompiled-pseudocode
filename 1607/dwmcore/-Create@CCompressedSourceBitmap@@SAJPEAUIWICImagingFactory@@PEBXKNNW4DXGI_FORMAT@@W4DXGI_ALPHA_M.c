/*
 * XREFs of ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x1801839A8
 * Callers:
 *     ?ProcessCompressedPixels@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_COMPRESSEDPIXELS@@PEBXI@Z @ 0x1801379E0 (-ProcessCompressedPixels@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_COMPRESSEDP.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x180182E00 (-SetResolution@CBitmap@@UEAAJNN@Z.c)
 *     ??0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z @ 0x1801836C8 (--0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z.c)
 *     ?HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXK@Z @ 0x180184040 (-HrInitFromCompressedBytes@CCompressedSourceBitmap@@IEAAJPEBXK@Z.c)
 */

__int64 __fastcall CCompressedSourceBitmap::Create(
        struct IWICImagingFactory *a1,
        const void *a2,
        unsigned int a3,
        double a4,
        double a5,
        enum DXGI_FORMAT a6,
        enum DXGI_ALPHA_MODE a7,
        struct IBitmapSource **a8)
{
  CCompressedSourceBitmap *v11; // rax
  enum DXGI_FORMAT v12; // r8d
  enum DXGI_ALPHA_MODE v13; // r9d
  CCompressedSourceBitmap *v14; // rdi
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax

  *a8 = 0LL;
  v11 = (CCompressedSourceBitmap *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     312LL);
  if ( v11 )
    v14 = CCompressedSourceBitmap::CCompressedSourceBitmap(v11, a1, v12, v13);
  else
    v14 = 0LL;
  if ( v14 )
  {
    CBitmapOfDeviceBitmaps::AddRef(v14);
    v16 = CCompressedSourceBitmap::HrInitFromCompressedBytes(v14, a2, a3);
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x25u);
    }
    else
    {
      v17 = CBitmap::SetResolution((CCompressedSourceBitmap *)((char *)v14 + 24), a4, a5);
      v15 = v17;
      if ( v17 >= 0 )
      {
        *a8 = (CCompressedSourceBitmap *)((char *)v14 + 16);
        return v15;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x27u);
    }
    CMILCOMBase::InternalRelease(v14);
    return v15;
  }
  v15 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x22u);
  return v15;
}
