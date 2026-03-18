/*
 * XREFs of ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x1800561A0
 * Callers:
 *     ?EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x18007DE44 (-EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800184E0 (-OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapCo.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x180048F10 (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180055818 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180056088 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x180056C48 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x180083270 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 */

__int64 __fastcall CD3DDeviceManager::OpenSharedHandleAsBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        struct CD3DDeviceLevel1 *a5,
        struct _GUID *a6,
        struct _LUID a7,
        unsigned int a8,
        void *a9,
        char a10,
        unsigned int a11)
{
  CD3DDeviceManager *v11; // rdi
  struct CD3DDeviceLevel1 *v12; // r12
  int v14; // r8d
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // ebx
  int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v20; // rsi
  struct IBitmapSource *v21; // rdx
  int Cache; // eax
  int v23; // eax
  CMILRefCountBase *v24; // r14
  int v25; // eax
  int v26; // edx
  struct CD3DDeviceLevel1 *v28; // [rsp+40h] [rbp-20h] BYREF
  CMILRefCountBase *v29[2]; // [rsp+48h] [rbp-18h] BYREF
  CMILPoolResource *v30; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v31; // [rsp+B0h] [rbp+50h]
  _DWORD *v32; // [rsp+B8h] [rbp+58h]

  v32 = a4;
  v31 = a3;
  *a4 = 0;
  v11 = (CD3DDeviceManager *)(a1 - 16);
  v12 = a5;
  v14 = a8;
  v16 = (__int64)a7;
  v28 = 0LL;
  *((_DWORD *)a5 + 3) = 0;
  *((_DWORD *)v12 + 2) = 0;
  *((_DWORD *)v12 + 1) = 0;
  *(_DWORD *)v12 = 0;
  v30 = 0LL;
  v29[0] = 0LL;
  v17 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(a1 - 16, v16, v14);
  v18 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v17, 0x9A2u);
    return v18;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice(v11, a6, a7, &v28);
  v20 = v28;
  v18 = D3DDevice;
  if ( D3DDevice >= 0 )
  {
    a5 = v28;
    ++*((_DWORD *)v28 + 128);
    *((_DWORD *)v20 + 129) = GetCurrentThreadId();
    if ( a2 )
      v21 = (struct IBitmapSource *)(a2 + 16);
    else
      v21 = 0LL;
    Cache = CHwBitmapCache::GetCache(v20, v21, 1, &v30);
    v18 = Cache;
    if ( Cache < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, Cache, 0x9B3u);
      CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&a5);
LABEL_11:
      if ( v30 )
        CMILPoolResource::Release(v30);
      goto LABEL_13;
    }
    v23 = CHwBitmapCache::OpenSharedHandleAsColorSource((__int64)v30, a3, a8, a9, a10, a11, (__int64 *)v29);
    v24 = v29[0];
    v18 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v23, 0x9C4u);
    }
    else
    {
      v25 = CBitmapOfDeviceBitmaps::SetDeviceBitmapColorSource(a2, v31, a8, (__int64)v29[0]);
      v18 = v25;
      if ( v25 >= 0 )
      {
        CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&a5);
        v26 = *((_DWORD *)v24 + 58);
        v29[0] = 0LL;
        *v32 = v26;
        v29[1] = *((CMILRefCountBase **)v24 + 17);
        *(_OWORD *)v12 = *(_OWORD *)v29;
        goto LABEL_9;
      }
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v25, 0x9C8u);
    }
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&a5);
LABEL_9:
    if ( v24 )
      CMILRefCountBase::Release(v24);
    goto LABEL_11;
  }
  MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, D3DDevice, 0x9A4u);
LABEL_13:
  if ( v20 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v20 + 392));
  return v18;
}
