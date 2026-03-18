/*
 * XREFs of ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x1800A30C8
 * Callers:
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800270D0 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?RecreateBitmap@CGdiSpriteBitmap@@IEAAJXZ @ 0x180087D44 (-RecreateBitmap@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x18015C3BC (-EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800A1878 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall GetRequiredBufferSize(int a1, __int64 a2, const struct WICRect *a3)
{
  __int64 result; // rax
  unsigned __int8 PixelFormatSize; // al
  __int64 v5; // r8
  int v6; // r9d
  int v7; // r10d

  result = 0LL;
  if ( a3->Height )
  {
    PixelFormatSize = GetPixelFormatSize(a1);
    return (unsigned int)(v7 * (v6 - 1) + (*(_DWORD *)(v5 + 8) * PixelFormatSize + 7) / 8);
  }
  return result;
}
