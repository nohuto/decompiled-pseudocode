/*
 * XREFs of ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180003BB4
 * Callers:
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x180003304 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     AudioServerGetDevicePeriod @ 0x1800041A0 (AudioServerGetDevicePeriod.c)
 *     AudioServerIsFormatSupported @ 0x180006E00 (AudioServerIsFormatSupported.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180009F10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180072670 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800731C0 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800038A4 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800039E4 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180003B80 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18001C9C4 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002761C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18004EF3C (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 */

__int64 __fastcall DeriveAudioProcessingModeConfiguration(
        unsigned int a1,
        int a2,
        CEndpointCharacteristics *a3,
        unsigned int a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        int a7,
        unsigned int a8,
        GUID *a9,
        GUID *a10,
        GUID *a11,
        GUID *a12)
{
  unsigned int v12; // r13d
  GUID *v15; // rsi
  GUID v17; // xmm6
  GUID v18; // xmm8
  GUID v19; // xmm7
  __int64 v20; // rax
  unsigned int v21; // edi
  struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedConnectorModes; // rax
  bool v23; // zf
  struct _GUID *v24; // rax
  __int64 v26; // [rsp+38h] [rbp-A9h] BYREF
  GUID v27; // [rsp+48h] [rbp-99h] BYREF
  GUID v28; // [rsp+58h] [rbp-89h] BYREF
  GUID *v29; // [rsp+68h] [rbp-79h]
  struct _GUID v30; // [rsp+78h] [rbp-69h] BYREF
  GUID *v31; // [rsp+88h] [rbp-59h]
  struct _GUID v32; // [rsp+98h] [rbp-49h] BYREF

  v12 = 0;
  v26 = 0LL;
  v15 = a10;
  v17 = GUID_00000000_0000_0000_0000_000000000000;
  v18 = GUID_00000000_0000_0000_0000_000000000000;
  v31 = a9;
  v19 = GUID_00000000_0000_0000_0000_000000000000;
  v29 = a10;
  v32 = GUID_00000000_0000_0000_0000_000000000000;
  v28 = GUID_00000000_0000_0000_0000_000000000000;
  v27 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a5 == 1 )
  {
    CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(a3, a6, &v32, &v28, &v27);
LABEL_31:
    v17 = v32;
    v18 = v28;
    v19 = v27;
    goto LABEL_11;
  }
  if ( a4 == 2 )
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      a3,
      eHostProcessConnector,
      &v32,
      &v28,
      &v27);
    goto LABEL_31;
  }
  if ( a2 )
  {
    v27 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    if ( (unsigned int)CEndpointCharacteristics::IsConnectorModeSupported(a3, a6, &v27) )
    {
      v17 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v18 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v19 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    else
    {
      v12 = -2004287449;
    }
    goto LABEL_11;
  }
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(a3, a6, &v32, &v28, &v27);
  if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager
                                                                                              + 80LL))(
         g_PolicyManager,
         a4,
         a1,
         a8,
         &v26) < 0
    || (v20 = v26, v21 = 0, !*(_DWORD *)v26) )
  {
LABEL_30:
    v15 = v29;
    goto LABEL_31;
  }
  while ( 1 )
  {
    v30 = *(struct _GUID *)(*(_QWORD *)(v20 + 8) + 16LL * v21);
    SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(a3, a6);
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(SupportedConnectorModes, &v30) != -1 )
      break;
    v30 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    if ( (unsigned int)CEndpointCharacteristics::IsConnectorModeSupported(a3, a6, &v30) )
    {
      v30 = *(struct _GUID *)(*(_QWORD *)(v26 + 8) + 16LL * v21);
      if ( CEndpointCharacteristics::IsAPOModeSupported(a3, &v30, a6) )
      {
        v17 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        v18 = *(GUID *)(*(_QWORD *)(v26 + 8) + 16LL * v21);
        v19 = v18;
        goto LABEL_10;
      }
    }
    v20 = v26;
    if ( ++v21 >= *(_DWORD *)v26 )
      goto LABEL_30;
  }
  v17 = *(GUID *)(*(_QWORD *)(v26 + 8) + 16LL * v21);
  v32 = v17;
  if ( a7
    || (v30 = v17,
        v23 = !CEndpointCharacteristics::IsAPOModeSupported(a3, &v30, a6),
        v24 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf,
        !v23) )
  {
    v24 = &v32;
  }
  v18 = *v24;
  v19 = v17;
LABEL_10:
  v15 = v29;
LABEL_11:
  if ( v31 )
    *v31 = v17;
  if ( v15 )
    *v15 = v18;
  if ( a11 )
    *a11 = v19;
  if ( a12 )
    *a12 = v19;
  return v12;
}
