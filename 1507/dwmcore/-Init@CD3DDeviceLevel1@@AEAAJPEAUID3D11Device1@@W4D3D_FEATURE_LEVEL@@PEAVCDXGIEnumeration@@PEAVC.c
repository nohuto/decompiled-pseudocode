/*
 * XREFs of ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x18009039C
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x180091D04 (-Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumera.c)
 * Callees:
 *     ?Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z @ 0x1800586E0 (-Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x180083270 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x18008F470 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?TestLevel1Device@CD3DDeviceLevel1@@AEAAJXZ @ 0x18008F704 (-TestLevel1Device@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z @ 0x18008FA98 (-CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z.c)
 *     ?GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z @ 0x18008FC2C (-GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z.c)
 *     ?QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ @ 0x18008FDC0 (-QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x18008FE28 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?Init@CHwBrushPool@@QEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800910EC (-Init@CHwBrushPool@@QEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Init(
        CD3DDeviceLevel1 *this,
        struct ID3D11Device1 *a2,
        int a3,
        struct CDXGIEnumeration *a4,
        struct CDXGIAdapterLimited *a5)
{
  struct CDXGIAdapterLimited *v5; // rsi
  int v9; // eax
  signed int v10; // edi
  int v11; // eax
  DWORD CurrentThreadId; // eax
  int v13; // eax
  struct ID3D11Device1 **v14; // r15
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int Shaders; // eax
  int v21; // r9d
  __int64 v22; // rsi
  __int64 v23; // rsi
  unsigned int v24; // [rsp+20h] [rbp-28h]

  v5 = a5;
  *((_QWORD *)this + 72) = *((_QWORD *)a5 + 42);
  *((_QWORD *)this + 70) = a4;
  (**(void (__fastcall ***)(struct CDXGIEnumeration *))a4)(a4);
  *((_QWORD *)this + 71) = v5;
  (**(void (__fastcall ***)(struct CDXGIAdapterLimited *))v5)(v5);
  v9 = CDirect3DCaps::Initialize((CD3DDeviceLevel1 *)((char *)this + 584), *(struct _LUID *)((char *)v5 + 336), a2, a3);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1A6u);
    goto LABEL_36;
  }
  v11 = *((_DWORD *)this + 166);
  if ( *((_DWORD *)this + 165) )
  {
    if ( !v11 )
      goto LABEL_4;
    *((_DWORD *)this + 170) = 4;
  }
  else
  {
    if ( !v11 )
    {
LABEL_4:
      *((_DWORD *)this + 170) = 2;
      goto LABEL_5;
    }
    *((_DWORD *)this + 170) = 5;
  }
LABEL_5:
  ++*((_DWORD *)this + 128);
  a5 = this;
  CurrentThreadId = GetCurrentThreadId();
  *((_QWORD *)this + 127) = this;
  *((_DWORD *)this + 129) = CurrentThreadId;
  v13 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_c0c5fda1_8899_4194_b1f6_543c6d2ed314,
          (char *)this + 520);
  v10 = v13;
  if ( v13 < 0 )
  {
    v24 = 488;
LABEL_26:
    v21 = v13;
LABEL_28:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v24);
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>((__int64 *)&a5);
    goto LABEL_36;
  }
  v14 = (struct ID3D11Device1 **)((char *)this + 544);
  v13 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686,
          (char *)this + 544);
  v10 = v13;
  if ( v13 < 0 )
  {
    v24 = 496;
    goto LABEL_26;
  }
  ((void (__fastcall *)(struct ID3D11Device1 *, char *))(*v14)->lpVtbl->GetImmediateContext1)(*v14, (char *)this + 552);
  if ( !CD3DRegistryDatabase::m_fSkipDriverCheck )
  {
    v15 = *((_QWORD *)this + 71);
    if ( *(_DWORD *)(v15 + 296) == 32902 && *(_DWORD *)(v15 + 300) == 9570 )
    {
      v10 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x641u);
      v24 = 509;
LABEL_27:
      v21 = v10;
      goto LABEL_28;
    }
  }
  CD3DDeviceLevel1::GatherSupportedTextureFormats(this, *v14);
  CD3DDeviceLevel1::CheckD3D11Caps(this, *v14);
  if ( byte_180195E78 )
  {
    EnterCriticalSection(&g_ResourceCacheIndexManager);
    *((_DWORD *)this + 104) = RtlFindClearBitsAndSet(&BitMapHeader, 1u, 0);
    LeaveCriticalSection(&g_ResourceCacheIndexManager);
  }
  *((_QWORD *)this + 63) = this;
  v16 = CHwBrushPool::Init((CD3DDeviceLevel1 *)((char *)this + 424), this);
  v10 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x55u);
  }
  else
  {
    *((_QWORD *)this + 61) = this;
    v10 = 0;
  }
  if ( v10 < 0 )
  {
    v24 = 529;
    goto LABEL_27;
  }
  v17 = CD3DDeviceLevel1::TestLevel1Device((struct _LUID *)this);
  v10 = v17;
  if ( v17 < 0 )
  {
    v24 = 532;
    v21 = v17;
    goto LABEL_28;
  }
  if ( *((int *)this + 151) >= 40960 )
    CD3DDeviceLevel1::QueryWarpExtension(this);
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>((__int64 *)&a5);
  v18 = CD2DContext::InitializeD2D((struct CD2DResourceManager **)this, *((struct IDXGIDeviceDWM **)this + 65));
  v10 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x221u);
  }
  else
  {
    Shaders = CD3DDeviceLevel1::GenerateShaders(this);
    v10 = Shaders;
    if ( Shaders >= 0 )
      return CD3DDeviceLevel1::TranslateDriverError((__int64)this, v10, 3u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Shaders, 0x223u);
  }
LABEL_36:
  v22 = *((_QWORD *)this + 68);
  if ( v22 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 16LL))(*((_QWORD *)this + 68));
    *((_QWORD *)this + 68) = 0LL;
  }
  v23 = *((_QWORD *)this + 65);
  if ( v23 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23 + 16LL))(*((_QWORD *)this + 65));
    *((_QWORD *)this + 65) = 0LL;
  }
  return CD3DDeviceLevel1::TranslateDriverError((__int64)this, v10, 3u);
}
