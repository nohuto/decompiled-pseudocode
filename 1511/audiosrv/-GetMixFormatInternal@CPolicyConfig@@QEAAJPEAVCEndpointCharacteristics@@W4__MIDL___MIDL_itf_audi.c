/*
 * XREFs of ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001A800
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180008A60 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180010180 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180010630 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     AudioServerIsFormatSupported @ 0x180019680 (AudioServerIsFormatSupported.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180022650 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 *     AudioServerGetMixFormat @ 0x180031580 (AudioServerGetMixFormat.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800361A0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x180071DD0 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180080A50 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800832E0 (-GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     PolicyConfigGetMixFormat @ 0x180086990 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180089190 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180083EAC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@AEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008408C (-RefreshDeviceFormat@CPolicyConfig@@AEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPolicyConfig::GetMixFormatInternal(
        CPolicyConfig *this,
        struct CEndpointCharacteristics *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct _GUID *a4,
        struct tWAVEFORMATEX **a5)
{
  CPolicyConfig *v8; // r15
  __int64 v9; // rdi
  BYTE *v10; // rbx
  int refreshed; // r14d
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // ecx
  __int128 fmtid; // xmm0
  DWORD pid; // eax
  BYTE *pData; // r8
  unsigned __int16 v19; // dx
  int v20; // r11d
  int v21; // ebx
  unsigned __int16 v22; // r10
  unsigned __int16 v23; // r9
  __int16 v24; // si
  __int16 v25; // cx
  unsigned __int16 v26; // cx
  bool v27; // zf
  unsigned __int16 v28; // ax
  __int64 v29; // rbx
  struct tWAVEFORMATEX *v30; // rax
  struct tWAVEFORMATEX *v31; // rsi
  size_t v32; // r8
  TraceLoggingHProvider v33; // rcx
  BYTE *Src; // [rsp+20h] [rbp-81h]
  __int64 v36; // [rsp+28h] [rbp-79h] BYREF
  __int64 v37; // [rsp+30h] [rbp-71h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+38h] [rbp-69h] BYREF
  unsigned int *v39; // [rsp+50h] [rbp-51h] BYREF
  CPolicyConfig *v40; // [rsp+58h] [rbp-49h]
  struct tWAVEFORMATEX **v41; // [rsp+60h] [rbp-41h]
  __int64 v42; // [rsp+68h] [rbp-39h]
  __int64 v43; // [rsp+70h] [rbp-31h]
  __int128 v44; // [rsp+80h] [rbp-21h]
  __int64 v45; // [rsp+90h] [rbp-11h]
  struct _tagpropertykey v46; // [rsp+98h] [rbp-9h] BYREF

  v45 = -2LL;
  v8 = this;
  v40 = this;
  v41 = a5;
  v42 = 0LL;
  v9 = 0LL;
  v43 = 0LL;
  v10 = 0LL;
  Src = 0LL;
  v37 = 0LL;
  memset(&pvar, 0, sizeof(pvar));
  if ( !a5 )
  {
    refreshed = -2147467261;
    goto LABEL_75;
  }
  *a5 = 0LL;
  v9 = *((_QWORD *)a2 + 2);
  v43 = v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  if ( a3 == eOffloadConnector )
  {
    v46 = PKEY_AudioEngine_HWMixFormat;
  }
  else if ( *(_QWORD *)&a4->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
         && *(_QWORD *)a4->Data4 == *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
  {
    v46 = PKEY_AudioEngine_MixFormat;
  }
  else
  {
    if ( !v9
      || (v36 = 0LL,
          (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v9)(
            v9,
            &GUID_ed899cbb_5613_4541_a78f_66302f0ce211,
            &v36),
          !v36) )
    {
      refreshed = -2147467262;
      goto LABEL_74;
    }
    if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v36 + 48LL))(v36) )
    {
      v44 = (__int128)*a4;
      v39 = 0LL;
      v14 = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, unsigned int **))(*(_QWORD *)g_PolicyManager + 80LL))(
              g_PolicyManager,
              &v39);
      v15 = 0;
      if ( v14 >= 0 )
      {
        v12 = *v39;
        v13 = v14;
        while ( v15 < (unsigned int)v12 )
        {
          if ( *(_OWORD *)(*((_QWORD *)v39 + 1) + 16LL * v15) == v44 )
          {
            fmtid = PKEY_AudioEngine_SignalProcessingMode_Specific_MixFormat;
            pid = v15 + (a3 == eKeywordDetectorConnector ? 602 : 2);
            v8 = v40;
            goto LABEL_20;
          }
          ++v15;
        }
      }
      refreshed = -2147023728;
      if ( v36 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      goto LABEL_74;
    }
    fmtid = (__int128)PKEY_AudioEngine_MixFormat.fmtid;
    pid = PKEY_AudioEngine_MixFormat.pid;
LABEL_20:
    v46.pid = pid;
    v46.fmtid = (GUID)fmtid;
    if ( v36 )
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v36 + 16LL))(v36, v12, v13);
  }
  refreshed = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 32LL))(v9, 0LL, &v37);
  if ( refreshed < 0 )
  {
LABEL_74:
    v10 = Src;
    goto LABEL_75;
  }
  if ( (*(int (__fastcall **)(__int64, struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v37 + 40LL))(
         v37,
         &v46,
         &pvar) < 0
    || pvar.vt != 65
    || pvar.lVal < 0x12u
    || (pData = pvar.bstrblobVal.pData, pvar.ulVal != *((unsigned __int16 *)pvar.bstrblobVal.pData + 8) + 18LL) )
  {
    PropVariantClear((PROPVARIANT *)&pvar);
    refreshed = CPolicyConfig::RefreshDeviceFormat(v8, a2, a3);
    if ( refreshed < 0 )
      goto LABEL_74;
    refreshed = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v37 + 40LL))(
                  v37,
                  &v46,
                  &pvar);
    if ( refreshed < 0 )
      goto LABEL_74;
    if ( pvar.vt != 65 || !(unsigned int)IsValidWfxBlob(&pvar) )
    {
      refreshed = -2147024809;
      goto LABEL_74;
    }
    pData = pvar.bstrblobVal.pData;
  }
  Src = pData;
  if ( !pData )
    goto LABEL_71;
  v19 = *((_WORD *)pData + 1);
  if ( !v19 )
    goto LABEL_71;
  v20 = *((_DWORD *)pData + 1);
  if ( !v20 )
    goto LABEL_71;
  v21 = *((_DWORD *)pData + 2);
  if ( !v21 )
    goto LABEL_71;
  v22 = *((_WORD *)pData + 6);
  if ( !v22 )
    goto LABEL_71;
  v23 = *((_WORD *)pData + 8);
  if ( v23 > 0x400u )
    goto LABEL_71;
  v24 = *(_WORD *)pData;
  LODWORD(v36) = 65534;
  if ( ((v24 - 1) & 0xFFFD) == 0 )
  {
    if ( !v23
      && (*((unsigned __int16 *)pData + 7) & 0x80000007) == 0
      && v19 <= 2u
      && v21 == (v20 * *((unsigned __int16 *)pData + 7) * (unsigned int)v19) >> 3 )
    {
LABEL_59:
      v25 = v36;
      goto LABEL_60;
    }
    goto LABEL_71;
  }
  v25 = v36;
  if ( (_WORD)v36 != v24 )
    goto LABEL_60;
  if ( v23 < 0x16u )
  {
LABEL_71:
    refreshed = -2004287480;
    goto LABEL_74;
  }
  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3)
    && *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 == *((_QWORD *)pData + 4)
    || *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3)
    && *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 == *((_QWORD *)pData + 4) )
  {
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3)
      && *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 == *((_QWORD *)pData + 4) )
    {
      v26 = *((_WORD *)pData + 7);
      v27 = ((v26 - 8) & 0xFFE7) == 0;
      v22 = *((_WORD *)pData + 6);
    }
    else
    {
      v26 = *((_WORD *)pData + 7);
      v27 = ((v26 - 32) & 0xFFDF) == 0;
      v19 = *((_WORD *)pData + 1);
    }
    if ( !v27 )
      goto LABEL_71;
    v28 = *((_WORD *)pData + 9);
    if ( (_WORD)v42 == v28 || v26 < v28 || v21 != (v20 * v19 * (unsigned int)v26) >> 3 || v22 != v19 * v26 / 8 )
      goto LABEL_71;
    goto LABEL_59;
  }
LABEL_60:
  if ( ((v24 - 1) & 0xFFFD) != 0
    && (v25 != v24
     || (*(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 != *((_QWORD *)pData + 3)
      || *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 != *((_QWORD *)pData + 4))
     && (*(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 != *((_QWORD *)pData + 3)
      || *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 != *((_QWORD *)pData + 4))) )
  {
    goto LABEL_71;
  }
  v29 = v23;
  v30 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v23 + 18LL);
  v31 = v30;
  if ( v30 )
  {
    v32 = v29 + 18;
    v10 = Src;
    memcpy_0(v30, Src, v32);
    refreshed = 0;
  }
  else
  {
    refreshed = -2147024882;
    v10 = Src;
  }
  *v41 = v31;
  if ( refreshed >= 0 )
    goto LABEL_79;
LABEL_75:
  v33 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      33LL,
      &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      (unsigned int)refreshed);
LABEL_79:
    v33 = WPP_GLOBAL_Control;
  }
  if ( v10 )
  {
    CoTaskMemFree(v10);
    v33 = WPP_GLOBAL_Control;
  }
  if ( refreshed < 0
    && v33 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)v33 + 28) & 0x40) != 0
    && *((_BYTE *)v33 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v33 + 2), 32LL, &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, (unsigned int)refreshed);
  }
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)refreshed;
}
