/*
 * XREFs of ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140011710
 * Callers:
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x14000ED50 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHH@Z @ 0x14000F8A0 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHH@Z.c)
 * Callees:
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x140011A80 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
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
  HRESULT InterfaceIdFromMMDevice; // ebx
  struct IMMDevice *v11; // rbx
  const PROPERTYKEY *v12; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v13; // r15d
  IPropertyStore *v14; // rax
  IPropertyStore *v15; // rax
  IMMDeviceCollection *v16; // rax
  LPVOID *ppv; // [rsp+28h] [rbp-E0h]
  struct IMMDevice *v19; // [rsp+58h] [rbp-B0h] BYREF
  IPropertyStore *v20; // [rsp+60h] [rbp-A8h] BYREF
  struct KSDATAFORMAT_WAVEFORMATEX *v21; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID pv; // [rsp+70h] [rbp-98h] BYREF
  LPVOID v23; // [rsp+78h] [rbp-90h] BYREF
  LPVOID v24; // [rsp+80h] [rbp-88h] BYREF
  IMMDeviceCollection *v25; // [rsp+88h] [rbp-80h] BYREF
  LPVOID v26; // [rsp+90h] [rbp-78h] BYREF
  IPropertyStore *v27; // [rsp+98h] [rbp-70h] BYREF
  UINT v28; // [rsp+A0h] [rbp-68h] BYREF
  UINT v29; // [rsp+A4h] [rbp-64h] BYREF
  LPVOID v30; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-58h] BYREF
  PROPVARIANT pvar; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-48h]
  struct tWAVEFORMATEX *Src; // [rsp+C8h] [rbp-40h]
  CLSID *v35; // [rsp+D0h] [rbp-38h]
  __int64 v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  __int128 v38; // [rsp+E8h] [rbp-20h] BYREF
  GUID fmtid; // [rsp+F8h] [rbp-10h] BYREF
  DWORD pid; // [rsp+108h] [rbp+0h]

  v36 = -2LL;
  v35 = a2;
  v37 = 0LL;
  v20 = 0LL;
  v27 = 0LL;
  v19 = 0LL;
  v30 = 0LL;
  pv = 0LL;
  v9 = 0LL;
  v21 = 0LL;
  v31 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  pvar = 0LL;
  v33 = 0LL;
  Src = 0LL;
  memset_0(a6, 0, sizeof(struct APOInitSystemEffects2));
  InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))a1->lpVtbl->OpenPropertyStore)(
                              a1,
                              0LL,
                              &v20);
  if ( InterfaceIdFromMMDevice < 0 )
    goto LABEL_18;
  v11 = v19;
  if ( v19 != a1 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(struct IMMDevice *, GUID *, struct IMMDevice **))a1->lpVtbl->QueryInterface)(
      a1,
      &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990,
      &v19);
    v11 = v19;
  }
  if ( !v11 )
  {
    InterfaceIdFromMMDevice = -2147418113;
    goto LABEL_18;
  }
  InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))v11->lpVtbl->GetId)(
                              v11,
                              0LL,
                              &v27);
  if ( InterfaceIdFromMMDevice < 0 )
    goto LABEL_18;
  v12 = &PKEY_AudioEngine_DeviceFormat;
  v13 = a5;
  if ( a5 == eKeywordDetectorConnector )
    v12 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
  fmtid = v12->fmtid;
  pid = v12->pid;
  if ( ((int (__fastcall *)(IPropertyStore *, GUID *, PROPVARIANT *))v20->lpVtbl->GetValue)(v20, &fmtid, &pvar) >= 0
    && (_WORD)pvar == 65 )
  {
    if ( (unsigned int)v33 < 0x12uLL )
    {
      InterfaceIdFromMMDevice = -2147024809;
      goto LABEL_18;
    }
    if ( (unsigned int)v33 < (unsigned __int64)Src->cbSize + 18 )
    {
      InterfaceIdFromMMDevice = -2147024809;
      goto LABEL_18;
    }
    InterfaceIdFromMMDevice = CreateKSFormatFromWFXFormat(Src, &v21);
    if ( InterfaceIdFromMMDevice < 0 )
      goto LABEL_43;
  }
  else
  {
    InterfaceIdFromMMDevice = CoCreateInstance(
                                &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                                0LL,
                                0x17u,
                                &GUID_00632a31_4d49_4167_8ae1_27f82ce135b1,
                                &v26);
    if ( InterfaceIdFromMMDevice < 0 )
      goto LABEL_18;
    InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &v30);
    if ( InterfaceIdFromMMDevice < 0 )
      goto LABEL_18;
    if ( a5 == eKeywordDetectorConnector )
    {
      InterfaceIdFromMMDevice = mmdDevGetInterfaceIdFromMMDevice(a1, &v24);
      if ( InterfaceIdFromMMDevice < 0 )
        goto LABEL_18;
      v38 = DEVINTERFACE_AUDIO_KEYWORDDETECTOR;
      InterfaceIdFromMMDevice = mmdDevGetRelatedInterfaceId(v24, &v38, &v23);
      if ( InterfaceIdFromMMDevice < 0 )
        goto LABEL_18;
      InterfaceIdFromMMDevice = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD, LPVOID *))(*(_QWORD *)v26 + 32LL))(
                                  v26,
                                  v23,
                                  0LL,
                                  &pv);
      if ( InterfaceIdFromMMDevice < 0 )
        goto LABEL_18;
    }
    else
    {
      InterfaceIdFromMMDevice = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD, LPVOID *))(*(_QWORD *)v26 + 32LL))(
                                  v26,
                                  v30,
                                  0LL,
                                  &pv);
      if ( InterfaceIdFromMMDevice < 0 )
        goto LABEL_18;
    }
    InterfaceIdFromMMDevice = CreateKSFormatFromWFXFormat((const struct tWAVEFORMATEX *)pv, &v21);
    if ( InterfaceIdFromMMDevice < 0 )
    {
LABEL_43:
      v9 = v21;
      goto LABEL_18;
    }
  }
  ppv = (LPVOID *)&v31;
  InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
                              a1,
                              &GUID_8bfd01ba_edf5_11e4_90ec_1681e6b88ec1,
                              23LL);
  if ( InterfaceIdFromMMDevice < 0 )
    goto LABEL_43;
  if ( (unsigned int)(a5 - 1) <= 1 )
    v13 = eHostProcessConnector;
  LODWORD(ppv) = v13;
  v9 = v21;
  InterfaceIdFromMMDevice = (*(__int64 (__fastcall **)(__int64, struct KSDATAFORMAT_WAVEFORMATEX *, _QWORD, __int64, LPVOID *, IMMDeviceCollection **, UINT *, UINT *))(*(_QWORD *)v31 + 96LL))(
                              v31,
                              v21,
                              v21->DataFormat.FormatSize,
                              1LL,
                              ppv,
                              &v25,
                              &v28,
                              &v29);
  if ( InterfaceIdFromMMDevice >= 0 )
  {
    a6->APOInit.cbSize = 88;
    a6->APOInit.clsid = *v35;
    v14 = v20;
    v20 = 0LL;
    a6->pAPOEndpointProperties = v14;
    v15 = v27;
    v27 = 0LL;
    a6->pAPOSystemEffectsProperties = v15;
    a6->pReserved = 0LL;
    v16 = v25;
    v25 = 0LL;
    a6->pDeviceCollection = v16;
    a6->nSoftwareIoDeviceInCollection = v28;
    a6->nSoftwareIoConnectorIndex = v29;
    a6->AudioProcessingMode = *a3;
    a6->InitializeForDiscoveryOnly = a4;
  }
LABEL_18:
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
  if ( v26 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v19 )
    ((void (__fastcall *)(struct IMMDevice *))v19->lpVtbl->Release)(v19);
  if ( v27 )
    ((void (__fastcall *)(IPropertyStore *))v27->lpVtbl->Release)(v27);
  if ( v20 )
    ((void (__fastcall *)(IPropertyStore *))v20->lpVtbl->Release)(v20);
  return (unsigned int)InterfaceIdFromMMDevice;
}
