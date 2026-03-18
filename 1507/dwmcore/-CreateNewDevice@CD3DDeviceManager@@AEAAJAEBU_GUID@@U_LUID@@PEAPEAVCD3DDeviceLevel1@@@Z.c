/*
 * XREFs of ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180090D78
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180023530 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?GetD3DDeviceInternal@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180055CC0 (-GetD3DDeviceInternal@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003FE30 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z @ 0x1800563D0 (-GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z.c)
 *     ?GetD3DDeviceForAdapter@CD3DDeviceTable@@QEAAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x18005778C (-GetD3DDeviceForAdapter@CD3DDeviceTable@@QEAAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEA.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCD3DDeviceLevel1@@UEAAPEAXI@Z @ 0x18008B4F0 (--_GCD3DDeviceLevel1@@UEAAPEAXI@Z.c)
 *     ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x180091D04 (-Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumera.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateNewDevice(
        CD3DDeviceManager *this,
        struct _GUID *a2,
        struct _LUID a3,
        struct CD3DDeviceLevel1 **a4)
{
  CDXGIEnumeration *v6; // rcx
  struct ID3D11Device1 *v7; // r13
  int AdapterNoRefFromLuid; // eax
  int v9; // edi
  int D3DDeviceForAdapter; // eax
  CDXGIEnumeration *v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 *v14; // rbx
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rax
  struct CDXGIAdapterLimited *v18; // r8
  struct CD3DDeviceLevel1 **v19; // rax
  CD3DDeviceLevel1 *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct CDXGIAdapterLimited *v25; // [rsp+40h] [rbp-C0h] BYREF
  struct ID3D11Device1 *v26; // [rsp+48h] [rbp-B8h] BYREF
  enum D3D_FEATURE_LEVEL v27; // [rsp+50h] [rbp-B0h] BYREF
  struct _GUID *v28; // [rsp+58h] [rbp-A8h]
  struct CD3DDeviceLevel1 **v29; // [rsp+60h] [rbp-A0h]
  void *v30[2]; // [rsp+70h] [rbp-90h] BYREF
  int v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+84h] [rbp-7Ch]
  _BYTE v33[288]; // [rsp+90h] [rbp-70h] BYREF

  v28 = a2;
  *a4 = 0LL;
  v29 = a4;
  v30[0] = v33;
  v26 = 0LL;
  v30[1] = v33;
  v6 = (CDXGIEnumeration *)*((_QWORD *)this + 10);
  v31 = 4;
  v32 = 4LL;
  v7 = 0LL;
  v25 = 0LL;
  AdapterNoRefFromLuid = CDXGIEnumeration::GetAdapterNoRefFromLuid(v6, a3, &v25);
  v9 = AdapterNoRefFromLuid;
  if ( AdapterNoRefFromLuid < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, AdapterNoRefFromLuid, 0x377u);
  }
  else
  {
    D3DDeviceForAdapter = CD3DDeviceTable::GetD3DDeviceForAdapter((CD3DDeviceTable *)&g_deviceTable, v25, &v26, &v27);
    v9 = D3DDeviceForAdapter;
    if ( D3DDeviceForAdapter < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, D3DDeviceForAdapter, 0x37Fu);
    v7 = v26;
  }
  v25 = 0LL;
  if ( v9 >= 0 )
  {
    v11 = (CDXGIEnumeration *)*((_QWORD *)this + 10);
    v26 = 0LL;
    v12 = CDXGIEnumeration::GetAdapterNoRefFromLuid(v11, a3, (struct CDXGIAdapterLimited **)&v26);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v12, 0x394u);
      goto LABEL_12;
    }
    v13 = CD3DDeviceLevel1::Create(
            v28,
            v7,
            v27,
            *((struct CDXGIEnumeration **)this + 10),
            (struct CDXGIAdapterLimited *)v26,
            this,
            &v25);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v13, 0x39Eu);
    }
    else
    {
      v14 = (__int64 *)((char *)this + 104);
      v15 = DynArrayImpl<0>::Grow((__int64)this + 104, 0x20u, 1, 0, 0LL);
      v9 = v15;
      if ( v15 >= 0 )
      {
        v16 = *((unsigned int *)this + 32);
        *((_DWORD *)this + 32) = v16 + 1;
        v17 = *((unsigned int *)this + 34);
        if ( (unsigned int)v17 < (unsigned int)v16 )
        {
          v22 = *v14;
          v23 = 32 * v17;
          v24 = 32 * v16;
          *(_OWORD *)(v24 + v22) = *(_OWORD *)(v23 + *v14);
          *(_OWORD *)(v24 + v22 + 16) = *(_OWORD *)(v23 + v22 + 16);
        }
        v18 = v25;
        *(_QWORD *)(32LL * *((unsigned int *)this + 34) + *v14) = v25;
        *(_QWORD *)(32LL * *((unsigned int *)this + 34) + *v14 + 8) = *((_QWORD *)v18 + 72);
        *(struct _GUID *)(32LL * *((unsigned int *)this + 34) + *v14 + 16) = *v28;
        v19 = v29;
        ++*((_DWORD *)this + 34);
        *v19 = v18;
        goto LABEL_12;
      }
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v15, 0x3A7u);
    }
    v21 = v25;
    if ( v25 )
    {
      CMILPoolResource::Release((struct CDXGIAdapterLimited *)((char *)v25 + 392));
      CD3DDeviceLevel1::`scalar deleting destructor'(v21, 1);
    }
  }
LABEL_12:
  if ( v7 )
    ((void (__fastcall *)(struct ID3D11Device1 *))v7->lpVtbl->Release)(v7);
  DynArrayImpl<1>::~DynArrayImpl<1>(v30);
  return (unsigned int)v9;
}
