/*
 * XREFs of ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1800A4418
 * Callers:
 *     ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x180018D88 (-Initialize@CSecondarySysmemBitmap@@IEAAJXZ.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800A2C10 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x1800A51D0 (-CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z @ 0x180151CC8 (-HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x180151DA8 (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x180151F30 (-HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x1801522E8 (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 *     ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x1801539A8 (-HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlag.c)
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180154110 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800A1878 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall HrCalcDWordAlignedScanlineStride(__int64 a1, int a2, unsigned int *a3)
{
  unsigned __int8 PixelFormatSize; // al
  unsigned int *v4; // r8
  unsigned int v5; // r11d
  unsigned int v6; // r10d

  PixelFormatSize = GetPixelFormatSize(a2);
  v6 = 0;
  if ( PixelFormatSize && v5 <= 0x7FFFFFF8u / PixelFormatSize )
  {
    *v4 = (((v5 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  }
  else
  {
    *v4 = 0;
    return (unsigned int)-2147024362;
  }
  return v6;
}
