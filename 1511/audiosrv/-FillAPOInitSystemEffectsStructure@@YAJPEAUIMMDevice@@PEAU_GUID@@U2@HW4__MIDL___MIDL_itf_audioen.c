/*
 * XREFs of ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x18000FBB0
 * Callers:
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000F8C0 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 * Callees:
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x18003A8F4 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
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
  struct IMMDevice *v9; // rdi
  const PROPERTYKEY *v10; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v11; // r13d
  _WORD *v12; // rbx
  __int64 v13; // rdx
  int v14; // eax
  IPropertyStore *v15; // rax
  IPropertyStore *v16; // rax
  IMMDeviceCollection *v17; // rax
  LPVOID *ppv; // [rsp+28h] [rbp-E0h]
  struct IMMDevice *v20; // [rsp+48h] [rbp-C0h] BYREF
  IPropertyStore *v21; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID v22; // [rsp+58h] [rbp-B0h] BYREF
  IPropertyStore *v23; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-A0h] BYREF
  IMMDeviceCollection *v25; // [rsp+70h] [rbp-98h] BYREF
  LPVOID v26; // [rsp+78h] [rbp-90h] BYREF
  struct KSDATAFORMAT_WAVEFORMATEX *v27; // [rsp+80h] [rbp-88h] BYREF
  LPVOID v28; // [rsp+88h] [rbp-80h] BYREF
  LPVOID v29; // [rsp+90h] [rbp-78h] BYREF
  BOOL v30; // [rsp+98h] [rbp-70h]
  UINT v31; // [rsp+9Ch] [rbp-6Ch] BYREF
  UINT v32; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-60h] BYREF
  PROPVARIANT pvar; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-50h]
  void *Src; // [rsp+C0h] [rbp-48h]
  GUID *v37; // [rsp+C8h] [rbp-40h]
  CLSID *v38; // [rsp+D0h] [rbp-38h]
  __int128 v39; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  GUID fmtid; // [rsp+F8h] [rbp-10h] BYREF
  DWORD pid; // [rsp+108h] [rbp+0h]

  v41 = -2LL;
  v30 = a4;
  v37 = a3;
  v38 = a2;
  v40 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  v29 = 0LL;
  pv = 0LL;
  p_FormatSize = 0LL;
  v27 = 0LL;
  v33 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  pvar = 0LL;
  v35 = 0LL;
  Src = 0LL;
  memset_0(a6, 0, sizeof(struct APOInitSystemEffects2));
  InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))a1->lpVtbl->OpenPropertyStore)(
                              a1,
                              0LL,
                              &v21);
  if ( InterfaceIdFromMMDevice >= 0 )
  {
    v9 = v20;
    if ( v20 != a1 )
    {
      v20 = 0LL;
      ((void (__fastcall *)(struct IMMDevice *, GUID *, struct IMMDevice **))a1->lpVtbl->QueryInterface)(
        a1,
        &GUID_ed899cbb_5613_4541_a78f_66302f0ce211,
        &v20);
      v9 = v20;
    }
    if ( !v9 )
    {
      InterfaceIdFromMMDevice = -2147418113;
      goto LABEL_41;
    }
    InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))v9->lpVtbl->GetId)(
                                v9,
                                0LL,
                                &v23);
    if ( InterfaceIdFromMMDevice >= 0 )
    {
      v10 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
      v11 = a5;
      if ( a5 != eKeywordDetectorConnector )
        v10 = &PKEY_AudioEngine_DeviceFormat;
      fmtid = v10->fmtid;
      pid = v10->pid;
      if ( ((int (__fastcall *)(IPropertyStore *, GUID *, PROPVARIANT *))v21->lpVtbl->GetValue)(v21, &fmtid, &pvar) < 0
        || (_WORD)pvar != 65 )
      {
        InterfaceIdFromMMDevice = CoCreateInstance(
                                    &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                                    0LL,
                                    0x17u,
                                    &GUID_6be54be8_a068_4875_a49d_0c2966473b11,
                                    &v22);
        if ( InterfaceIdFromMMDevice < 0 )
          goto LABEL_41;
        InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &v29);
        if ( InterfaceIdFromMMDevice < 0 )
          goto LABEL_41;
        if ( a5 == eKeywordDetectorConnector )
        {
          InterfaceIdFromMMDevice = mmdDevGetInterfaceIdFromMMDevice(a1, &v28);
          if ( InterfaceIdFromMMDevice < 0 )
            goto LABEL_41;
          v39 = DEVINTERFACE_AUDIO_KEYWORDDETECTOR;
          InterfaceIdFromMMDevice = mmdDevGetRelatedInterfaceId(v28, &v39, &v26);
          if ( InterfaceIdFromMMDevice < 0 )
            goto LABEL_41;
          v14 = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD, LPVOID *))(*(_QWORD *)v22 + 32LL))(
                  v22,
                  v26,
                  0LL,
                  &pv);
        }
        else
        {
          v14 = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD, LPVOID *))(*(_QWORD *)v22 + 32LL))(
                  v22,
                  v29,
                  0LL,
                  &pv);
        }
        InterfaceIdFromMMDevice = v14;
        if ( v14 < 0 )
          goto LABEL_41;
        InterfaceIdFromMMDevice = CreateKSFormatFromWFXFormat((const struct tWAVEFORMATEX *)pv, &v27);
        p_FormatSize = &v27->DataFormat.FormatSize;
        if ( InterfaceIdFromMMDevice < 0 )
          goto LABEL_41;
        goto LABEL_36;
      }
      v12 = Src;
      if ( (unsigned int)v35 < 0x12uLL )
      {
        InterfaceIdFromMMDevice = -2147024809;
        goto LABEL_41;
      }
      v13 = *((unsigned __int16 *)Src + 8);
      if ( (unsigned int)v35 < (unsigned __int64)(v13 + 18) )
      {
        InterfaceIdFromMMDevice = -2147024809;
        goto LABEL_41;
      }
      InterfaceIdFromMMDevice = 0;
      if ( &v27 )
      {
        if ( *(_WORD *)Src == 0xFFFE && (unsigned int)v13 < 0x16 )
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
      }
      else
      {
        InterfaceIdFromMMDevice = -2147467261;
      }
      if ( InterfaceIdFromMMDevice >= 0 )
      {
LABEL_36:
        ppv = (LPVOID *)&v33;
        InterfaceIdFromMMDevice = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
                                    a1,
                                    &GUID_8bfd01ba_edf5_11e4_90ec_1681e6b88ec1,
                                    23LL);
        if ( InterfaceIdFromMMDevice >= 0 )
        {
          if ( (unsigned int)(a5 - 1) <= 1 )
            v11 = eHostProcessConnector;
          LODWORD(ppv) = v11;
          InterfaceIdFromMMDevice = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, __int64, LPVOID *, IMMDeviceCollection **, UINT *, UINT *))(*(_QWORD *)v33 + 96LL))(
                                      v33,
                                      p_FormatSize,
                                      *p_FormatSize,
                                      1LL,
                                      ppv,
                                      &v25,
                                      &v32,
                                      &v31);
          if ( InterfaceIdFromMMDevice >= 0 )
          {
            a6->APOInit.cbSize = 88;
            a6->APOInit.clsid = *v38;
            v15 = v21;
            v21 = 0LL;
            a6->pAPOEndpointProperties = v15;
            v16 = v23;
            v23 = 0LL;
            a6->pAPOSystemEffectsProperties = v16;
            a6->pReserved = 0LL;
            v17 = v25;
            v25 = 0LL;
            a6->pDeviceCollection = v17;
            a6->nSoftwareIoDeviceInCollection = v32;
            a6->nSoftwareIoConnectorIndex = v31;
            a6->AudioProcessingMode = *v37;
            a6->InitializeForDiscoveryOnly = v30;
          }
        }
      }
    }
  }
LABEL_41:
  CoTaskMemFree(pv);
  CoTaskMemFree(v29);
  CoTaskMemFree(p_FormatSize);
  PropVariantClear(&pvar);
  CoTaskMemFree(v26);
  v26 = 0LL;
  CoTaskMemFree(v28);
  v28 = 0LL;
  if ( v25 )
    ((void (__fastcall *)(IMMDeviceCollection *))v25->lpVtbl->Release)(v25);
  if ( v22 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v20 )
    ((void (__fastcall *)(struct IMMDevice *))v20->lpVtbl->Release)(v20);
  if ( v23 )
    ((void (__fastcall *)(IPropertyStore *))v23->lpVtbl->Release)(v23);
  if ( v21 )
    ((void (__fastcall *)(IPropertyStore *))v21->lpVtbl->Release)(v21);
  return (unsigned int)InterfaceIdFromMMDevice;
}
