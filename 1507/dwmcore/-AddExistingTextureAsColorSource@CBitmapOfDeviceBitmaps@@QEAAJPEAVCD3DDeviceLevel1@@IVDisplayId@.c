/*
 * XREFs of ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x180048B64
 * Callers:
 *     ?GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z @ 0x180082D00 (-GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?GetSharedHandle@CHwDeviceBitmapColorSource@@QEBAPEAXXZ @ 0x180014274 (-GetSharedHandle@CHwDeviceBitmapColorSource@@QEBAPEAXXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CreateColorSourceFromExistingTexture@CHwBitmapCache@@QEAAJIVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800183E0 (-CreateColorSourceFromExistingTexture@CHwBitmapCache@@QEAAJIVDisplayId@@AEBV-$TMilRect@IUMilRect.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048AAC (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x180048F10 (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x180056C48 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x180083270 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::AddExistingTextureAsColorSource(
        __int64 a1,
        struct CD3DDeviceLevel1 *a2,
        __int64 a3,
        unsigned int a4,
        struct tagRECT *a5,
        __int64 a6)
{
  struct IBitmapSource *v8; // rdx
  int Cache; // eax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  int ColorSourceFromExistingTexture; // eax
  int v13; // eax
  int SharedHandle; // eax
  CMILPoolResource *v16; // [rsp+30h] [rbp-10h] BYREF
  CHwDeviceBitmapColorSource *v17; // [rsp+60h] [rbp+20h] BYREF
  struct CD3DDeviceLevel1 *v18; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v19; // [rsp+78h] [rbp+38h]

  v19 = a4;
  v16 = 0LL;
  v17 = 0LL;
  ++*((_DWORD *)a2 + 128);
  v18 = a2;
  *((_DWORD *)a2 + 129) = GetCurrentThreadId();
  if ( a1 )
    v8 = (struct IBitmapSource *)(a1 + 16);
  else
    v8 = 0LL;
  Cache = CHwBitmapCache::GetCache(a2, v8, 1, &v16);
  v11 = Cache;
  if ( Cache < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Cache, 0x1E2u);
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v18);
    goto LABEL_9;
  }
  ColorSourceFromExistingTexture = CHwBitmapCache::CreateColorSourceFromExistingTexture(
                                     (__int64)v16,
                                     v10,
                                     v19,
                                     a5,
                                     a6,
                                     (__int64)&v17);
  v11 = ColorSourceFromExistingTexture;
  if ( ColorSourceFromExistingTexture < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ColorSourceFromExistingTexture, 0x1E8u);
  }
  else
  {
    v13 = CBitmapOfDeviceBitmaps::SetDeviceBitmapColorSource(a1, 0LL, v19, v17);
    v11 = v13;
    if ( v13 >= 0 )
    {
      CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v18);
      SharedHandle = (unsigned int)CHwDeviceBitmapColorSource::GetSharedHandle(v17);
      CBitmapOfDeviceBitmaps::AddUpdateRect(a1, SharedHandle, a5);
      goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1ECu);
  }
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v18);
LABEL_7:
  if ( v17 )
    CMILRefCountBase::Release(v17);
LABEL_9:
  if ( v16 )
    CMILPoolResource::Release(v16);
  return v11;
}
