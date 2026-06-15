/*
 * XREFs of ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x1800243F0
 * Callers:
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001E820 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 * Callees:
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180031424 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
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
  unsigned int *p_FormatSize; // r14
  HRESULT InterfaceIdFromMMDevice; // esi
  struct IMMDevice *v9; // rbx
  const PROPERTYKEY *v10; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v11; // r13d
  _WORD *v12; // rbx
  __int64 v13; // rcx
  HRESULT (__stdcall *Activate)(IMMDevice *, const IID *const, DWORD, PROPVARIANT *, void **); // rbx
  __int64 (__fastcall *v15)(__int64, unsigned int *, _QWORD, __int64, LPVOID *, IMMDeviceCollection **, UINT *, UINT *); // rdi
  IPropertyStore *v16; // rax
  IPropertyStore *v17; // rax
  IMMDeviceCollection *v18; // rax
  __int64 v20; // [rsp+8h] [rbp-100h] BYREF
  LPVOID *ppv; // [rsp+28h] [rbp-E0h]
  struct IMMDevice *v22; // [rsp+48h] [rbp-C0h] BYREF
  IPropertyStore *v23; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID v24; // [rsp+58h] [rbp-B0h] BYREF
  IPropertyStore *v25; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-A0h] BYREF
  IMMDeviceCollection *v27; // [rsp+70h] [rbp-98h] BYREF
  LPVOID v28; // [rsp+78h] [rbp-90h] BYREF
  struct KSDATAFORMAT_WAVEFORMATEX *v29; // [rsp+80h] [rbp-88h] BYREF
  LPVOID v30; // [rsp+88h] [rbp-80h] BYREF
  LPVOID v31; // [rsp+90h] [rbp-78h] BYREF
  BOOL v32; // [rsp+98h] [rbp-70h]
  UINT v33; // [rsp+9Ch] [rbp-6Ch] BYREF
  UINT v34; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-60h] BYREF
  PROPVARIANT pvar; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v37; // [rsp+B8h] [rbp-50h]
  void *Src; // [rsp+C0h] [rbp-48h]
  GUID *v39; // [rsp+C8h] [rbp-40h]
  CLSID *v40; // [rsp+D0h] [rbp-38h]
  __int128 v41; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  GUID fmtid; // [rsp+F8h] [rbp-10h] BYREF
  DWORD pid; // [rsp+108h] [rbp+0h]

  v43 = -2LL;
  v32 = a4;
  v39 = a3;
  v40 = a2;
  v42 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  v31 = 0LL;
  pv = 0LL;
  p_FormatSize = 0LL;
  v29 = 0LL;
  v35 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  pvar = 0LL;
  v37 = 0LL;
  Src = 0LL;
  memset_0(a6, 0, sizeof(struct APOInitSystemEffects2));
  InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))a1->lpVtbl->OpenPropertyStore)(
                              a1,
                              0LL,
                              &v23);
  if ( InterfaceIdFromMMDevice < 0 )
    goto LABEL_23;
  v9 = v22;
  if ( v22 != a1 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(struct IMMDevice *, GUID *, struct IMMDevice **))a1->lpVtbl->QueryInterface)(
      a1,
      &GUID_ed899cbb_5613_4541_a78f_66302f0ce211,
      &v22);
    v9 = v22;
  }
  if ( !v9 )
  {
    InterfaceIdFromMMDevice = -2147418113;
    goto LABEL_23;
  }
  InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))v9->lpVtbl->GetId)(
                              v9,
                              0LL,
                              &v25);
  if ( InterfaceIdFromMMDevice < 0 )
    goto LABEL_23;
  v10 = &PKEY_AudioEngine_DeviceFormat;
  v11 = a5;
  if ( a5 == eKeywordDetectorConnector )
    v10 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
  fmtid = v10->fmtid;
  pid = v10->pid;
  if ( ((int (__fastcall *)(IPropertyStore *, GUID *, PROPVARIANT *))v23->lpVtbl->GetValue)(v23, &fmtid, &pvar) < 0
    || (_WORD)pvar != 65 )
  {
    InterfaceIdFromMMDevice = CoCreateInstance(
                                &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                                0LL,
                                0x17u,
                                &GUID_ca286fc3_91fd_42c3_8e9b_caafa66242e3,
                                &v24);
    if ( InterfaceIdFromMMDevice < 0 )
      goto LABEL_23;
    InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &v31);
    if ( InterfaceIdFromMMDevice < 0 )
      goto LABEL_23;
    if ( a5 == eKeywordDetectorConnector )
    {
      InterfaceIdFromMMDevice = mmdDevGetInterfaceIdFromMMDevice(a1, &v30);
      if ( InterfaceIdFromMMDevice < 0 )
        goto LABEL_23;
      v41 = DEVINTERFACE_AUDIO_KEYWORDDETECTOR;
      InterfaceIdFromMMDevice = mmdDevGetRelatedInterfaceId(v30, &v41, &v28);
      if ( InterfaceIdFromMMDevice < 0 )
        goto LABEL_23;
      InterfaceIdFromMMDevice = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD, LPVOID *))(*(_QWORD *)v24 + 32LL))(
                                  v24,
                                  v28,
                                  0LL,
                                  &pv);
      if ( InterfaceIdFromMMDevice < 0 )
        goto LABEL_23;
    }
    else
    {
      InterfaceIdFromMMDevice = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD, LPVOID *))(*(_QWORD *)v24 + 32LL))(
                                  v24,
                                  v31,
                                  0LL,
                                  &pv);
      if ( InterfaceIdFromMMDevice < 0 )
        goto LABEL_23;
    }
    InterfaceIdFromMMDevice = CreateKSFormatFromWFXFormat((const struct tWAVEFORMATEX *)pv, &v29);
    p_FormatSize = &v29->DataFormat.FormatSize;
    if ( InterfaceIdFromMMDevice < 0 )
      goto LABEL_23;
    goto LABEL_18;
  }
  v12 = Src;
  if ( (unsigned int)v37 < 0x12uLL )
  {
    InterfaceIdFromMMDevice = -2147024809;
    goto LABEL_23;
  }
  v13 = *((unsigned __int16 *)Src + 8);
  if ( (unsigned int)v37 < (unsigned __int64)(v13 + 18) )
  {
    InterfaceIdFromMMDevice = -2147024809;
    goto LABEL_23;
  }
  InterfaceIdFromMMDevice = 0;
  if ( &v20 == (__int64 *)-120LL )
  {
    InterfaceIdFromMMDevice = -2147467261;
  }
  else if ( (unsigned int)v13 < 0x16 && *(_WORD *)Src == 0xFFFE )
  {
    InterfaceIdFromMMDevice = -2147024809;
  }
  else
  {
    p_FormatSize = (unsigned int *)CoTaskMemAlloc(v13 + 82);
    if ( p_FormatSize )
    {
      *p_FormatSize = (unsigned __int16)v12[8] + 82;
      *(_QWORD *)(p_FormatSize + 1) = 0LL;
      p_FormatSize[3] = 0;
      *((GUID *)p_FormatSize + 1) = GUID_73647561_0000_0010_8000_00aa00389b71;
      *((GUID *)p_FormatSize + 3) = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
      memcpy_0(p_FormatSize + 16, v12, (unsigned __int16)v12[8] + 18LL);
      if ( *v12 == 0xFFFE )
      {
        *((_OWORD *)p_FormatSize + 2) = *(_OWORD *)(v12 + 12);
      }
      else
      {
        *((GUID *)p_FormatSize + 2) = GUID_00000000_0000_0010_8000_00aa00389b71;
        p_FormatSize[8] = (unsigned __int16)*v12;
      }
    }
    else
    {
      InterfaceIdFromMMDevice = -2147024882;
    }
  }
  if ( InterfaceIdFromMMDevice >= 0 )
  {
LABEL_18:
    Activate = a1->lpVtbl->Activate;
    ppv = (LPVOID *)&v35;
    InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))Activate)(
                                a1,
                                &GUID_8bfd01ba_edf5_11e4_90ec_1681e6b88ec1,
                                23LL);
    if ( InterfaceIdFromMMDevice >= 0 )
    {
      if ( (unsigned int)(a5 - 1) <= 1 )
        v11 = eHostProcessConnector;
      v15 = *(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, __int64, LPVOID *, IMMDeviceCollection **, UINT *, UINT *))(*(_QWORD *)v35 + 96LL);
      LODWORD(ppv) = v11;
      InterfaceIdFromMMDevice = v15(v35, p_FormatSize, *p_FormatSize, 1LL, ppv, &v27, &v34, &v33);
      if ( InterfaceIdFromMMDevice >= 0 )
      {
        a6->APOInit.cbSize = 88;
        a6->APOInit.clsid = *v40;
        v16 = v23;
        v23 = 0LL;
        a6->pAPOEndpointProperties = v16;
        v17 = v25;
        v25 = 0LL;
        a6->pAPOSystemEffectsProperties = v17;
        a6->pReserved = 0LL;
        v18 = v27;
        v27 = 0LL;
        a6->pDeviceCollection = v18;
        a6->nSoftwareIoDeviceInCollection = v34;
        a6->nSoftwareIoConnectorIndex = v33;
        a6->AudioProcessingMode = *v39;
        a6->InitializeForDiscoveryOnly = v32;
      }
    }
  }
LABEL_23:
  CoTaskMemFree(pv);
  CoTaskMemFree(v31);
  CoTaskMemFree(p_FormatSize);
  PropVariantClear(&pvar);
  CoTaskMemFree(v28);
  v28 = 0LL;
  CoTaskMemFree(v30);
  v30 = 0LL;
  if ( v27 )
    ((void (__fastcall *)(IMMDeviceCollection *))v27->lpVtbl->Release)(v27);
  if ( v24 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v22 )
    ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
  if ( v25 )
    ((void (__fastcall *)(IPropertyStore *))v25->lpVtbl->Release)(v25);
  if ( v23 )
    ((void (__fastcall *)(IPropertyStore *))v23->lpVtbl->Release)(v23);
  return (unsigned int)InterfaceIdFromMMDevice;
}
