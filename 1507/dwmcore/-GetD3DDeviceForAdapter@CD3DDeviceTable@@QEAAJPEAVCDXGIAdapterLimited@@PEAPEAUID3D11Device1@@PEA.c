/*
 * XREFs of ?GetD3DDeviceForAdapter@CD3DDeviceTable@@QEAAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x18005778C
 * Callers:
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x180056420 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180090D78 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?FindAdapter@CD3DDeviceTable@@AEAAHAEAUDXGI_ADAPTER_DESC@@PEAI@Z @ 0x180057720 (-FindAdapter@CD3DDeviceTable@@AEAAHAEAUDXGI_ADAPTER_DESC@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateAdapterDevicePair@CD3DDeviceTable@@AEAAJPEAVCDXGIAdapterLimited@@PEAI@Z @ 0x1800918B4 (-CreateAdapterDevicePair@CD3DDeviceTable@@AEAAJPEAVCDXGIAdapterLimited@@PEAI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceTable::GetD3DDeviceForAdapter(
        CD3DDeviceTable *this,
        struct CDXGIAdapterLimited *a2,
        struct ID3D11Device1 **a3,
        enum D3D_FEATURE_LEVEL *a4)
{
  unsigned int v4; // ebp
  _OWORD *v5; // rax
  DXGI_ADAPTER_DESC *v7; // r10
  __int64 v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rsi
  __int64 v23; // rax
  int v25; // eax
  DXGI_ADAPTER_DESC v26; // [rsp+30h] [rbp-158h] BYREF
  unsigned int v27; // [rsp+198h] [rbp+10h] BYREF

  v4 = 0;
  v5 = (_OWORD *)((char *)a2 + 40);
  v7 = &v26;
  v11 = 2LL;
  do
  {
    v12 = v5[1];
    *(_OWORD *)v7->Description = *v5;
    v13 = v5[2];
    *(_OWORD *)&v7->Description[8] = v12;
    v14 = v5[3];
    *(_OWORD *)&v7->Description[16] = v13;
    v15 = v5[4];
    *(_OWORD *)&v7->Description[24] = v14;
    v16 = v5[5];
    *(_OWORD *)&v7->Description[32] = v15;
    v17 = v5[6];
    *(_OWORD *)&v7->Description[40] = v16;
    v18 = v5[7];
    v5 += 8;
    *(_OWORD *)&v7->Description[48] = v17;
    v7 = (DXGI_ADAPTER_DESC *)((char *)v7 + 128);
    *(_OWORD *)&v7[-1].SharedSystemMemory = v18;
    --v11;
  }
  while ( v11 );
  v19 = *v5;
  v27 = 0;
  v20 = v5[1];
  *(_OWORD *)v7->Description = v19;
  v21 = v5[2];
  *(_OWORD *)&v7->Description[8] = v20;
  *(_OWORD *)&v7->Description[16] = v21;
  if ( (unsigned int)CD3DDeviceTable::FindAdapter(this, &v26, &v27)
    || (v25 = CD3DDeviceTable::CreateAdapterDevicePair(this, a2, &v27), v4 = v25, v25 >= 0) )
  {
    v22 = v27;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 10) + 8LL * v27) + 8LL))(*(_QWORD *)(*((_QWORD *)this + 10) + 8LL * v27));
    v23 = *((_QWORD *)this + 14);
    *a3 = *(struct ID3D11Device1 **)(*((_QWORD *)this + 10) + 8 * v22);
    *a4 = *(enum D3D_FEATURE_LEVEL *)(v23 + 4 * v22);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v25, 0x7Au);
  }
  return v4;
}
