/*
 * XREFs of ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x18008B4BC
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800153A0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     AudioServerIsFormatSupported @ 0x180022F00 (AudioServerIsFormatSupported.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180025240 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 * Callees:
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180031424 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall IsFormatSupportedByHwAudioEngine(
        struct IMMDevice *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        const struct tWAVEFORMATEX *a3,
        struct tWAVEFORMATEX **a4)
{
  struct KSDATAFORMAT_WAVEFORMATEX *v7; // r14
  int v8; // esi
  unsigned int v9; // r12d
  int v11; // [rsp+38h] [rbp-69h] BYREF
  __int64 v12; // [rsp+40h] [rbp-61h] BYREF
  __int64 v13; // [rsp+48h] [rbp-59h] BYREF
  PROPVARIANT pvar; // [rsp+50h] [rbp-51h] BYREF
  __int64 v15; // [rsp+58h] [rbp-49h]
  __int64 v16; // [rsp+60h] [rbp-41h]
  __int64 v17; // [rsp+68h] [rbp-39h] BYREF
  __int64 v18; // [rsp+70h] [rbp-31h] BYREF
  __int64 v19; // [rsp+78h] [rbp-29h]
  __int64 v20; // [rsp+80h] [rbp-21h] BYREF
  struct KSDATAFORMAT_WAVEFORMATEX *v21; // [rsp+88h] [rbp-19h] BYREF
  int v22; // [rsp+90h] [rbp-11h] BYREF
  _QWORD v23[2]; // [rsp+98h] [rbp-9h] BYREF
  _DWORD v24[6]; // [rsp+A8h] [rbp+7h] BYREF

  v23[1] = -2LL;
  v23[0] = 0LL;
  v13 = 0LL;
  v11 = 0;
  v7 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  v12 = 0LL;
  v20 = 0LL;
  v24[0] = 590439624;
  v24[1] = 1283267372;
  v24[2] = 1907779772;
  v24[3] = 1730509416;
  v24[4] = 1;
  pvar = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( a3 && a1 )
  {
    v8 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, _QWORD *))a1->lpVtbl->Activate)(
           a1,
           &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
           23LL,
           0LL,
           v23);
    if ( v8 >= 0 )
    {
      v8 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v13);
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v13 + 40LL))(
               v13,
               &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId,
               &pvar);
        if ( v8 >= 0 )
        {
          if ( (_WORD)pvar != 19 )
          {
LABEL_7:
            v8 = -2147418113;
            goto LABEL_24;
          }
          v9 = v15;
          pvar = 0LL;
          v15 = 0LL;
          v16 = 0LL;
          v8 = (*(__int64 (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v13 + 40LL))(v13, v24, &pvar);
          if ( v8 >= 0 )
          {
            if ( (_WORD)pvar != 31 )
            {
LABEL_10:
              v8 = -2004287480;
              goto LABEL_24;
            }
            v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                   *(_QWORD *)&g_DeviceEnumerator,
                   v15,
                   &v18);
            if ( v8 >= 0 )
            {
              v8 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v18 + 24LL))(
                     v18,
                     &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                     1LL);
              if ( v8 >= 0 )
              {
                v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 56LL))(v19, v9, &v12);
                if ( v8 >= 0 )
                {
                  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v12)(
                         v12,
                         &GUID_9c2c4058_23f5_41de_877a_df3af236a09e,
                         &v17);
                  if ( v8 >= 0 )
                  {
                    v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 24LL))(v17, &v22);
                    if ( v8 >= 0 )
                    {
                      if ( v22 != 3 )
                        goto LABEL_7;
                      v8 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v12 + 104LL))(
                             v12,
                             1LL,
                             &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                             &v20);
                      if ( v8 >= 0 )
                      {
                        v8 = CreateKSFormatFromWFXFormat(a3, &v21);
                        if ( v8 < 0 )
                        {
                          v7 = v21;
                        }
                        else
                        {
                          v7 = v21;
                          v8 = (*(__int64 (__fastcall **)(__int64, struct KSDATAFORMAT_WAVEFORMATEX *, __int64, int *))(*(_QWORD *)v20 + 24LL))(
                                 v20,
                                 v21,
                                 104LL,
                                 &v11);
                          if ( v8 >= 0 && !v11 )
                            goto LABEL_10;
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
    v8 = -2147024809;
  }
LABEL_24:
  if ( a4 )
    *a4 = 0LL;
  PropVariantClear(&pvar);
  if ( v7 )
    CoTaskMemFree(v7);
  if ( v8 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xBu,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      v8);
  }
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v23[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23[0] + 16LL))(v23[0]);
  return (unsigned int)v8;
}
