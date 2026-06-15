/*
 * XREFs of ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x180081AB4
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180010180 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     AudioServerIsFormatSupported @ 0x180019680 (AudioServerIsFormatSupported.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180022650 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x1800210E0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetOffloadDeviceFormat@@YAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800680D4 (-GetOffloadDeviceFormat@@YAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_Dd @ 0x18006F85C (WPP_SF_Dd.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18007F8A0 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?IsConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x180083B54 (-IsConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MID.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x1800880EC (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DeriveOffloadConnectorFormatFromStreamFormat(
        struct IAudioMediaType *a1,
        struct tWAVEFORMATEX *Src,
        struct _GUID *a3,
        struct _GUID *a4,
        struct _GUID *a5,
        struct tWAVEFORMATEX **a6)
{
  struct tWAVEFORMATEX *v8; // rbx
  struct tWAVEFORMATEX **v9; // r12
  struct tWAVEFORMATEX **lpVtbl; // rdi
  int v11; // eax
  struct tWAVEFORMATEX *v12; // rsi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v13; // edx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v14; // r8d
  int v15; // r15d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 nChannels; // edx
  DWORD nSamplesPerSec; // ecx
  struct _GUID *v18; // r14
  unsigned int v19; // r14d
  LPVOID pv[4]; // [rsp+30h] [rbp-30h] BYREF
  struct _GUID v22; // [rsp+50h] [rbp-10h] BYREF
  struct tWAVEFORMATEX *Srca; // [rsp+A0h] [rbp+40h] BYREF
  struct tWAVEFORMATEX *v24; // [rsp+B0h] [rbp+50h] BYREF
  struct _GUID *v25; // [rsp+B8h] [rbp+58h]

  v25 = a4;
  pv[1] = (LPVOID)-2LL;
  pv[2] = 0LL;
  a5 = 0LL;
  Srca = 0LL;
  v8 = 0LL;
  v24 = 0LL;
  pv[0] = 0LL;
  v9 = a6;
  *a6 = 0LL;
  lpVtbl = (struct tWAVEFORMATEX **)a1[2].lpVtbl;
  a6 = lpVtbl;
  (*(void (__fastcall **)(struct tWAVEFORMATEX **))&(*lpVtbl)->nAvgBytesPerSec)(lpVtbl);
  v11 = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)pv);
  v12 = (struct tWAVEFORMATEX *)pv[0];
  if ( v11 < 0 )
    goto LABEL_19;
  if ( (int)CloneWaveFormat(Src, &v24) < 0 )
    goto LABEL_18;
  v8 = v24;
  v15 = IsFormatSupportedByHwAudioEngine((struct IMMDevice *)lpVtbl, v13, v24, 0LL);
  if ( v15 )
  {
    if ( (*(int (__fastcall **)(struct tWAVEFORMATEX **, struct _GUID **))&(*lpVtbl)[2].nSamplesPerSec)(lpVtbl, &a5) < 0
      || (int)GetOffloadDeviceFormat((const unsigned __int16 *)a5, &Srca) < 0 )
    {
      goto LABEL_19;
    }
    if ( (int)CloneWaveFormat(Srca, &v24) >= 0 )
    {
      nChannels = Srca->nChannels;
      if ( v12->nChannels == (_WORD)nChannels )
      {
        v8 = v24;
      }
      else
      {
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          WPP_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x1Bu,
            (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
            v12->nChannels);
        }
        nSamplesPerSec = v12->nSamplesPerSec;
        v8 = v24;
        v24->nSamplesPerSec = nSamplesPerSec;
        v8->nAvgBytesPerSec = nSamplesPerSec * v8->nBlockAlign;
        v15 = IsFormatSupportedByHwAudioEngine((struct IMMDevice *)lpVtbl, nChannels, v8, 0LL);
      }
      goto LABEL_14;
    }
LABEL_18:
    v8 = v24;
    goto LABEL_19;
  }
LABEL_14:
  if ( v15 >= 0 )
  {
    v18 = v25;
    v22 = *v25;
    if ( IsConnectorFormatSupportedForMixFormat((struct CEndpointCharacteristics *)a1, &v22, v14, v8, v8) >= 0 )
    {
      v22 = *v18;
      if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(a1, &v22, eOffloadConnector, v8, v12, 0LL) )
        CloneWaveFormat(v8, v9);
    }
  }
LABEL_19:
  v19 = *v9 == 0LL ? 0x88890008 : 0;
  CoTaskMemFree(v12);
  CoTaskMemFree(v8);
  CoTaskMemFree(Srca);
  Srca = 0LL;
  if ( lpVtbl )
    (*(void (__fastcall **)(struct tWAVEFORMATEX **))&(*lpVtbl)->cbSize)(lpVtbl);
  CoTaskMemFree(a5);
  a5 = 0LL;
  CoTaskMemFree(0LL);
  return v19;
}
