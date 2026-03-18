/*
 * XREFs of ?CreateAdapterDevicePair@CD3DDeviceTable@@AEAAJPEAVCDXGIAdapterLimited@@PEAI@Z @ 0x18006AB50
 * Callers:
 *     ?GetD3DDeviceForAdapter@CD3DDeviceTable@@QEAAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x18006ADE4 (-GetD3DDeviceForAdapter@CD3DDeviceTable@@QEAAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEA.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CreateD3DDevice@CD3DDeviceTable@@AEAAJPEAVCDXGIAdapterLimited@@PEAUIDXGIAdapter@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x18006A9C8 (-CreateD3DDevice@CD3DDeviceTable@@AEAAJPEAVCDXGIAdapterLimited@@PEAUIDXGIAdapter@@PEAPEAUID3D11D.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceTable::CreateAdapterDevicePair(
        CD3DDeviceTable *this,
        struct IDXGIAdapter **a2,
        unsigned int *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rax
  _OWORD *v9; // r9
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rax
  _OWORD *v13; // rcx
  __int128 v14; // xmm1
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // r8d
  int v22; // eax
  int v23; // ebx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned int v27; // [rsp+20h] [rbp-20h]
  struct IDXGIAdapter *v28; // [rsp+30h] [rbp-10h] BYREF
  enum D3D_FEATURE_LEVEL v29; // [rsp+78h] [rbp+38h] BYREF
  struct ID3D11Device1 *v30; // [rsp+88h] [rbp+48h] BYREF

  v30 = 0LL;
  v6 = CD3DDeviceTable::CreateD3DDevice(this, (struct CDXGIAdapterLimited *)a2, a2[3], &v30, &v29);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xA1u);
    goto LABEL_17;
  }
  v8 = *((unsigned int *)this + 10);
  v9 = a2 + 5;
  v10 = v8 + 1;
  if ( (int)v8 + 1 < (unsigned int)v8 )
  {
    v23 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v7 = -2147024362;
    goto LABEL_38;
  }
  if ( v10 <= *((_DWORD *)this + 9) )
  {
    v11 = 304 * v8;
    v12 = 2LL;
    v13 = (_OWORD *)(*((_QWORD *)this + 2) + v11);
    do
    {
      *v13 = *v9;
      v13[1] = v9[1];
      v13[2] = v9[2];
      v13[3] = v9[3];
      v13[4] = v9[4];
      v13[5] = v9[5];
      v13[6] = v9[6];
      v13 += 8;
      v14 = v9[7];
      v9 += 8;
      *(v13 - 1) = v14;
      --v12;
    }
    while ( v12 );
    *v13 = *v9;
    v13[1] = v9[1];
    v13[2] = v9[2];
    *((_DWORD *)this + 10) = v10;
    goto LABEL_7;
  }
  v22 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 16, 304LL, 1LL, v9);
  v23 = v22;
  if ( v22 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC0u);
  v7 = v23;
  if ( v23 < 0 )
  {
LABEL_38:
    v27 = 163;
    goto LABEL_45;
  }
LABEL_7:
  v28 = a2[3];
  v15 = *((_DWORD *)this + 18);
  v16 = v15 + 1;
  if ( v15 + 1 < v15 )
  {
    v23 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v7 = -2147024362;
    goto LABEL_40;
  }
  if ( v16 > *((_DWORD *)this + 17) )
  {
    v24 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 48, 8LL, 1LL, &v28);
    v23 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xC0u);
    v7 = v23;
    if ( v23 >= 0 )
      goto LABEL_10;
LABEL_40:
    v27 = 165;
    goto LABEL_45;
  }
  *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * v15) = v28;
  *((_DWORD *)this + 18) = v16;
LABEL_10:
  ((void (__fastcall *)(struct IDXGIAdapter *))a2[3]->lpVtbl->AddRef)(a2[3]);
  v17 = *((_DWORD *)this + 26);
  v18 = v17 + 1;
  if ( v17 + 1 < v17 )
  {
    v23 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v7 = -2147024362;
  }
  else
  {
    if ( v18 <= *((_DWORD *)this + 25) )
    {
      *(_QWORD *)(*((_QWORD *)this + 10) + 8LL * v17) = v30;
      *((_DWORD *)this + 26) = v18;
LABEL_13:
      v19 = *((_DWORD *)this + 34);
      v20 = v19 + 1;
      if ( v19 + 1 < v19 )
      {
        v23 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v7 = -2147024362;
      }
      else
      {
        v7 = 0;
        if ( v20 <= *((_DWORD *)this + 33) )
        {
          *(_DWORD *)(*((_QWORD *)this + 14) + 4LL * v19) = v29;
          *((_DWORD *)this + 34) = v20;
LABEL_16:
          v30 = 0LL;
          *a3 = *((_DWORD *)this + 10) - 1;
          goto LABEL_17;
        }
        v26 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 112, 4LL, 1LL, &v29);
        v23 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xC0u);
        v7 = v23;
        if ( v23 >= 0 )
          goto LABEL_16;
      }
      v27 = 169;
      goto LABEL_45;
    }
    v25 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 80, 8LL, 1LL, &v30);
    v23 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
    v7 = v23;
    if ( v23 >= 0 )
      goto LABEL_13;
  }
  v27 = 168;
LABEL_45:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, v27);
LABEL_17:
  if ( v30 )
    ((void (__fastcall *)(struct ID3D11Device1 *))v30->lpVtbl->Release)(v30);
  return v7;
}
