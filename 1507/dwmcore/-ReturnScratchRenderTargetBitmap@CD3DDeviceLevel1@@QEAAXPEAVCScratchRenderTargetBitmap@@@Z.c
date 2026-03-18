/*
 * XREFs of ?ReturnScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800030A8
 * Callers:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x180002F70 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 * Callees:
 *     ?ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ @ 0x180018E98 (-ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?IsHardwareProtected@CHwTextureRenderTarget@@UEBA_NXZ @ 0x180082AB0 (-IsHardwareProtected@CHwTextureRenderTarget@@UEBA_NXZ.c)
 */

void __fastcall CD3DDeviceLevel1::ReturnScratchRenderTargetBitmap(
        CD3DDeviceLevel1 *this,
        struct CScratchRenderTargetBitmap *a2)
{
  DWORD CurrentThreadId; // eax
  bool v5; // sf

  ++*((_DWORD *)this + 128);
  CurrentThreadId = GetCurrentThreadId();
  --*((_DWORD *)this + 204);
  v5 = *((int *)this + 209) < 0;
  *((_DWORD *)this + 129) = CurrentThreadId;
  if ( !v5
    && *((_DWORD *)a2 + 2) == *((_DWORD *)this + 200)
    && *((_DWORD *)a2 + 3) == *((_DWORD *)this + 201)
    && *((_BYTE *)this + 808) == CHwTextureRenderTarget::IsHardwareProtected(a2) )
  {
    CD3DDeviceLevel1::ReleaseCachedScratchRenderTargetBitmap(this);
    *((_QWORD *)this + 99) = a2;
    CBitmapOfDeviceBitmaps::AddRef((struct CScratchRenderTargetBitmap *)((char *)a2 + 120));
  }
  if ( (*((_DWORD *)this + 128))-- == 1 )
    *((_DWORD *)this + 129) = 0;
}
