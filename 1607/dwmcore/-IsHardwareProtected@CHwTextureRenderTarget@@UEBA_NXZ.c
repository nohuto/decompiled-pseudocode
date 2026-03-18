/*
 * XREFs of ?IsHardwareProtected@CHwTextureRenderTarget@@UEBA_NXZ @ 0x18002DA10
 * Callers:
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800132F0 (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRend.c)
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@WLA@EBA_NXZ @ 0x1800C18C0 (-IsHardwareProtected@CHwTextureRenderTarget@@WLA@EBA_NXZ.c)
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@WLI@EBA_NXZ @ 0x1800C18D0 (-IsHardwareProtected@CHwTextureRenderTarget@@WLI@EBA_NXZ.c)
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@WMA@EBA_NXZ @ 0x1800C18E0 (-IsHardwareProtected@CHwTextureRenderTarget@@WMA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwTextureRenderTarget::IsHardwareProtected(CHwTextureRenderTarget *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 26);
  result = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 176) & 0x80000) != 0;
  return result;
}
