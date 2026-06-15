/*
 * XREFs of ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x180084F28
 * Callers:
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18008553C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x180085E80 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__.c)
 * Callees:
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180031424 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall ConnectorSupportsFormat(
        struct CEndpointCharacteristics *a1,
        __int64 a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4)
{
  int v5; // r12d
  __int64 v6; // rsi
  HRESULT KSFormatFromWFXFormat; // r15d
  unsigned int *v8; // r14
  __int64 v9; // rbx
  LPVOID *ppv; // [rsp+28h] [rbp-89h]
  __int64 v12; // [rsp+38h] [rbp-79h] BYREF
  __int64 v13; // [rsp+40h] [rbp-71h] BYREF
  __int64 v14; // [rsp+48h] [rbp-69h] BYREF
  __int64 v15; // [rsp+50h] [rbp-61h] BYREF
  LPVOID v16; // [rsp+58h] [rbp-59h] BYREF
  __int64 v17; // [rsp+60h] [rbp-51h]
  int v18; // [rsp+68h] [rbp-49h] BYREF
  __int64 v19; // [rsp+70h] [rbp-41h] BYREF
  __int64 v20; // [rsp+78h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+80h] [rbp-31h] BYREF
  PROPVARIANT v22; // [rsp+88h] [rbp-29h] BYREF
  __int64 v23; // [rsp+90h] [rbp-21h]
  __int64 v24; // [rsp+98h] [rbp-19h]
  PROPVARIANT pvar; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-9h]
  __int64 v27; // [rsp+B0h] [rbp-1h]
  __int64 v28; // [rsp+B8h] [rbp+7h]
  __int64 v29; // [rsp+C0h] [rbp+Fh]
  _DWORD v30[6]; // [rsp+C8h] [rbp+17h] BYREF

  v29 = -2LL;
  v5 = a2;
  v19 = 0LL;
  pv = 0LL;
  v20 = 0LL;
  pvar = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v6 = *((_QWORD *)a1 + 2);
  v28 = v6;
  (*(void (__fastcall **)(__int64, __int64, struct tWAVEFORMATEX *, struct _GUID *))(*(_QWORD *)v6 + 8LL))(
    v6,
    a2,
    a3,
    a4);
  KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(a3, (struct KSDATAFORMAT_WAVEFORMATEX **)&pv);
  v8 = (unsigned int *)pv;
  if ( KSFormatFromWFXFormat < 0 )
    goto LABEL_41;
  if ( v5 == 3 )
  {
    v12 = 0LL;
    v17 = 0LL;
    v16 = 0LL;
    v15 = 0LL;
    v14 = 0LL;
    v13 = 0LL;
    v18 = 0;
    KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v6 + 32LL))(
                              v6,
                              0LL,
                              &v13);
    if ( KSFormatFromWFXFormat >= 0 )
    {
      v30[0] = 590439624;
      v30[1] = 1283267372;
      v30[2] = 1907779772;
      v30[3] = 1730509416;
      v30[4] = 1;
      KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v13 + 40LL))(
                                v13,
                                v30,
                                &pvar);
      if ( KSFormatFromWFXFormat >= 0 )
      {
        KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v13 + 40LL))(
                                  v13,
                                  &PKEY_Endpoint_KeywordDetector_ConnectorId,
                                  &v22);
        if ( KSFormatFromWFXFormat >= 0 )
        {
          KSFormatFromWFXFormat = CoCreateInstance(
                                    &CLSID_MMDeviceEnumerator,
                                    0LL,
                                    0x17u,
                                    &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                                    &v16);
          if ( KSFormatFromWFXFormat >= 0 )
          {
            KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)v16 + 40LL))(
                                      v16,
                                      v26,
                                      &v15);
            if ( KSFormatFromWFXFormat >= 0 )
            {
              KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v15 + 24LL))(
                                        v15,
                                        &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                                        23LL);
              if ( KSFormatFromWFXFormat >= 0 )
              {
                KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 56LL))(
                                          v17,
                                          (unsigned int)v23,
                                          &v12);
                if ( KSFormatFromWFXFormat >= 0 )
                {
                  v9 = v12;
                  if ( !v12 )
                  {
                    KSFormatFromWFXFormat = -2147023728;
                    if ( v13 )
                    {
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
                      v9 = v12;
                    }
                    if ( v14 )
                    {
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
                      v9 = v12;
                    }
                    if ( v15 )
                    {
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
                      v9 = v12;
                    }
                    if ( v16 )
                    {
                      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v16 + 16LL))(v16);
                      v9 = v12;
                    }
                    if ( v17 )
                    {
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
                      v9 = v12;
                    }
LABEL_15:
                    if ( v9 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                    goto LABEL_41;
                  }
                  KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v12 + 104LL))(
                                            v12,
                                            1LL,
                                            &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                                            &v14);
                  if ( KSFormatFromWFXFormat >= 0 )
                  {
                    KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, int *))(*(_QWORD *)v14 + 24LL))(
                                              v14,
                                              v8,
                                              *v8,
                                              &v18);
                    if ( KSFormatFromWFXFormat >= 0 && !v18 )
                      KSFormatFromWFXFormat = -2004287480;
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v16 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v9 = v12;
    goto LABEL_15;
  }
  ppv = (LPVOID *)&v19;
  KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v6 + 24LL))(
                            v6,
                            &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
                            23LL);
  if ( KSFormatFromWFXFormat >= 0 )
  {
    LODWORD(ppv) = 1;
    KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, _QWORD, LPVOID *, __int64 *))(*(_QWORD *)v19 + 80LL))(
                              v19,
                              v8,
                              *v8,
                              0LL,
                              ppv,
                              &v20);
  }
LABEL_41:
  PropVariantClear(&pvar);
  PropVariantClear(&v22);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  CoTaskMemFree(v8);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)KSFormatFromWFXFormat;
}
