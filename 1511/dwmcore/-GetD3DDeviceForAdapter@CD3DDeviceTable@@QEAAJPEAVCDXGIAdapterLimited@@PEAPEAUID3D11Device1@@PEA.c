/*
 * XREFs of ?GetD3DDeviceForAdapter@CD3DDeviceTable@@QEAAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x18006ADE4
 * Callers:
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x18006BFB4 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180071BE0 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CreateAdapterDevicePair@CD3DDeviceTable@@AEAAJPEAVCDXGIAdapterLimited@@PEAI@Z @ 0x18006AB50 (-CreateAdapterDevicePair@CD3DDeviceTable@@AEAAJPEAVCDXGIAdapterLimited@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceTable::GetD3DDeviceForAdapter(
        CD3DDeviceTable *this,
        struct IDXGIAdapter **a2,
        struct ID3D11Device1 **a3,
        enum D3D_FEATURE_LEVEL *a4)
{
  unsigned int v4; // ebp
  _OWORD *v5; // rax
  char *v7; // r10
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
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rax
  int v27; // eax
  char v28; // [rsp+30h] [rbp-158h] BYREF
  int v29; // [rsp+158h] [rbp-30h]
  int v30; // [rsp+15Ch] [rbp-2Ch]
  unsigned int v31; // [rsp+190h] [rbp+8h] BYREF

  v4 = 0;
  v5 = a2 + 5;
  v7 = &v28;
  v11 = 2LL;
  do
  {
    v12 = v5[1];
    *(_OWORD *)v7 = *v5;
    v13 = v5[2];
    *((_OWORD *)v7 + 1) = v12;
    v14 = v5[3];
    *((_OWORD *)v7 + 2) = v13;
    v15 = v5[4];
    *((_OWORD *)v7 + 3) = v14;
    v16 = v5[5];
    *((_OWORD *)v7 + 4) = v15;
    v17 = v5[6];
    *((_OWORD *)v7 + 5) = v16;
    v18 = v5[7];
    v5 += 8;
    *((_OWORD *)v7 + 6) = v17;
    v7 += 128;
    *((_OWORD *)v7 - 1) = v18;
    --v11;
  }
  while ( v11 );
  v19 = *v5;
  v31 = 0;
  v20 = v5[1];
  *(_OWORD *)v7 = v19;
  v21 = v5[2];
  *((_OWORD *)v7 + 1) = v20;
  *((_OWORD *)v7 + 2) = v21;
  if ( *((_DWORD *)this + 10) )
  {
    v22 = *((_QWORD *)this + 2);
    while ( 1 )
    {
      v23 = 304LL * (unsigned int)v11;
      if ( *(_DWORD *)(v23 + v22 + 296) == v29 && *(_DWORD *)(v23 + v22 + 300) == v30 )
        break;
      LODWORD(v11) = v11 + 1;
      if ( (unsigned int)v11 >= *((_DWORD *)this + 10) )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v27 = CD3DDeviceTable::CreateAdapterDevicePair(this, a2, &v31);
    v4 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v27, 0x7Au);
      return v4;
    }
    LODWORD(v11) = v31;
  }
  v24 = (unsigned int)v11;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 10) + 8LL * (unsigned int)v11) + 8LL))(*(_QWORD *)(*((_QWORD *)this + 10) + 8LL * (unsigned int)v11));
  v25 = *((_QWORD *)this + 14);
  *a3 = *(struct ID3D11Device1 **)(*((_QWORD *)this + 10) + 8 * v24);
  *a4 = *(enum D3D_FEATURE_LEVEL *)(v25 + 4 * v24);
  return v4;
}
