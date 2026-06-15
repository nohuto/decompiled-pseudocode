/*
 * XREFs of ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x18007FCE0
 * Callers:
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180080A50 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x180081110 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__.c)
 * Callees:
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x18003A8F4 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall ConnectorSupportsFormat(
        struct CEndpointCharacteristics *a1,
        __int64 a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4)
{
  int v5; // r13d
  __int64 v6; // rsi
  HRESULT KSFormatFromWFXFormat; // r15d
  unsigned int *v8; // r14
  const struct _tagpropertykey *v9; // rdx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD *); // rbx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-89h] BYREF
  __int64 v13; // [rsp+40h] [rbp-81h] BYREF
  __int64 v14; // [rsp+48h] [rbp-79h] BYREF
  __int64 v15; // [rsp+50h] [rbp-71h] BYREF
  __int64 v16; // [rsp+58h] [rbp-69h] BYREF
  __int64 v17; // [rsp+60h] [rbp-61h]
  LPVOID ppv; // [rsp+68h] [rbp-59h] BYREF
  int v19; // [rsp+70h] [rbp-51h] BYREF
  __int64 v20; // [rsp+78h] [rbp-49h] BYREF
  int v21; // [rsp+80h] [rbp-41h] BYREF
  __int64 v22; // [rsp+88h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+90h] [rbp-31h] BYREF
  PROPVARIANT v24; // [rsp+98h] [rbp-29h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-21h]
  __int64 v26; // [rsp+A8h] [rbp-19h]
  PROPVARIANT pvar; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-9h]
  __int64 v29; // [rsp+C0h] [rbp-1h]
  __int64 v30; // [rsp+C8h] [rbp+7h]
  __int64 v31; // [rsp+D0h] [rbp+Fh]
  _DWORD v32[6]; // [rsp+D8h] [rbp+17h] BYREF

  v30 = -2LL;
  v5 = a2;
  v20 = 0LL;
  pv = 0LL;
  v22 = 0LL;
  pvar = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v6 = *((_QWORD *)a1 + 2);
  v31 = v6;
  (*(void (__fastcall **)(__int64, __int64, struct tWAVEFORMATEX *, struct _GUID *))(*(_QWORD *)v6 + 8LL))(
    v6,
    a2,
    a3,
    a4);
  KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(a3, (struct KSDATAFORMAT_WAVEFORMATEX **)&pv);
  v8 = (unsigned int *)pv;
  if ( KSFormatFromWFXFormat < 0 )
    goto LABEL_53;
  if ( ((v5 - 1) & 0xFFFFFFFD) != 0 )
  {
    KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v6 + 24LL))(
                              v6,
                              &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
                              23LL,
                              0LL,
                              &v20);
    if ( KSFormatFromWFXFormat >= 0 )
      KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, _QWORD, int, __int64 *))(*(_QWORD *)v20 + 80LL))(
                                v20,
                                v8,
                                *v8,
                                0LL,
                                1,
                                &v22);
    goto LABEL_53;
  }
  v12 = 0LL;
  v14 = 0LL;
  v17 = 0LL;
  ppv = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v13 = 0LL;
  v19 = 0;
  KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v6 + 32LL))(v6, 0LL, &v13);
  if ( KSFormatFromWFXFormat < 0 )
    goto LABEL_38;
  v32[0] = 590439624;
  v32[1] = 1283267372;
  v32[2] = 1907779772;
  v32[3] = 1730509416;
  v32[4] = 1;
  KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v13 + 40LL))(
                            v13,
                            v32,
                            &pvar);
  if ( KSFormatFromWFXFormat < 0 )
    goto LABEL_38;
  v9 = &PKEY_Endpoint_KeywordDetector_ConnectorId;
  if ( v5 != 3 )
    v9 = &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId;
  KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v13 + 40LL))(
                            v13,
                            v9,
                            &v24);
  if ( KSFormatFromWFXFormat < 0 )
    goto LABEL_38;
  KSFormatFromWFXFormat = CoCreateInstance(
                            &CLSID_MMDeviceEnumerator,
                            0LL,
                            0x17u,
                            &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                            &ppv);
  if ( KSFormatFromWFXFormat < 0 )
    goto LABEL_38;
  KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(
                            ppv,
                            v28,
                            &v15);
  if ( KSFormatFromWFXFormat < 0 )
    goto LABEL_38;
  KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v15 + 24LL))(
                            v15,
                            &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                            23LL);
  if ( KSFormatFromWFXFormat < 0 )
    goto LABEL_38;
  KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v17 + 56LL))(
                            v17,
                            (unsigned int)v25,
                            &v12);
  if ( KSFormatFromWFXFormat < 0 )
    goto LABEL_38;
  v10 = v12;
  if ( v12 )
  {
    if ( v5 == 1 )
    {
      KSFormatFromWFXFormat = (**v12)(v12, &GUID_9c2c4058_23f5_41de_877a_df3af236a09e, &v14);
      if ( KSFormatFromWFXFormat < 0 )
        goto LABEL_38;
      KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 24LL))(v14, &v21);
      if ( KSFormatFromWFXFormat < 0 )
        goto LABEL_38;
      if ( v21 != 3 )
      {
        KSFormatFromWFXFormat = -2147418113;
LABEL_38:
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        if ( ppv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        v10 = v12;
        goto LABEL_51;
      }
      v10 = v12;
    }
    KSFormatFromWFXFormat = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64, GUID *, __int64 *))(*v10)[13])(
                              v10,
                              1LL,
                              &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                              &v16);
    if ( KSFormatFromWFXFormat >= 0 )
    {
      KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, int *))(*(_QWORD *)v16 + 24LL))(
                                v16,
                                v8,
                                *v8,
                                &v19);
      if ( KSFormatFromWFXFormat >= 0 && !v19 )
        KSFormatFromWFXFormat = -2004287480;
    }
    goto LABEL_38;
  }
  KSFormatFromWFXFormat = -2147023728;
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v10 = v12;
  }
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v10 = v12;
  }
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v10 = v12;
  }
  if ( ppv )
  {
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
    v10 = v12;
  }
  if ( v17 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v10 = v12;
  }
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v10 = v12;
  }
LABEL_51:
  if ( v10 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v10)[2])(v10);
LABEL_53:
  PropVariantClear(&pvar);
  PropVariantClear(&v24);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  CoTaskMemFree(v8);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)KSFormatFromWFXFormat;
}
