/*
 * XREFs of ?GetDeviceCapsForAdapter@CD3DDeviceTable@@QEAAJPEAVCDXGIAdapterLimited@@PEAVCDirect3DCaps@@@Z @ 0x1800578CC
 * Callers:
 *     ?ReadGraphicsAccelerationCaps@CDisplay@@AEAAJPEBVCDXGIEnumeration@@@Z @ 0x180057BBC (-ReadGraphicsAccelerationCaps@CDisplay@@AEAAJPEBVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?FindAdapter@CD3DDeviceTable@@AEAAHAEAUDXGI_ADAPTER_DESC@@PEAI@Z @ 0x180057720 (-FindAdapter@CD3DDeviceTable@@AEAAHAEAUDXGI_ADAPTER_DESC@@PEAI@Z.c)
 *     ?Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z @ 0x1800586E0 (-Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateAdapterDevicePair@CD3DDeviceTable@@AEAAJPEAVCDXGIAdapterLimited@@PEAI@Z @ 0x1800918B4 (-CreateAdapterDevicePair@CD3DDeviceTable@@AEAAJPEAVCDXGIAdapterLimited@@PEAI@Z.c)
 */

__int64 __fastcall CD3DDeviceTable::GetDeviceCapsForAdapter(
        CD3DDeviceTable *this,
        struct _LUID *a2,
        struct CDirect3DCaps *a3)
{
  struct DXGI_ADAPTER_DESC *v3; // r9
  struct _LUID *v5; // rax
  __int64 v6; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  int v18; // eax
  unsigned int v19; // ebx
  int v21; // eax
  struct DXGI_ADAPTER_DESC v22; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v23; // [rsp+178h] [rbp+10h] BYREF

  v23 = 0;
  v3 = &v22;
  v5 = a2 + 5;
  v6 = 2LL;
  do
  {
    v9 = *(_OWORD *)&v5[2].LowPart;
    *(_OWORD *)v3->Description = *(_OWORD *)&v5->LowPart;
    v10 = *(_OWORD *)&v5[4].LowPart;
    *(_OWORD *)&v3->Description[8] = v9;
    v11 = *(_OWORD *)&v5[6].LowPart;
    *(_OWORD *)&v3->Description[16] = v10;
    v12 = *(_OWORD *)&v5[8].LowPart;
    *(_OWORD *)&v3->Description[24] = v11;
    v13 = *(_OWORD *)&v5[10].LowPart;
    *(_OWORD *)&v3->Description[32] = v12;
    v14 = *(_OWORD *)&v5[12].LowPart;
    *(_OWORD *)&v3->Description[40] = v13;
    v15 = *(_OWORD *)&v5[14].LowPart;
    v5 += 16;
    *(_OWORD *)&v3->Description[48] = v14;
    v3 = (struct DXGI_ADAPTER_DESC *)((char *)v3 + 128);
    *(_OWORD *)&v3[-1].SharedSystemMemory = v15;
    --v6;
  }
  while ( v6 );
  v16 = *(_OWORD *)&v5[2].LowPart;
  *(_OWORD *)v3->Description = *(_OWORD *)&v5->LowPart;
  v17 = *(_OWORD *)&v5[4].LowPart;
  *(_OWORD *)&v3->Description[8] = v16;
  *(_OWORD *)&v3->Description[16] = v17;
  if ( (unsigned int)CD3DDeviceTable::FindAdapter(this, &v22, &v23)
    || (v21 = CD3DDeviceTable::CreateAdapterDevicePair(this, (struct CDXGIAdapterLimited *)a2, &v23), v19 = v21, v21 >= 0) )
  {
    v18 = CDirect3DCaps::Initialize(
            a3,
            a2[42],
            *(struct ID3D11Device1 **)(*((_QWORD *)this + 10) + 8LL * v23),
            (enum D3D_FEATURE_LEVEL)*(_DWORD *)(*((_QWORD *)this + 14) + 4LL * v23));
    v19 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x54u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x4Fu);
  }
  return v19;
}
