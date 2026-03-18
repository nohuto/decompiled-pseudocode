/*
 * XREFs of ?IsHardwareProtected@CHwTextureRenderTarget@@UEBA_NXZ @ 0x18002CD70
 * Callers:
 *     ?ReturnScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800116E8 (-ReturnScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N3PEAPEAVIRenderTargetBitmap@@@Z @ 0x180011DD0 (-GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFo.c)
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@WLA@EBA_NXZ @ 0x1800BE070 (-IsHardwareProtected@CHwTextureRenderTarget@@WLA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwTextureRenderTarget::IsHardwareProtected(CHwTextureRenderTarget *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 24);
  result = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 176) & 0x80000) != 0;
  return result;
}
