/*
 * XREFs of ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x1400133E0
 * Callers:
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140012FC0 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 * Callees:
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x140013754 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     memset_0 @ 0x140019034 (memset_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall FillAPOInitSystemEffectsStructure(
        struct IMMDevice *a1,
        struct _GUID *a2,
        struct _GUID *a3,
        __int64 a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct APOInitSystemEffects2 *a6)
{
  struct KSDATAFORMAT_WAVEFORMATEX *v9; // r15
  HRESULT v10; // edi
  struct IMMDevice *v11; // rdi
  IPropertyStore *v12; // rax
  IPropertyStore *v13; // rax
  IMMDeviceCollection *v14; // rax
  LPVOID *ppv; // [rsp+28h] [rbp-A9h]
  struct IMMDevice *v17; // [rsp+48h] [rbp-89h] BYREF
  IPropertyStore *v18; // [rsp+50h] [rbp-81h] BYREF
  struct KSDATAFORMAT_WAVEFORMATEX *v19; // [rsp+58h] [rbp-79h] BYREF
  IPropertyStore *v20; // [rsp+60h] [rbp-71h] BYREF
  IMMDeviceCollection *v21; // [rsp+68h] [rbp-69h] BYREF
  LPVOID v22; // [rsp+70h] [rbp-61h] BYREF
  UINT v23; // [rsp+78h] [rbp-59h] BYREF
  UINT v24; // [rsp+7Ch] [rbp-55h] BYREF
  LPVOID v25; // [rsp+80h] [rbp-51h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-49h] BYREF
  __int64 v27; // [rsp+90h] [rbp-41h] BYREF
  LPVOID v28; // [rsp+98h] [rbp-39h]
  LPVOID v29; // [rsp+A0h] [rbp-31h]
  PROPVARIANT pvar; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-21h]
  struct tWAVEFORMATEX *Src; // [rsp+B8h] [rbp-19h]
  __int64 v33; // [rsp+C0h] [rbp-11h]
  __int64 v34; // [rsp+C8h] [rbp-9h]
  PROPERTYKEY v35; // [rsp+D0h] [rbp-1h] BYREF

  v34 = -2LL;
  v33 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  v22 = 0LL;
  pv = 0LL;
  v9 = 0LL;
  v19 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  v21 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  pvar = 0LL;
  v31 = 0LL;
  Src = 0LL;
  memset_0(a6, 0, sizeof(struct APOInitSystemEffects2));
  v10 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))a1->lpVtbl->OpenPropertyStore)(
          a1,
          0LL,
          &v18);
  if ( v10 < 0 )
    goto LABEL_14;
  v11 = v17;
  if ( v17 != a1 )
  {
    v17 = 0LL;
    ((void (__fastcall *)(struct IMMDevice *, GUID *, struct IMMDevice **))a1->lpVtbl->QueryInterface)(
      a1,
      &GUID_ed899cbb_5613_4541_a78f_66302f0ce211,
      &v17);
    v11 = v17;
  }
  if ( !v11 )
  {
    v10 = -2147418113;
    goto LABEL_14;
  }
  v10 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))v11->lpVtbl->GetId)(v11, 0LL, &v20);
  if ( v10 < 0 )
    goto LABEL_14;
  v35 = PKEY_AudioEngine_DeviceFormat;
  if ( ((int (__fastcall *)(IPropertyStore *, PROPERTYKEY *, PROPVARIANT *))v18->lpVtbl->GetValue)(v18, &v35, &pvar) >= 0
    && (_WORD)pvar == 65 )
  {
    if ( (unsigned int)v31 < 0x12uLL )
    {
      v10 = -2147024809;
      goto LABEL_14;
    }
    if ( (unsigned int)v31 < (unsigned __int64)Src->cbSize + 18 )
    {
      v10 = -2147024809;
      goto LABEL_14;
    }
    v10 = CreateKSFormatFromWFXFormat(Src, &v19);
    if ( v10 < 0 )
      goto LABEL_34;
  }
  else
  {
    v10 = CoCreateInstance(
            &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
            0LL,
            0x17u,
            &GUID_6be54be8_a068_4875_a49d_0c2966473b11,
            &v25);
    if ( v10 < 0 )
      goto LABEL_14;
    v10 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &v22);
    if ( v10 < 0 )
      goto LABEL_14;
    v10 = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD, LPVOID *))(*(_QWORD *)v25 + 32LL))(v25, v22, 0LL, &pv);
    if ( v10 < 0 )
      goto LABEL_14;
    v10 = CreateKSFormatFromWFXFormat((const struct tWAVEFORMATEX *)pv, &v19);
    if ( v10 < 0 )
    {
LABEL_34:
      v9 = v19;
      goto LABEL_14;
    }
  }
  ppv = (LPVOID *)&v27;
  v10 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
          a1,
          &GUID_8bfd01ba_edf5_11e4_90ec_1681e6b88ec1,
          23LL);
  if ( v10 < 0 )
    goto LABEL_34;
  LODWORD(ppv) = 0;
  v9 = v19;
  v10 = (*(__int64 (__fastcall **)(__int64, struct KSDATAFORMAT_WAVEFORMATEX *, _QWORD, __int64, LPVOID *, IMMDeviceCollection **, UINT *, UINT *))(*(_QWORD *)v27 + 96LL))(
          v27,
          v19,
          v19->DataFormat.FormatSize,
          1LL,
          ppv,
          &v21,
          &v23,
          &v24);
  if ( v10 >= 0 )
  {
    a6->APOInit.cbSize = 88;
    a6->APOInit.clsid = *a2;
    v12 = v18;
    v18 = 0LL;
    a6->pAPOEndpointProperties = v12;
    v13 = v20;
    v20 = 0LL;
    a6->pAPOSystemEffectsProperties = v13;
    a6->pReserved = 0LL;
    v14 = v21;
    v21 = 0LL;
    a6->pDeviceCollection = v14;
    a6->nSoftwareIoDeviceInCollection = v23;
    a6->nSoftwareIoConnectorIndex = v24;
    a6->AudioProcessingMode = *a3;
    a6->InitializeForDiscoveryOnly = 0;
  }
LABEL_14:
  CoTaskMemFree(pv);
  CoTaskMemFree(v22);
  CoTaskMemFree(v9);
  PropVariantClear(&pvar);
  CoTaskMemFree(v28);
  v28 = 0LL;
  CoTaskMemFree(v29);
  v29 = 0LL;
  if ( v21 )
    ((void (__fastcall *)(IMMDeviceCollection *))v21->lpVtbl->Release)(v21);
  if ( v25 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v17 )
    ((void (__fastcall *)(struct IMMDevice *))v17->lpVtbl->Release)(v17);
  if ( v20 )
    ((void (__fastcall *)(IPropertyStore *))v20->lpVtbl->Release)(v20);
  if ( v18 )
    ((void (__fastcall *)(IPropertyStore *))v18->lpVtbl->Release)(v18);
  return (unsigned int)v10;
}
