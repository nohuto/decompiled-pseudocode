/*
 * XREFs of ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x18007F914
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x180021598 (-Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILP.c)
 * Callees:
 *     ?Init@CHwBrushPool@@QEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18002F828 (-Init@CHwBrushPool@@QEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x18007E428 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?TestLevel1Device@CD3DDeviceLevel1@@AEAAJXZ @ 0x18007EEC4 (-TestLevel1Device@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?ReleaseDeviceInterfaceAndHandles@CD3DDeviceLevel1@@AEAAXXZ @ 0x18007EF1C (-ReleaseDeviceInterfaceAndHandles@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z @ 0x18007EF9C (-CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z.c)
 *     ?GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z @ 0x18007F0F4 (-GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z.c)
 *     ?QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ @ 0x18007F280 (-QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x18007F2F4 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z @ 0x1800B2880 (-Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Init(
        CD3DDeviceLevel1 *this,
        struct ID3D11Device1 *a2,
        enum D3D_FEATURE_LEVEL a3,
        struct CDXGIEnumeration *a4,
        struct CDXGIAdapterLimited *a5)
{
  int v8; // eax
  int v9; // ebx
  int v10; // r9d
  struct IDXGIDeviceDWM **v11; // r14
  int v12; // eax
  struct ID3D11Device1 **v13; // rdi
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int Shaders; // eax
  unsigned int v23; // [rsp+20h] [rbp-18h]

  *((_QWORD *)this + 81) = *((_QWORD *)a5 + 42);
  *((_QWORD *)this + 79) = a4;
  (**(void (__fastcall ***)(struct CDXGIEnumeration *))a4)(a4);
  *((_QWORD *)this + 80) = a5;
  (**(void (__fastcall ***)(struct CDXGIAdapterLimited *))a5)(a5);
  v8 = CDirect3DCaps::Initialize((CD3DDeviceLevel1 *)((char *)this + 656), *(struct _LUID *)((char *)a5 + 336), a2, a3);
  v9 = v8;
  if ( v8 < 0 )
  {
    v23 = 537;
    v10 = v8;
LABEL_67:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v23);
    CD3DDeviceLevel1::ReleaseDeviceInterfaceAndHandles(this);
    return CD3DDeviceLevel1::TranslateDriverError((__int64)this, v9, 2);
  }
  if ( *((_BYTE *)this + 710) )
  {
    if ( *((_BYTE *)this + 711) )
    {
      *((_DWORD *)this + 180) = 4;
      goto LABEL_9;
    }
  }
  else if ( *((_BYTE *)this + 711) )
  {
    *((_DWORD *)this + 180) = 5;
    goto LABEL_9;
  }
  *((_DWORD *)this + 180) = 2;
LABEL_9:
  *((_QWORD *)this + 126) = this;
  v11 = (struct IDXGIDeviceDWM **)((char *)this + 528);
  v12 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_c0c5fda1_8899_4194_b1f6_543c6d2ed314,
          (char *)this + 528);
  v9 = v12;
  if ( v12 < 0 )
  {
    if ( IsOOM(v12) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    v23 = 592;
    goto LABEL_66;
  }
  v13 = (struct ID3D11Device1 **)((char *)this + 568);
  v14 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686,
          (char *)this + 568);
  v9 = v14;
  if ( v14 < 0 )
  {
    if ( IsOOM(v14) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    v23 = 599;
LABEL_66:
    v10 = v9;
    goto LABEL_67;
  }
  ((void (__fastcall *)(struct ID3D11Device1 *, char *))(*v13)->lpVtbl->GetImmediateContext1)(*v13, (char *)this + 576);
  if ( !CD3DRegistryDatabase::m_fSkipDriverCheck )
  {
    v15 = *((_QWORD *)this + 80);
    if ( *(_DWORD *)(v15 + 296) == 32902 && *(_DWORD *)(v15 + 300) == 9570 )
    {
      v9 = -2147467259;
      if ( IsOOM(-2147467259) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x6A1u);
      if ( IsOOM(-2147467259) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      v23 = 612;
LABEL_21:
      v10 = v9;
      goto LABEL_67;
    }
  }
  CD3DDeviceLevel1::GatherSupportedTextureFormats(this, *v13);
  CD3DDeviceLevel1::CheckD3D11Caps(this, *v13);
  if ( byte_1801F0178 )
  {
    EnterCriticalSection(&g_ResourceCacheIndexManager);
    *((_DWORD *)this + 108) = RtlFindClearBitsAndSet(&BitMapHeader, 1u, 0);
    LeaveCriticalSection(&g_ResourceCacheIndexManager);
  }
  v16 = CHwBrushPool::Init((CD3DDeviceLevel1 *)((char *)this + 440), this);
  v9 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x4Eu);
  if ( v9 < 0 )
  {
    if ( IsOOM(v9) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    v23 = 632;
    goto LABEL_21;
  }
  v17 = CD3DDeviceLevel1::TestLevel1Device(this);
  v9 = v17;
  if ( v17 < 0 )
  {
    if ( IsOOM(v17) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    v23 = 635;
    goto LABEL_21;
  }
  if ( *((int *)this + 169) >= 40960 )
    CD3DDeviceLevel1::QueryWarpExtension(this);
  v18 = (*(__int64 (__fastcall **)(struct IDXGIDeviceDWM *, char *))(*(_QWORD *)*v11 + 64LL))(*v11, (char *)this + 536);
  v9 = v18;
  if ( v18 < 0 )
  {
    if ( IsOOM(v18) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    v23 = 647;
    goto LABEL_21;
  }
  v19 = (*(__int64 (__fastcall **)(struct IDXGIDeviceDWM *, _QWORD, char *))(*(_QWORD *)*v11 + 72LL))(
          *v11,
          0LL,
          (char *)this + 544);
  v9 = v19;
  if ( v19 < 0 )
  {
    if ( IsOOM(v19) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    v23 = 649;
    goto LABEL_21;
  }
  v20 = CD2DContext::InitializeD2D((struct CD2DResourceManager **)this, *v11);
  v9 = v20;
  if ( v20 < 0 )
  {
    if ( IsOOM(v20) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    v23 = 654;
    goto LABEL_21;
  }
  Shaders = CD3DDeviceLevel1::GenerateShaders(this);
  v9 = Shaders;
  if ( Shaders < 0 )
  {
    if ( IsOOM(Shaders) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    v23 = 656;
    goto LABEL_21;
  }
  return CD3DDeviceLevel1::TranslateDriverError((__int64)this, v9, 2);
}
