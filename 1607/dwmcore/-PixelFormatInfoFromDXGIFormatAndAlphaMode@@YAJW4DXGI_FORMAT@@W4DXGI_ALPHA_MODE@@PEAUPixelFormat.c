/*
 * XREFs of ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x180175230
 * Callers:
 *     ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x180173B08 (-EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x18017B9A8 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX@Z @ 0x18017BAC0 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX@Z.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x18019161C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180083604 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18009FF0C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 */

__int64 __fastcall PixelFormatInfoFromDXGIFormatAndAlphaMode(
        int a1,
        enum DXGI_ALPHA_MODE a2,
        struct PixelFormatInfo *a3)
{
  int v4; // edx
  int v5; // ecx
  int PixelFormatColorSpace; // eax
  unsigned int v7; // ebx

  *(_DWORD *)a3 = a1;
  if ( !HasAlphaChannel(a1) )
    v4 = 3;
  *((_DWORD *)a3 + 1) = v4;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v5, (struct PixelFormatInfo *)((char *)a3 + 8));
  v7 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, 0x3DEu);
  *((_QWORD *)a3 + 2) = 0LL;
  return v7;
}
