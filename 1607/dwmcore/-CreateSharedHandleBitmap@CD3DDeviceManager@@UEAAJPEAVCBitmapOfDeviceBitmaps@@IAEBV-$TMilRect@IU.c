/*
 * XREFs of ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x180112D90
 * Callers:
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x1800BC508 (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034ED0 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180035208 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?GetDisplayPixelFormat@CDisplaySet@@QEBA?AW4DXGI_FORMAT@@VDisplayId@@@Z @ 0x180035DB8 (-GetDisplayPixelFormat@CDisplaySet@@QEBA-AW4DXGI_FORMAT@@VDisplayId@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z @ 0x180080764 (-GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z.c)
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x180094688 (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x1800A5DE0 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 *     ?CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x18017C114 (-CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV-$TMilRect@IUMil.c)
 *     ?GetExistingSharedColorSourceHandle@CHwBitmapCache@@QEBAPEAXIVDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@@Z @ 0x18017C258 (-GetExistingSharedColorSourceHandle@CHwBitmapCache@@QEBAPEAXIVDisplayId@@_NPEBV-$TMilRect@IUMilR.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateSharedHandleBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        enum DXGI_FORMAT *a5,
        char a6,
        char a7,
        struct _GUID *a8,
        struct _LUID a9,
        unsigned int a10,
        CD3DDeviceLevel1 **a11)
{
  unsigned int v11; // r8d
  CD3DDeviceManager *v12; // rsi
  CMILPoolResource *v14; // r12
  CDisplaySet *v15; // r13
  enum DXGI_FORMAT *v16; // r15
  CMILRefCountBase *v17; // r14
  enum DXGI_FORMAT v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // edi
  int D3DDevice; // eax
  struct IBitmapSource *v23; // rdx
  int Cache; // eax
  int v25; // r9d
  unsigned int v26; // ebx
  CD3DDeviceLevel1 *ExistingSharedColorSourceHandle; // rax
  __int64 v28; // rdx
  CDisplayManager *v29; // rcx
  __int64 v30; // r8
  int CurrentDisplaySet; // eax
  enum DXGI_FORMAT DisplayPixelFormat; // eax
  int SupportedTextureFormat; // eax
  unsigned int v34; // r9d
  enum DXGI_FORMAT v35; // ebx
  int SharedColorSource; // eax
  int v37; // eax
  struct CDisplaySet *v39; // [rsp+40h] [rbp-28h] BYREF
  CMILRefCountBase *v40; // [rsp+48h] [rbp-20h] BYREF
  CMILPoolResource *v41; // [rsp+50h] [rbp-18h] BYREF
  CD3DDeviceLevel1 *v42[2]; // [rsp+58h] [rbp-10h] BYREF
  enum DXGI_FORMAT v43; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v44; // [rsp+B8h] [rbp+50h]
  unsigned int v45; // [rsp+C0h] [rbp+58h]
  __int64 v46; // [rsp+C8h] [rbp+60h]

  v46 = a4;
  v45 = a3;
  v44 = a2;
  v11 = a10;
  v12 = (CD3DDeviceManager *)(a1 - 16);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v39 = 0LL;
  v17 = 0LL;
  v42[0] = 0LL;
  v41 = 0LL;
  v18 = *a5;
  *a5 = DXGI_FORMAT_UNKNOWN;
  v19 = (__int64)a9;
  v43 = v18;
  v40 = 0LL;
  *a11 = 0LL;
  v20 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(a1 - 16, v19, v11);
  v21 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801C7480, 1u, v20, 0x7BCu);
LABEL_24:
    if ( v17 )
      CMILRefCountBase::Release(v17);
    goto LABEL_26;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice(v12, a8, a9, v42);
  v21 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801C7480, 1u, D3DDevice, 0x7BEu);
    v16 = (enum DXGI_FORMAT *)v42[0];
    goto LABEL_28;
  }
  if ( a2 )
    v23 = (struct IBitmapSource *)(a2 + 16);
  else
    v23 = 0LL;
  v16 = (enum DXGI_FORMAT *)v42[0];
  Cache = CHwBitmapCache::GetCache(v42[0], v23, 1, &v41);
  v21 = Cache;
  if ( Cache < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801C7480, 1u, Cache, 0x7CAu);
    v14 = v41;
  }
  else
  {
    v14 = v41;
    v26 = a10;
    LOBYTE(v25) = a7;
    ExistingSharedColorSourceHandle = (CD3DDeviceLevel1 *)CHwBitmapCache::GetExistingSharedColorSourceHandle(
                                                            (_DWORD)v41,
                                                            v45,
                                                            a10,
                                                            v25,
                                                            v46,
                                                            (__int64)&v43);
    v42[0] = ExistingSharedColorSourceHandle;
    if ( ExistingSharedColorSourceHandle )
    {
      v35 = v43;
LABEL_20:
      *a5 = v35;
      *a11 = ExistingSharedColorSourceHandle;
      goto LABEL_24;
    }
    if ( !a6 )
    {
LABEL_13:
      v34 = v26;
      v35 = v43;
      SharedColorSource = CHwBitmapCache::CreateSharedColorSource(
                            (_DWORD)v14,
                            v43,
                            v45,
                            v34,
                            a7,
                            v46,
                            (__int64)v42,
                            (__int64)&v40);
      v21 = SharedColorSource;
      if ( SharedColorSource < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801C7480, 1u, SharedColorSource, 0x7FDu);
        v17 = v40;
        goto LABEL_24;
      }
      v17 = v40;
      v37 = CBitmapOfDeviceBitmaps::SetDeviceBitmapColorSource(v44, v45, a10, (__int64)v40);
      v21 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801C7480, 1u, v37, 0x801u);
        goto LABEL_24;
      }
      ExistingSharedColorSourceHandle = v42[0];
      goto LABEL_20;
    }
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v29, &v39);
    v21 = CurrentDisplaySet;
    if ( CurrentDisplaySet >= 0 )
    {
      v15 = v39;
      DisplayPixelFormat = (unsigned int)CDisplaySet::GetDisplayPixelFormat((__int64)v39, a10);
      SupportedTextureFormat = CD3DDeviceLevel1::GetSupportedTextureFormat(v16, v43, DisplayPixelFormat, 0, 1, &v43);
      v21 = SupportedTextureFormat;
      if ( SupportedTextureFormat < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801C7480, 1u, SupportedTextureFormat, 0x7EFu);
        goto LABEL_26;
      }
      v26 = a10;
      goto LABEL_13;
    }
    MilInstrumentationCheckHR(0x14u, &dword_1801C7480, 1u, CurrentDisplaySet, 0x7E7u);
    v15 = v39;
  }
LABEL_26:
  if ( v14 )
    CMILPoolResource::Release(v14);
LABEL_28:
  if ( v16 )
    CMILPoolResource::Release((CMILPoolResource *)(v16 + 102));
  if ( v15 )
    CDisplaySet::Release(v15, v28, v30);
  return v21;
}
