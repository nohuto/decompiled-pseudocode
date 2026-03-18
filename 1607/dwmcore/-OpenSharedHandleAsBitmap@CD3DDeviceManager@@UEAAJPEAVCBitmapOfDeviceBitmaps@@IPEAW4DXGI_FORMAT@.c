/*
 * XREFs of ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x1800352B0
 * Callers:
 *     ?EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x18002A18C (-EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034ED0 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180035208 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x180081DFC (-OpenSharedHandleAsColorSource@CHwBitmapCache@@QEAAJIVDisplayId@@PEAX_NIPEAPEAVCHwDeviceBitmapCo.c)
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x180094688 (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x1800A5DE0 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::OpenSharedHandleAsBitmap(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        _QWORD *a5,
        struct _GUID *a6,
        struct _LUID a7,
        unsigned int a8,
        __int64 a9,
        char a10,
        int a11)
{
  _QWORD *v11; // r12
  CD3DDeviceManager *v12; // r13
  unsigned int v13; // r8d
  struct CD3DDeviceLevel1 *v15; // rsi
  CMILPoolResource *v16; // r14
  CMILRefCountBase *v17; // rdi
  int v18; // eax
  unsigned int v19; // ebx
  int D3DDevice; // eax
  struct IBitmapSource *v21; // rdx
  int Cache; // eax
  unsigned int v23; // r13d
  int v24; // eax
  int v25; // eax
  int v26; // eax
  CMILPoolResource *v28; // [rsp+40h] [rbp-20h] BYREF
  struct CD3DDeviceLevel1 *v29[2]; // [rsp+48h] [rbp-18h] BYREF
  CMILRefCountBase *v30; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v31; // [rsp+B0h] [rbp+50h]
  _DWORD *v32; // [rsp+B8h] [rbp+58h]

  v32 = a4;
  v31 = a3;
  v11 = a5;
  v12 = (CD3DDeviceManager *)(a1 - 16);
  v13 = a8;
  *a4 = 0;
  v15 = 0LL;
  v11[1] = 0LL;
  v16 = 0LL;
  *v11 = 0LL;
  v17 = 0LL;
  v29[0] = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  v18 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(a1 - 16, *(_QWORD *)&a7, v13);
  v19 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v18, 0x985u);
    goto LABEL_9;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice(v12, a6, a7, v29);
  v19 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, D3DDevice, 0x987u);
    v15 = v29[0];
    goto LABEL_13;
  }
  if ( a2 )
    v21 = (struct IBitmapSource *)(a2 + 16);
  else
    v21 = 0LL;
  v15 = v29[0];
  Cache = CHwBitmapCache::GetCache(v29[0], v21, 1, &v28);
  v19 = Cache;
  if ( Cache >= 0 )
  {
    v16 = v28;
    v23 = v31;
    v24 = CHwBitmapCache::OpenSharedHandleAsColorSource(v28, v31, a8, a9, a10, a11, &v30);
    v19 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v24, 0x9A4u);
      v17 = v30;
    }
    else
    {
      v17 = v30;
      v25 = CBitmapOfDeviceBitmaps::SetDeviceBitmapColorSource(a2, v23, a8, v30);
      v19 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v25, 0x9A8u);
      }
      else
      {
        v26 = *((_DWORD *)v17 + 58);
        v29[0] = 0LL;
        *v32 = v26;
        v29[1] = *((struct CD3DDeviceLevel1 **)v17 + 17);
        *(_OWORD *)v11 = *(_OWORD *)v29;
      }
    }
LABEL_9:
    if ( v17 )
      CMILRefCountBase::Release(v17);
    goto LABEL_11;
  }
  MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, Cache, 0x993u);
  v16 = v28;
LABEL_11:
  if ( v16 )
    CMILPoolResource::Release(v16);
LABEL_13:
  if ( v15 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v15 + 408));
  return v19;
}
