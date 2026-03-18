/*
 * XREFs of ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800942EC
 * Callers:
 *     ?GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z @ 0x18002D610 (-GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?CreateColorSourceFromExistingTexture@CHwBitmapCache@@QEAAJIVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x180081D20 (-CreateColorSourceFromExistingTexture@CHwBitmapCache@@QEAAJIVDisplayId@@AEBV-$TMilRect@IUMilRect.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180094200 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x180094688 (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetSharedHandle@CHwDeviceBitmapColorSource@@QEBAPEAXXZ @ 0x1800A5A84 (-GetSharedHandle@CHwDeviceBitmapColorSource@@QEBAPEAXXZ.c)
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x1800A5DE0 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::AddExistingTextureAsColorSource(
        __int64 a1,
        struct CD3DDeviceLevel1 *a2,
        __int64 a3,
        unsigned int a4,
        struct tagRECT *a5,
        __int64 a6)
{
  CHwDeviceBitmapColorSource *v6; // rdi
  struct IBitmapSource *v9; // rdx
  int Cache; // eax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  int ColorSourceFromExistingTexture; // eax
  int v14; // eax
  int SharedHandle; // eax
  CHwDeviceBitmapColorSource *v17; // [rsp+30h] [rbp-18h] BYREF
  CMILPoolResource *v18; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+68h] [rbp+20h]

  v19 = a4;
  v18 = 0LL;
  v6 = 0LL;
  v17 = 0LL;
  if ( a1 )
    v9 = (struct IBitmapSource *)(a1 + 16);
  else
    v9 = 0LL;
  Cache = CHwBitmapCache::GetCache(a2, v9, 1, &v18);
  v12 = Cache;
  if ( Cache < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Cache, 0x1DFu);
  }
  else
  {
    ColorSourceFromExistingTexture = CHwBitmapCache::CreateColorSourceFromExistingTexture(
                                       (__int64)v18,
                                       v11,
                                       v19,
                                       (__int64)a5,
                                       a6,
                                       (__int64)&v17);
    v12 = ColorSourceFromExistingTexture;
    if ( ColorSourceFromExistingTexture < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ColorSourceFromExistingTexture, 0x1E5u);
      v6 = v17;
    }
    else
    {
      v6 = v17;
      v14 = CBitmapOfDeviceBitmaps::SetDeviceBitmapColorSource(a1, 0LL, v19, v17);
      v12 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1E9u);
      }
      else
      {
        SharedHandle = (unsigned int)CHwDeviceBitmapColorSource::GetSharedHandle(v6);
        CBitmapOfDeviceBitmaps::AddUpdateRect(a1, SharedHandle, a5);
      }
    }
  }
  if ( v6 )
    CMILRefCountBase::Release(v6);
  if ( v18 )
    CMILPoolResource::Release(v18);
  return v12;
}
