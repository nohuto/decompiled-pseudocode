/*
 * XREFs of ?ReturnScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800116E8
 * Callers:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800115B0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 * Callees:
 *     ?ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800227F4 (-ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@UEBA_NXZ @ 0x18002CD70 (-IsHardwareProtected@CHwTextureRenderTarget@@UEBA_NXZ.c)
 */

void __fastcall CD3DDeviceLevel1::ReturnScratchRenderTargetBitmap(
        CD3DDeviceLevel1 *this,
        struct CScratchRenderTargetBitmap *a2)
{
  DWORD CurrentThreadId; // eax
  bool v5; // sf

  ++*((_DWORD *)this + 126);
  CurrentThreadId = GetCurrentThreadId();
  --*((_DWORD *)this + 196);
  v5 = *((int *)this + 200) < 0;
  *((_DWORD *)this + 127) = CurrentThreadId;
  if ( !v5
    && *((_DWORD *)a2 + 2) == *((_DWORD *)this + 194)
    && *((_DWORD *)a2 + 3) == *((_DWORD *)this + 195)
    && *((_BYTE *)this + 1032) == CHwTextureRenderTarget::IsHardwareProtected(a2) )
  {
    CD3DDeviceLevel1::ReleaseCachedScratchRenderTargetBitmap(this);
    *((_QWORD *)this + 96) = a2;
    CBitmapOfDeviceBitmaps::AddRef((struct CScratchRenderTargetBitmap *)((char *)a2 + 120));
  }
  if ( (*((_DWORD *)this + 126))-- == 1 )
    *((_DWORD *)this + 127) = 0;
}
