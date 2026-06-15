/*
 * XREFs of ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHH@Z @ 0x14000F8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140011710 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012AA0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _TlgWrite @ 0x140016088 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x140016CD0 (_TlgCreateSz.c)
 *     ??1?$CComPtr@UIMMDeviceEnumerator@@@ATL@@QEAA@XZ @ 0x14001707C (--1-$CComPtr@UIMMDeviceEnumerator@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtr@UIAudioSystemEffects@@@ATL@@QEAA@XZ @ 0x140017124 (--1-$CComPtr@UIAudioSystemEffects@@@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
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
  void *p_pData; // r8
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
  struct APOInitSystemEffects2 v25; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  int v27; // [rsp+E0h] [rbp-20h]
  int v28; // [rsp+E4h] [rbp-1Ch]
  __int128 v29; // [rsp+E8h] [rbp-18h] BYREF
  __int128 pDesc_12; // [rsp+F8h] [rbp-8h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  HRESULT *v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]

  v18 = 0;
  ppv = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  memset_0(&v25, 0, sizeof(v25));
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
      p_pData = &v25;
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
          TlgCreateSz((PEVENT_DATA_DESCRIPTOR)((char *)&v29 + 8), "CAPOWrapperSrv::InitializeAPORemote");
          v20 = 135;
          *((_QWORD *)&pDesc_12 + 1) = &v20;
          v32 = &v18;
          v31 = 4LL;
          v33 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_140045E2B, v15, v16, 5u, &pData);
          v11 = v18;
        }
        goto LABEL_24;
      }
      p_pData = &pData;
      v14 = 56LL;
      v28 = 0;
      v27 = *(_DWORD *)&v25.APOInit.clsid.Data4[4];
      v29 = *(_OWORD *)&v25.pAPOEndpointProperties;
      pDesc_12 = *(_OWORD *)&v25.pReserved;
      pData = *(EVENT_DATA_DESCRIPTOR *)&v25.APOInit.cbSize;
      LODWORD(pData.Ptr) = 56;
    }
    v18 = (*(__int64 (__fastcall **)(char *, __int64, void *))(*((_QWORD *)this + 1) + 48LL))(
            (char *)this + 8,
            v14,
            p_pData);
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
  ATL::CComPtr<IMMDeviceEnumerator>::~CComPtr<IMMDeviceEnumerator>(&v19);
  ATL::CComPtr<IAudioSystemEffects>::~CComPtr<IAudioSystemEffects>(&v21);
  ATL::CComPtr<IMMDeviceEnumerator>::~CComPtr<IMMDeviceEnumerator>(&v22);
  ATL::CComPtr<IMMDeviceEnumerator>::~CComPtr<IMMDeviceEnumerator>(&ppv);
  return (unsigned int)v11;
}
