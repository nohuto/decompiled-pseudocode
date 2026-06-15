/*
 * XREFs of ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJW4APO_TYPE@@@Z @ 0x18001D750
 * Callers:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001CA10 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HH.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18001DAE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 * Callees:
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x18001D3E0 (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ??0?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1800278A0 (--0-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::UpdateAPOEnableStatus(__int64 a1, int a2)
{
  __int64 v2; // rsi
  int v4; // edi
  int v5; // ecx
  BOOL v6; // r15d
  BOOL v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  BOOL v11; // esi
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  PROPVARIANT pvar; // [rsp+28h] [rbp-18h] BYREF
  __int64 v17; // [rsp+30h] [rbp-10h]
  __int64 v18; // [rsp+38h] [rbp-8h]
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF
  __int64 v20; // [rsp+90h] [rbp+50h] BYREF
  __int64 v21; // [rsp+98h] [rbp+58h] BYREF

  v2 = a2;
  v4 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v5 = dword_1800CB2F8;
  if ( (dword_1800CB2F8 & 1) == 0 )
  {
    v5 = dword_1800CB2F8 | 1;
    dword_1800CB2F8 |= 1u;
    xmmword_1800CB064 = PKEY_Endpoint_LFX_FailCount;
    dword_1800CB074 = 9;
    xmmword_1800CB078 = PKEY_Endpoint_GFX_FailCount;
    dword_1800CB088 = 8;
    xmmword_1800CB08C = PKEY_Endpoint_EFX_FailCount;
    dword_1800CB09C = 31;
  }
  if ( (v5 & 2) == 0 )
  {
    dword_1800CB2F8 = v5 | 2;
    xmmword_1800CB0B4 = PKEY_Endpoint_LFX_ExceptionCount;
    dword_1800CB0C4 = 33;
    xmmword_1800CB0C8 = PKEY_Endpoint_GFX_ExceptionCount;
    dword_1800CB0D8 = 34;
    xmmword_1800CB0DC = PKEY_Endpoint_EFX_ExceptionCount;
    dword_1800CB0EC = 35;
  }
  v6 = 1;
  if ( *(_DWORD *)(a1 + 428) )
    goto LABEL_57;
  if ( !*(_DWORD *)(a1 + 424) )
    CEndpointCharacteristics::InitializeAPOInfo((CEndpointCharacteristics *)a1);
  if ( !*(_DWORD *)(a1 + 4 * v2 + 432) )
  {
LABEL_57:
    v7 = 0;
    v8 = *(_QWORD *)(a1 + 32);
    if ( !v8 )
      goto LABEL_14;
    pvar = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v8 + 40LL))(
           v8,
           &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v7 = v17 == 1;
    }
    PropVariantClear(&pvar);
    if ( !v7 )
    {
LABEL_14:
      pvar = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      v9 = 20 * v2;
      v4 = (*(__int64 (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**(_QWORD **)(a1 + 32) + 40LL))(
             *(_QWORD *)(a1 + 32),
             &byte_1800CB050[v9],
             &pvar);
      if ( v4 < 0 )
        goto LABEL_29;
      if ( (_WORD)pvar == 19 && (unsigned int)v17 >= 0x64 )
        goto LABEL_37;
      PropVariantClear(&pvar);
      v4 = (*(__int64 (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**(_QWORD **)(a1 + 32) + 40LL))(
             *(_QWORD *)(a1 + 32),
             &byte_1800CB0A0[v9],
             &pvar);
      if ( v4 < 0 )
        goto LABEL_29;
      if ( (_WORD)pvar == 19 && (unsigned int)v17 >= 0x64 )
      {
LABEL_37:
        ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_eecca8a7_a629_4dba_9f23_20f6db42d990>::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_eecca8a7_a629_4dba_9f23_20f6db42d990>(
          &v19,
          *(_QWORD *)(a1 + 16));
        if ( !v19 )
          goto LABEL_29;
        v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v19 + 40LL))(v19, 2LL, &v21);
        if ( v4 < 0 )
        {
          v14 = v19;
          goto LABEL_40;
        }
        v18 = 0LL;
        pvar = (PROPVARIANT)19;
        v17 = 1LL;
        v4 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v21 + 48LL))(
               v21,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &pvar);
        if ( v4 < 0 )
        {
          v15 = v19;
          if ( !v19 )
            goto LABEL_29;
          goto LABEL_44;
        }
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 16) + 32LL))(
               *(_QWORD *)(a1 + 16),
               2LL,
               &v20);
        if ( v4 < 0 )
        {
          v15 = v19;
          if ( !v19 )
            goto LABEL_29;
LABEL_44:
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v15);
          goto LABEL_29;
        }
        v4 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v20 + 48LL))(
               v20,
               &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
               &pvar);
        v14 = v19;
        if ( v4 < 0 )
        {
LABEL_40:
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          goto LABEL_29;
        }
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      PropVariantClear(&pvar);
    }
  }
  v10 = *(_QWORD *)(a1 + 56);
  if ( !v10 )
    goto LABEL_24;
  pvar = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v10 + 40LL))(
         v10,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v6 = v17 == 0;
  }
  PropVariantClear(&pvar);
  if ( v6 )
  {
LABEL_24:
    v11 = 0;
    v12 = *(_QWORD *)(a1 + 32);
    if ( v12 )
    {
      pvar = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v12 + 40LL))(
             v12,
             &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
             &pvar) >= 0
        && (_WORD)pvar == 19 )
      {
        v11 = v17 == 1;
      }
      PropVariantClear(&pvar);
      if ( v11 )
      {
        if ( !v20 )
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 16) + 32LL))(
                 *(_QWORD *)(a1 + 16),
                 2LL,
                 &v20);
        if ( v4 >= 0 )
        {
          v18 = 0LL;
          pvar = (PROPVARIANT)19;
          v17 = 0LL;
          v4 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v20 + 48LL))(
                 v20,
                 &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
                 &pvar);
          PropVariantClear(&pvar);
        }
      }
    }
  }
LABEL_29:
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return (unsigned int)v4;
}
