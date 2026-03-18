/*
 * XREFs of ?GetSharedHandle@CHwDeviceBitmapColorSource@@QEBAPEAXXZ @ 0x1800A5A84
 * Callers:
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800942EC (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 *     ?Construct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800A40B0 (-Construct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 *     ?GetExistingSharedColorSourceHandle@CHwBitmapCache@@QEBAPEAXIVDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@@Z @ 0x18017C258 (-GetExistingSharedColorSourceHandle@CHwBitmapCache@@QEBAPEAXIVDisplayId@@_NPEBV-$TMilRect@IUMilR.c)
 *     ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x18017F1A0 (-CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FO.c)
 *     ?GetPointerToValidSourceRects@CHwDeviceBitmapColorSource@@EEBAJPEAVIMILResourceCache@@VDisplayId@@AEAIAEAPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017F350 (-GetPointerToValidSourceRects@CHwDeviceBitmapColorSource@@EEBAJPEAVIMILResourceCache@@VDisplayId.c)
 * Callees:
 *     <none>
 */

void *__fastcall CHwDeviceBitmapColorSource::GetSharedHandle(CHwDeviceBitmapColorSource *this)
{
  __int64 v1; // rdx
  void *result; // rax

  v1 = *((_QWORD *)this + 20);
  result = 0LL;
  if ( v1 )
    return *(void **)(v1 + 256);
  return result;
}
