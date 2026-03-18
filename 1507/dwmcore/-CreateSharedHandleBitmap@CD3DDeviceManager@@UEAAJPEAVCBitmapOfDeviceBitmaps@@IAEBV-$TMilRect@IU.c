/*
 * XREFs of ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x180132EE0
 * Callers:
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x180108A1C (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z @ 0x180019298 (-GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x180048F10 (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180054C34 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetDisplayPixelFormat@CDisplaySet@@QEBA?AW4DXGI_FORMAT@@VDisplayId@@@Z @ 0x180054DD0 (-GetDisplayPixelFormat@CDisplaySet@@QEBA-AW4DXGI_FORMAT@@VDisplayId@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180055818 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180056088 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x180056C48 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x180083270 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     ?CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x18013B6C8 (-CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV-$TMilRect@IUMil.c)
 *     ?GetExistingSharedColorSourceHandle@CHwBitmapCache@@QEBAPEAXIVDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@@Z @ 0x18013B828 (-GetExistingSharedColorSourceHandle@CHwBitmapCache@@QEBAPEAXIVDisplayId@@_NPEBV-$TMilRect@IUMilR.c)
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
        _QWORD *a11)
{
  int v11; // r8d
  CD3DDeviceManager *v12; // rsi
  CDisplaySet *v13; // r12
  CMILRefCountBase *v15; // r15
  enum DXGI_FORMAT v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // edi
  int D3DDevice; // eax
  CD3DDeviceLevel1 *v21; // r14
  struct IBitmapSource *v22; // rdx
  int Cache; // eax
  int v24; // r9d
  unsigned int v25; // ebx
  CDisplayManager *v26; // rcx
  int CurrentDisplaySet; // eax
  enum DXGI_FORMAT DisplayPixelFormat; // eax
  int SupportedTextureFormat; // eax
  unsigned int v30; // r9d
  enum DXGI_FORMAT v31; // ebx
  int SharedColorSource; // eax
  int v33; // eax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  CD3DDeviceLevel1 *v37; // [rsp+40h] [rbp-30h] BYREF
  CMILPoolResource *v38; // [rsp+48h] [rbp-28h] BYREF
  struct CDisplaySet *v39; // [rsp+50h] [rbp-20h] BYREF
  CMILRefCountBase *v40; // [rsp+58h] [rbp-18h] BYREF
  __int64 ExistingSharedColorSourceHandle; // [rsp+60h] [rbp-10h] BYREF
  enum DXGI_FORMAT v42; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v43; // [rsp+B8h] [rbp+48h]
  unsigned int v44; // [rsp+C0h] [rbp+50h]
  __int64 v45; // [rsp+C8h] [rbp+58h]

  v45 = a4;
  v44 = a3;
  v43 = a2;
  v11 = a10;
  v12 = (CD3DDeviceManager *)(a1 - 16);
  v13 = 0LL;
  v15 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v16 = *a5;
  *a5 = DXGI_FORMAT_UNKNOWN;
  v17 = (__int64)a9;
  v42 = v16;
  v40 = 0LL;
  *a11 = 0LL;
  v18 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(a1 - 16, v17, v11);
  v19 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801757BC, 1u, v18, 0x837u);
    return v19;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice(v12, a8, a9, &v37);
  v21 = v37;
  v19 = D3DDevice;
  if ( D3DDevice >= 0 )
  {
    ++*((_DWORD *)v37 + 128);
    *((_DWORD *)v21 + 129) = GetCurrentThreadId();
    if ( a2 )
      v22 = (struct IBitmapSource *)(a2 + 16);
    else
      v22 = 0LL;
    Cache = CHwBitmapCache::GetCache(v21, v22, 1, &v38);
    v19 = Cache;
    if ( Cache < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801757BC, 1u, Cache, 0x848u);
LABEL_10:
      CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>((__int64 *)&v37);
      goto LABEL_27;
    }
    v25 = a10;
    LOBYTE(v24) = a7;
    ExistingSharedColorSourceHandle = CHwBitmapCache::GetExistingSharedColorSourceHandle(
                                        (_DWORD)v38,
                                        v44,
                                        a10,
                                        v24,
                                        v45,
                                        (__int64)&v42);
    if ( ExistingSharedColorSourceHandle )
    {
      v31 = v42;
    }
    else
    {
      if ( a6 )
      {
        CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v26, &v39);
        v19 = CurrentDisplaySet;
        if ( CurrentDisplaySet < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &dword_1801757BC, 1u, CurrentDisplaySet, 0x865u);
          CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>((__int64 *)&v37);
          v13 = v39;
LABEL_27:
          if ( v38 )
            CMILPoolResource::Release(v38);
          goto LABEL_29;
        }
        v13 = v39;
        DisplayPixelFormat = (unsigned int)CDisplaySet::GetDisplayPixelFormat((__int64)v39, a10);
        SupportedTextureFormat = CD3DDeviceLevel1::GetSupportedTextureFormat(
                                   (enum DXGI_FORMAT *)v21,
                                   v42,
                                   DisplayPixelFormat,
                                   0,
                                   1,
                                   &v42);
        v19 = SupportedTextureFormat;
        if ( SupportedTextureFormat < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &dword_1801757BC, 1u, SupportedTextureFormat, 0x86Du);
          goto LABEL_10;
        }
        v25 = a10;
      }
      v30 = v25;
      v31 = v42;
      SharedColorSource = CHwBitmapCache::CreateSharedColorSource(
                            (_DWORD)v38,
                            v42,
                            v44,
                            v30,
                            a7,
                            v45,
                            (__int64)&ExistingSharedColorSourceHandle,
                            (__int64)&v40);
      v19 = SharedColorSource;
      if ( SharedColorSource < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801757BC, 1u, SharedColorSource, 0x87Bu);
        CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>((__int64 *)&v37);
        v15 = v40;
        goto LABEL_25;
      }
      v15 = v40;
      v33 = CBitmapOfDeviceBitmaps::SetDeviceBitmapColorSource(v43, v44, a10, (__int64)v40);
      v19 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801757BC, 1u, v33, 0x87Fu);
        CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>((__int64 *)&v37);
        goto LABEL_25;
      }
    }
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>((__int64 *)&v37);
    v34 = a11;
    *a5 = v31;
    *v34 = v35;
LABEL_25:
    if ( v15 )
      CMILRefCountBase::Release(v15);
    goto LABEL_27;
  }
  MilInstrumentationCheckHR(0x14u, &dword_1801757BC, 1u, D3DDevice, 0x839u);
LABEL_29:
  if ( v21 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v21 + 392));
  if ( v13 )
    CDisplaySet::Release(v13);
  return v19;
}
