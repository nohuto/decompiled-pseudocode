/*
 * XREFs of ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x1800880EC
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180008A60 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800235C0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x180081AB4 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x18003A8F4 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall IsFormatSupportedByHwAudioEngine(
        struct IMMDevice *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct tWAVEFORMATEX *a3,
        struct tWAVEFORMATEX **a4)
{
  void *v7; // r14
  unsigned int v8; // r15d
  int KSFormatFromWFXFormat; // esi
  unsigned int v10; // r13d
  _BYTE *v11; // rsi
  __int64 v13; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  PROPVARIANT pvar; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-B0h]
  __int64 v18; // [rsp+60h] [rbp-A8h]
  __int64 v19; // [rsp+68h] [rbp-A0h]
  __int64 v20; // [rsp+70h] [rbp-98h] BYREF
  void *Src; // [rsp+78h] [rbp-90h] BYREF
  __int64 v22; // [rsp+80h] [rbp-88h] BYREF
  __int64 v23; // [rsp+88h] [rbp-80h] BYREF
  __int64 v24; // [rsp+90h] [rbp-78h] BYREF
  __int64 v25; // [rsp+98h] [rbp-70h] BYREF
  struct tWAVEFORMATEX *v26; // [rsp+A0h] [rbp-68h]
  __int64 v27; // [rsp+A8h] [rbp-60h]
  _DWORD v28[6]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v29[112]; // [rsp+C8h] [rbp-40h] BYREF

  v27 = -2LL;
  v26 = a3;
  v25 = 0LL;
  v15 = 0LL;
  LODWORD(v13) = 0;
  v7 = 0LL;
  Src = 0LL;
  v22 = 0LL;
  v19 = 0LL;
  v23 = 0LL;
  v14 = 0LL;
  v24 = 0LL;
  v28[0] = 590439624;
  v28[1] = 1283267372;
  v28[2] = 1907779772;
  v8 = 104;
  v28[3] = 1730509416;
  v28[4] = 1;
  memset_0(v29, 0, 0x68uLL);
  pvar = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( a3 && a1 )
  {
    KSFormatFromWFXFormat = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, __int64 *))a1->lpVtbl->Activate)(
                              a1,
                              &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
                              23LL,
                              0LL,
                              &v25);
    if ( KSFormatFromWFXFormat >= 0 )
    {
      KSFormatFromWFXFormat = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(
                                a1,
                                0LL,
                                &v15);
      if ( KSFormatFromWFXFormat >= 0 )
      {
        KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
                                  v15,
                                  &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId,
                                  &pvar);
        if ( KSFormatFromWFXFormat >= 0 )
        {
          if ( (_WORD)pvar != 19 )
          {
LABEL_7:
            KSFormatFromWFXFormat = -2147418113;
            goto LABEL_26;
          }
          v10 = v17;
          pvar = 0LL;
          v17 = 0LL;
          v18 = 0LL;
          KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
                                    v15,
                                    v28,
                                    &pvar);
          if ( KSFormatFromWFXFormat >= 0 )
          {
            if ( (_WORD)pvar != 31 )
              goto LABEL_10;
            KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator
                                                                                          + 40LL))(
                                      *(_QWORD *)&g_DeviceEnumerator,
                                      v17,
                                      &v22);
            if ( KSFormatFromWFXFormat >= 0 )
            {
              KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v22 + 24LL))(
                                        v22,
                                        &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                                        1LL);
              if ( KSFormatFromWFXFormat >= 0 )
              {
                KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 56LL))(
                                          v19,
                                          v10,
                                          &v14);
                if ( KSFormatFromWFXFormat >= 0 )
                {
                  KSFormatFromWFXFormat = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v14)(
                                            v14,
                                            &GUID_9c2c4058_23f5_41de_877a_df3af236a09e,
                                            &v23);
                  if ( KSFormatFromWFXFormat >= 0 )
                  {
                    KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 24LL))(
                                              v23,
                                              &v20);
                    if ( KSFormatFromWFXFormat >= 0 )
                    {
                      if ( (_DWORD)v20 != 3 )
                        goto LABEL_7;
                      KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v14 + 104LL))(
                                                v14,
                                                1LL,
                                                &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                                                &v24);
                      if ( KSFormatFromWFXFormat >= 0 )
                      {
                        KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(
                                                  v26,
                                                  (struct KSDATAFORMAT_WAVEFORMATEX **)&Src);
                        v7 = Src;
                        if ( KSFormatFromWFXFormat >= 0 )
                        {
                          if ( *(_DWORD *)Src >= 0x68u )
                          {
                            v11 = Src;
                            v8 = *(_DWORD *)Src;
                          }
                          else
                          {
                            memcpy_0(v29, Src, *(unsigned int *)Src);
                            v11 = v29;
                          }
                          KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int64 *))(*(_QWORD *)v24 + 24LL))(
                                                    v24,
                                                    v11,
                                                    v8,
                                                    &v13);
                          if ( KSFormatFromWFXFormat >= 0 && !(_DWORD)v13 )
LABEL_10:
                            KSFormatFromWFXFormat = -2004287480;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    KSFormatFromWFXFormat = -2147024809;
  }
LABEL_26:
  if ( a4 )
    *a4 = 0LL;
  PropVariantClear(&pvar);
  if ( v7 )
    CoTaskMemFree(v7);
  if ( KSFormatFromWFXFormat < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xBu,
      (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      KSFormatFromWFXFormat);
  }
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return (unsigned int)KSFormatFromWFXFormat;
}
