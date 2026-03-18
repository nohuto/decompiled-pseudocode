/*
 * XREFs of ?GetExistingSharedColorSourceHandle@CHwBitmapCache@@QEBAPEAXIVDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@@Z @ 0x18014B99C
 * Callers:
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1800FEC50 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 * Callees:
 *     ?GetSharedHandle@CHwDeviceBitmapColorSource@@QEBAPEAXXZ @ 0x18002B024 (-GetSharedHandle@CHwDeviceBitmapColorSource@@QEBAPEAXXZ.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18002D3B8 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

void *__fastcall CHwBitmapCache::GetExistingSharedColorSourceHandle(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        __int64 a5,
        _DWORD *a6)
{
  __int64 v6; // r10
  __int64 v7; // r11

  v6 = *(_QWORD *)(a1 + 496);
  v7 = 0LL;
  if ( v6 )
  {
    do
    {
      if ( *(_DWORD *)(v6 + 328) == a2 )
        break;
      v6 = *(_QWORD *)(v6 + 336);
    }
    while ( v6 );
    if ( v6
      && *(_DWORD *)(v6 + 152) == a3
      && (!a4 || (*(_BYTE *)(v6 + 248) & 0x20) != 0)
      && (!a5 || TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(v6 + 120, a5)) )
    {
      *a6 = *(_DWORD *)(v6 + 232);
      return CHwDeviceBitmapColorSource::GetSharedHandle((CHwDeviceBitmapColorSource *)v6);
    }
  }
  return (void *)v7;
}
