/*
 * XREFs of ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x18006A298
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180006E00 (AudioServerIsFormatSupported.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180009F10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180022B30 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001A7C0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18006772C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x18006C018 (-IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MID.c)
 *     WPP_SF_dD @ 0x18007067C (WPP_SF_dD.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x180071844 (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x180088F50 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DeriveOffloadConnectorFormatFromStreamFormat(
        struct CEndpointCharacteristics *a1,
        struct tWAVEFORMATEX *Src,
        struct _GUID *a3,
        struct _GUID *a4,
        struct _GUID *a5,
        struct tWAVEFORMATEX **a6)
{
  struct tWAVEFORMATEX *v9; // rbx
  struct tWAVEFORMATEX **v10; // r12
  struct tWAVEFORMATEX **v11; // rdi
  int v12; // eax
  struct tWAVEFORMATEX *v13; // rsi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v14; // edx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v15; // r8d
  int v16; // r14d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 nChannels; // edx
  DWORD nSamplesPerSec; // ecx
  unsigned int v19; // r14d
  LPVOID pv[4]; // [rsp+30h] [rbp-30h] BYREF
  struct _GUID v22; // [rsp+50h] [rbp-10h] BYREF
  struct tWAVEFORMATEX *Srca; // [rsp+A0h] [rbp+40h] BYREF
  struct tWAVEFORMATEX *v24; // [rsp+B0h] [rbp+50h] BYREF

  pv[1] = (LPVOID)-2LL;
  pv[2] = 0LL;
  a5 = 0LL;
  Srca = 0LL;
  v9 = 0LL;
  v24 = 0LL;
  pv[0] = 0LL;
  v10 = a6;
  *a6 = 0LL;
  v11 = (struct tWAVEFORMATEX **)*((_QWORD *)a1 + 2);
  a6 = v11;
  (*(void (__fastcall **)(struct tWAVEFORMATEX **))&(*v11)->nAvgBytesPerSec)(v11);
  v12 = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)pv);
  v13 = (struct tWAVEFORMATEX *)pv[0];
  if ( v12 < 0 )
    goto LABEL_19;
  if ( (int)CloneWaveFormat(Src, &v24) < 0 )
    goto LABEL_18;
  v9 = v24;
  v16 = IsFormatSupportedByHwAudioEngine((struct IMMDevice *)v11, v14, v24, 0LL);
  if ( v16 )
  {
    if ( (*(int (__fastcall **)(struct tWAVEFORMATEX **, struct _GUID **))&(*v11)[2].nSamplesPerSec)(v11, &a5) < 0
      || (int)CEndpointCharacteristics::GetOffloadDeviceFormat(a1, &Srca) < 0 )
    {
      goto LABEL_19;
    }
    if ( (int)CloneWaveFormat(Srca, &v24) >= 0 )
    {
      nChannels = Srca->nChannels;
      if ( v13->nChannels == (_WORD)nChannels )
      {
        v9 = v24;
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          WPP_SF_dD(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids);
        }
        nSamplesPerSec = v13->nSamplesPerSec;
        v9 = v24;
        v24->nSamplesPerSec = nSamplesPerSec;
        v9->nAvgBytesPerSec = nSamplesPerSec * v9->nBlockAlign;
        v16 = IsFormatSupportedByHwAudioEngine((struct IMMDevice *)v11, nChannels, v9, 0LL);
      }
      goto LABEL_14;
    }
LABEL_18:
    v9 = v24;
    goto LABEL_19;
  }
LABEL_14:
  if ( v16 >= 0 )
  {
    v22 = *a4;
    if ( IsOffloadConnectorFormatSupportedForMixFormat(a1, &v22, v15, v9, v9) >= 0 )
    {
      v22 = *a4;
      if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(a1, &v22, eOffloadConnector, v9, v13, 0LL) )
        CloneWaveFormat(v9, v10);
    }
  }
LABEL_19:
  v19 = *v10 == 0LL ? 0x88890008 : 0;
  CoTaskMemFree(v13);
  CoTaskMemFree(v9);
  CoTaskMemFree(Srca);
  Srca = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(struct tWAVEFORMATEX **))&(*v11)->cbSize)(v11);
  CoTaskMemFree(a5);
  a5 = 0LL;
  CoTaskMemFree(0LL);
  return v19;
}
