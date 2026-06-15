/*
 * XREFs of ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHH@Z @ 0x18008B5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180002144 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x18000D90C (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memset @ 0x180036D30 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x18008CCA8 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 */

__int64 __fastcall CAPOWrapperSrv::InitializeAPORemote(
        CAPOWrapperSrv *this,
        const unsigned __int16 *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        int a7)
{
  int v11; // ebx
  struct IUnknown *v12; // rdx
  APOInitSystemEffects2 *v13; // r8
  __int64 v14; // rdx
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  HRESULT v18; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  struct IMMDevice *v22; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp-A8h] BYREF
  struct _GUID v24; // [rsp+60h] [rbp-A0h] BYREF
  APOInitSystemEffects2 v25; // [rsp+70h] [rbp-90h] BYREF
  _BYTE pData[56]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v27; // [rsp+108h] [rbp+8h]
  HRESULT *v28; // [rsp+110h] [rbp+10h]
  __int64 v29; // [rsp+118h] [rbp+18h]

  v18 = 0;
  ppv = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  memset(&v25, 0, sizeof(v25));
  if ( !a2 )
  {
    v11 = -2147024809;
    goto LABEL_30;
  }
  if ( !*((_QWORD *)this + 10) )
  {
    v11 = -2147024882;
    goto LABEL_30;
  }
  v18 = CoCreateInstance(
          &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
          0LL,
          0x17u,
          &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
          &ppv);
  v11 = v18;
  if ( v18 < 0 )
    goto LABEL_22;
  v18 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)ppv + 40LL))(
          ppv,
          a2,
          &v22);
  v11 = v18;
  if ( v18 < 0 )
    goto LABEL_22;
  v11 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))this + 10))(
          *((_QWORD *)this + 10),
          &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
          &v19);
  v18 = v11;
  if ( v11 >= 0 )
    goto LABEL_11;
  if ( a7 == 1 )
    goto LABEL_21;
  v18 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 10))(
          *((_QWORD *)this + 10),
          &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
          &v21);
  if ( v18 >= 0 )
  {
LABEL_11:
    v24 = *a4;
    v18 = FillAPOInitSystemEffectsStructure(v22, a3, &v24, a5, a6, &v25);
    v11 = v18;
    if ( v18 < 0 )
      goto LABEL_22;
    v12 = v19;
    if ( v19 )
    {
      v13 = &v25;
      v14 = 88LL;
    }
    else
    {
      if ( !v21 )
      {
LABEL_18:
        if ( a7 && *((struct IUnknown **)this + 11) != v12 )
        {
          ATL::AtlComPtrAssign((struct IUnknown **)this + 11, v12);
          v11 = v18;
        }
LABEL_21:
        if ( v11 >= 0 )
          goto LABEL_24;
LABEL_22:
        if ( (unsigned int)hProvider > 2 )
        {
          TlgCreateSz((PEVENT_DATA_DESCRIPTOR)&pData[32], "CAPOWrapperSrv::InitializeAPORemote");
          v20 = 135;
          *(_QWORD *)&pData[48] = &v20;
          v28 = &v18;
          v27 = 4LL;
          v29 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v15, v16, 5u, (EVENT_DATA_DESCRIPTOR *)pData);
          v11 = v18;
        }
        goto LABEL_24;
      }
      memset(&pData[4], 0, 0x34uLL);
      v13 = (APOInitSystemEffects2 *)pData;
      v14 = 56LL;
      *(_DWORD *)&pData[16] = *(_DWORD *)&v25.APOInit.clsid.Data4[4];
      *(_QWORD *)&pData[24] = v25.pAPOEndpointProperties;
      *(_QWORD *)&pData[32] = v25.pAPOSystemEffectsProperties;
      *(_QWORD *)&pData[40] = v25.pReserved;
      *(_OWORD *)pData = *(_OWORD *)&v25.APOInit.cbSize;
      *(_QWORD *)&pData[48] = v25.pDeviceCollection;
      *(_DWORD *)pData = 56;
    }
    v18 = (*(__int64 (__fastcall **)(char *, __int64, APOInitSystemEffects2 *))(*((_QWORD *)this + 1) + 48LL))(
            (char *)this + 8,
            v14,
            v13);
    v11 = v18;
    if ( v18 < 0 )
      goto LABEL_22;
    v12 = v19;
    goto LABEL_18;
  }
  v11 = 0;
  v18 = 0;
LABEL_24:
  if ( v25.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v25.pAPOEndpointProperties->lpVtbl->Release)(v25.pAPOEndpointProperties);
    v11 = v18;
    v25.pAPOEndpointProperties = 0LL;
  }
  if ( v25.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v25.pAPOSystemEffectsProperties->lpVtbl->Release)(v25.pAPOSystemEffectsProperties);
    v11 = v18;
    v25.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v25.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v25.pDeviceCollection->lpVtbl->Release)(v25.pDeviceCollection);
    v11 = v18;
    v25.pDeviceCollection = 0LL;
  }
LABEL_30:
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)&v19);
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v21);
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)&v22);
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)&ppv);
  return (unsigned int)v11;
}
