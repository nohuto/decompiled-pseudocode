/*
 * XREFs of ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x180023CE8
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800B3A54 (-Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumera.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x180022270 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?TestLevel1Device@CD3DDeviceLevel1@@AEAAJXZ @ 0x180023304 (-TestLevel1Device@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?ReleaseDeviceInterfaceAndHandles@CD3DDeviceLevel1@@AEAAXXZ @ 0x180023358 (-ReleaseDeviceInterfaceAndHandles@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z @ 0x180023410 (-CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z.c)
 *     ?GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z @ 0x1800235A0 (-GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z.c)
 *     ?QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ @ 0x180023734 (-QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800237D0 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?Init@CHwBrushPool@@QEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18002BCCC (-Init@CHwBrushPool@@QEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     ?Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z @ 0x1800B13A4 (-Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Init(
        CD3DDeviceLevel1 *this,
        struct ID3D11Device1 *a2,
        enum D3D_FEATURE_LEVEL a3,
        struct CDXGIEnumeration *a4,
        struct CDXGIAdapterLimited *a5)
{
  struct CDXGIAdapterLimited *v5; // rsi
  int v9; // eax
  signed int v10; // ebx
  DWORD CurrentThreadId; // eax
  struct IDXGIDeviceDWM **v12; // r12
  int v13; // eax
  struct ID3D11Device1 **v14; // r15
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int Shaders; // eax
  int v21; // r9d
  unsigned int v22; // [rsp+20h] [rbp-38h]

  v5 = a5;
  *((_QWORD *)this + 73) = *((_QWORD *)a5 + 42);
  *((_QWORD *)this + 71) = a4;
  (**(void (__fastcall ***)(struct CDXGIEnumeration *))a4)(a4);
  *((_QWORD *)this + 72) = v5;
  (**(void (__fastcall ***)(struct CDXGIAdapterLimited *))v5)(v5);
  v9 = CDirect3DCaps::Initialize((CD3DDeviceLevel1 *)((char *)this + 592), *(struct _LUID *)((char *)v5 + 336), a2, a3);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1A8u);
LABEL_41:
    CD3DDeviceLevel1::ReleaseDeviceInterfaceAndHandles(this);
    return CD3DDeviceLevel1::TranslateDriverError((__int64)this, v10, 3u);
  }
  if ( *((_BYTE *)this + 646) )
  {
    if ( !*((_BYTE *)this + 647) )
      goto LABEL_4;
    *((_DWORD *)this + 164) = 4;
  }
  else
  {
    if ( !*((_BYTE *)this + 647) )
    {
LABEL_4:
      *((_DWORD *)this + 164) = 2;
      goto LABEL_5;
    }
    *((_DWORD *)this + 164) = 5;
  }
LABEL_5:
  ++*((_DWORD *)this + 126);
  a5 = this;
  CurrentThreadId = GetCurrentThreadId();
  *((_QWORD *)this + 121) = this;
  v12 = (struct IDXGIDeviceDWM **)((char *)this + 512);
  *((_DWORD *)this + 127) = CurrentThreadId;
  v13 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_c0c5fda1_8899_4194_b1f6_543c6d2ed314,
          (char *)this + 512);
  v10 = v13;
  if ( v13 < 0 )
  {
    v22 = 488;
LABEL_28:
    v21 = v13;
LABEL_30:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v22);
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&a5);
    goto LABEL_41;
  }
  v14 = (struct ID3D11Device1 **)((char *)this + 552);
  v13 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686,
          (char *)this + 552);
  v10 = v13;
  if ( v13 < 0 )
  {
    v22 = 495;
    goto LABEL_28;
  }
  ((void (__fastcall *)(struct ID3D11Device1 *, char *))(*v14)->lpVtbl->GetImmediateContext1)(*v14, (char *)this + 560);
  if ( !CD3DRegistryDatabase::m_fSkipDriverCheck )
  {
    v15 = *((_QWORD *)this + 72);
    if ( *(_DWORD *)(v15 + 296) == 32902 && *(_DWORD *)(v15 + 300) == 9570 )
    {
      v10 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x61Du);
      v22 = 508;
LABEL_29:
      v21 = v10;
      goto LABEL_30;
    }
  }
  CD3DDeviceLevel1::GatherSupportedTextureFormats(this, *v14);
  CD3DDeviceLevel1::CheckD3D11Caps(this, *v14);
  if ( byte_1801A3E58 )
  {
    EnterCriticalSection(&g_ResourceCacheIndexManager);
    *((_DWORD *)this + 102) = RtlFindClearBitsAndSet(&BitMapHeader, 1u, 0);
    LeaveCriticalSection(&g_ResourceCacheIndexManager);
  }
  *((_QWORD *)this + 62) = this;
  v16 = CHwBrushPool::Init((CD3DDeviceLevel1 *)((char *)this + 416), this);
  v10 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x55u);
  }
  else
  {
    *((_QWORD *)this + 60) = this;
    v10 = 0;
  }
  if ( v10 < 0 )
  {
    v22 = 528;
    goto LABEL_29;
  }
  v17 = CD3DDeviceLevel1::TestLevel1Device(this);
  v10 = v17;
  if ( v17 < 0 )
  {
    v22 = 531;
LABEL_37:
    v21 = v17;
    goto LABEL_30;
  }
  if ( *((int *)this + 153) >= 40960 )
    CD3DDeviceLevel1::QueryWarpExtension(this);
  v17 = (*(__int64 (__fastcall **)(struct IDXGIDeviceDWM *, char *))(*(_QWORD *)*v12 + 64LL))(*v12, (char *)this + 520);
  v10 = v17;
  if ( v17 < 0 )
  {
    v22 = 543;
    goto LABEL_37;
  }
  v17 = (*(__int64 (__fastcall **)(struct IDXGIDeviceDWM *, _QWORD, char *))(*(_QWORD *)*v12 + 72LL))(
          *v12,
          0LL,
          (char *)this + 528);
  v10 = v17;
  if ( v17 < 0 )
  {
    v22 = 545;
    goto LABEL_37;
  }
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&a5);
  v18 = CD2DContext::InitializeD2D((struct CD2DResourceManager **)this, *v12);
  v10 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x228u);
    goto LABEL_41;
  }
  Shaders = CD3DDeviceLevel1::GenerateShaders(this);
  v10 = Shaders;
  if ( Shaders < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Shaders, 0x22Au);
    goto LABEL_41;
  }
  return CD3DDeviceLevel1::TranslateDriverError((__int64)this, v10, 3u);
}
