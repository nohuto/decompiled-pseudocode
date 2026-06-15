/*
 * XREFs of ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x18008CCA8
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHH@Z @ 0x18008B5A0 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHH@Z.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18008D170 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 * Callees:
 *     ??4?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@B@ATL@@QEAAPEAUIMMEndpointInternal@@PEAUIUnknown@@@Z @ 0x180027844 (--4-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@.c)
 *     ?Release@CPolicyConfig@@UEAAKXZ @ 0x180032D80 (-Release@CPolicyConfig@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memset @ 0x180036D30 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x18006899C (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall FillAPOInitSystemEffectsStructure(
        struct IMMDevice *a1,
        struct _GUID *a2,
        struct _GUID *a3,
        BOOL a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct APOInitSystemEffects2 *a6)
{
  struct KSDATAFORMAT_WAVEFORMATEX *v9; // r14
  HRESULT Instance; // ebx
  __int64 v11; // r8
  const PROPERTYKEY *v12; // rax
  const struct tWAVEFORMATEX *v13; // rcx
  LPVOID v14; // rdx
  IPropertyStore *v15; // rax
  IPropertyStore *v16; // rax
  IMMDeviceCollection *v17; // rax
  void (*v18)(void); // rax
  IPropertyStore *v20; // [rsp+58h] [rbp-B0h] BYREF
  struct KSDATAFORMAT_WAVEFORMATEX *v21; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID v23; // [rsp+70h] [rbp-98h] BYREF
  LPVOID v24; // [rsp+78h] [rbp-90h] BYREF
  IMMDeviceCollection *v25; // [rsp+80h] [rbp-88h]
  CPolicyConfig *ppv; // [rsp+88h] [rbp-80h] BYREF
  IPropertyStore *v27; // [rsp+90h] [rbp-78h] BYREF
  UINT v28; // [rsp+98h] [rbp-70h]
  UINT v29; // [rsp+9Ch] [rbp-6Ch]
  LPVOID v30; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h] BYREF
  PROPVARIANT pvar; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-48h]
  const struct tWAVEFORMATEX *v35; // [rsp+C8h] [rbp-40h]
  CLSID *v36; // [rsp+D0h] [rbp-38h]
  __int64 v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  __int128 v39; // [rsp+E8h] [rbp-20h] BYREF
  GUID fmtid; // [rsp+F8h] [rbp-10h] BYREF
  DWORD pid; // [rsp+108h] [rbp+0h]

  v37 = -2LL;
  v36 = a2;
  v38 = 0LL;
  v20 = 0LL;
  v27 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  pv = 0LL;
  v9 = 0LL;
  v21 = 0LL;
  v31 = 0LL;
  ppv = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  pvar = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  memset(a6, 0, sizeof(struct APOInitSystemEffects2));
  Instance = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))a1->lpVtbl->OpenPropertyStore)(
               a1,
               0LL,
               &v20);
  if ( Instance >= 0 )
  {
    ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_eecca8a7_a629_4dba_9f23_20f6db42d990>::operator=(
      &v32,
      a1,
      v11);
    if ( !v32 )
    {
      Instance = -2147418113;
      goto LABEL_27;
    }
    Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, IPropertyStore **))(*(_QWORD *)v32 + 40LL))(v32, 0LL, &v27);
    if ( Instance >= 0 )
    {
      v12 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
      if ( a5 != eKeywordDetectorConnector )
        v12 = &PKEY_AudioEngine_DeviceFormat;
      fmtid = v12->fmtid;
      pid = v12->pid;
      if ( ((int (__fastcall *)(IPropertyStore *, GUID *, PROPVARIANT *))v20->lpVtbl->GetValue)(v20, &fmtid, &pvar) >= 0
        && (_WORD)pvar == 65 )
      {
        if ( (unsigned int)v34 < 0x12uLL || (unsigned int)v34 < (unsigned __int64)v35->cbSize + 18 )
        {
          Instance = -2147024809;
          goto LABEL_27;
        }
        v13 = v35;
      }
      else
      {
        Instance = CoCreateInstance(
                     &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                     0LL,
                     0x17u,
                     &GUID_00632a31_4d49_4167_8ae1_27f82ce135b1,
                     (LPVOID *)&ppv);
        if ( Instance < 0 )
          goto LABEL_27;
        Instance = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &v30);
        if ( Instance < 0 )
          goto LABEL_27;
        if ( a5 == eKeywordDetectorConnector )
        {
          Instance = mmdDevGetInterfaceIdFromMMDevice(a1, &v24);
          if ( Instance < 0 )
            goto LABEL_27;
          v39 = DEVINTERFACE_AUDIO_KEYWORDDETECTOR;
          Instance = mmdDevGetRelatedInterfaceId(v24, &v39, &v23);
          if ( Instance < 0 )
            goto LABEL_27;
          v14 = v23;
        }
        else
        {
          v14 = v30;
        }
        Instance = (*(__int64 (__fastcall **)(CPolicyConfig *, LPVOID, _QWORD, LPVOID *))(*(_QWORD *)ppv + 32LL))(
                     ppv,
                     v14,
                     0LL,
                     &pv);
        if ( Instance < 0 )
          goto LABEL_27;
        v13 = (const struct tWAVEFORMATEX *)pv;
      }
      Instance = CreateKSFormatFromWFXFormat(v13, &v21);
      if ( Instance < 0
        || (Instance = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
                         a1,
                         &GUID_8bfd01ba_edf5_11e4_90ec_1681e6b88ec1,
                         23LL),
            Instance < 0) )
      {
        v9 = v21;
      }
      else
      {
        v9 = v21;
        Instance = (*(__int64 (__fastcall **)(__int64, struct KSDATAFORMAT_WAVEFORMATEX *, _QWORD))(*(_QWORD *)v31 + 96LL))(
                     v31,
                     v21,
                     v21->DataFormat.FormatSize);
        if ( Instance >= 0 )
        {
          a6->APOInit.cbSize = 88;
          a6->APOInit.clsid = *v36;
          v15 = v20;
          v20 = 0LL;
          a6->pAPOEndpointProperties = v15;
          v16 = v27;
          v27 = 0LL;
          a6->pAPOSystemEffectsProperties = v16;
          a6->pReserved = 0LL;
          v17 = v25;
          v25 = 0LL;
          a6->pDeviceCollection = v17;
          a6->nSoftwareIoDeviceInCollection = v28;
          a6->nSoftwareIoConnectorIndex = v29;
          a6->AudioProcessingMode = *a3;
          a6->InitializeForDiscoveryOnly = a4;
        }
      }
    }
  }
LABEL_27:
  CoTaskMemFree(pv);
  CoTaskMemFree(v30);
  CoTaskMemFree(v9);
  PropVariantClear(&pvar);
  CoTaskMemFree(v23);
  v23 = 0LL;
  CoTaskMemFree(v24);
  v24 = 0LL;
  if ( v25 )
    ((void (__fastcall *)(IMMDeviceCollection *))v25->lpVtbl->Release)(v25);
  if ( ppv )
  {
    v18 = *(void (**)(void))(*(_QWORD *)ppv + 16LL);
    if ( (char *)v18 == (char *)CPolicyConfig::Release )
      CPolicyConfig::Release(ppv);
    else
      v18();
  }
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v27 )
    ((void (__fastcall *)(IPropertyStore *))v27->lpVtbl->Release)(v27);
  if ( v20 )
    ((void (__fastcall *)(IPropertyStore *))v20->lpVtbl->Release)(v20);
  return (unsigned int)Instance;
}
