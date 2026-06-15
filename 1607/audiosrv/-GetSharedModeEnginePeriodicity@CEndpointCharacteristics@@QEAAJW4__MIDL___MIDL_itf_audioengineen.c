/*
 * XREFs of ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18001B5C0
 * Callers:
 *     AudioServerGetDevicePeriod @ 0x1800041A0 (AudioServerGetDevicePeriod.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x18001BE80 (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audio.c)
 *     ??$GetDeviceFormatInternal@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001C378 (--$GetDeviceFormatInternal@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001EF80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 *     _lambda_ea783823a3a088a32542d9fbc7fb427f_::operator() @ 0x180051328 (_lambda_ea783823a3a088a32542d9fbc7fb427f_--operator().c)
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180067B44 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x180067EC0 (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180072670 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800731C0 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x180078130 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180024740 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
        __int64 a1,
        int a2,
        const struct tWAVEFORMATEX *a3,
        _QWORD *a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  __int64 *v10; // r14
  int v11; // edi
  __int64 i; // rsi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // r13d
  __int64 v17; // r15
  __int64 v18; // r12
  int v20; // eax
  char v21; // [rsp+20h] [rbp-68h]
  const struct tWAVEFORMATEX *v22; // [rsp+28h] [rbp-60h]

  v22 = a3;
  if ( a2 == 3 )
    v10 = (__int64 *)(a1 + 416);
  else
    v10 = (__int64 *)(a1 + 408);
  v21 = 0;
  v11 = 0;
  for ( i = 0LL; ; i += 8LL )
  {
    v13 = *v10;
    if ( v11 >= *(_DWORD *)(*v10 + 8) )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          12LL,
          &WPP_3dded2e6bf653ecbc334b4283f1211e8_Traceguids,
          (unsigned int)(v21 != 0) - 2005139366);
      }
      return 2290679816LL;
    }
    if ( i < 0 || v11 >= *(_DWORD *)(v13 + 8) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x180044A1FLL);
    }
    v14 = *(_QWORD *)(i + *(_QWORD *)v13);
    v15 = *(_QWORD *)v14 - *a4;
    if ( *(_QWORD *)v14 == *a4 )
      v15 = *(_QWORD *)(v14 + 8) - a4[1];
    if ( !v15 )
    {
      v16 = 0;
      v21 = 1;
      if ( *(int *)(v14 + 24) > 0 )
        break;
    }
LABEL_23:
    ++v11;
  }
  v17 = 0LL;
  while ( 1 )
  {
    if ( v17 < 0 || v16 >= *(_DWORD *)(v14 + 24) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x180044A09LL);
    }
    v18 = *(_QWORD *)(v17 + *(_QWORD *)(v14 + 16));
    if ( (unsigned int)CompareWaveFormat(a3, *(const struct tWAVEFORMATEX **)v18) )
      break;
    a3 = v22;
    ++v16;
    v17 += 8LL;
    if ( v16 >= *(_DWORD *)(v14 + 24) )
      goto LABEL_23;
  }
  if ( a6 )
    *a6 = *(_DWORD *)(v18 + 12);
  if ( a7 )
    *a7 = *(_DWORD *)(v18 + 8);
  if ( a8 )
    *a8 = *(_DWORD *)(v18 + 16);
  if ( a9 )
  {
    if ( a5 )
      v20 = *(_DWORD *)(v18 + 24);
    else
      v20 = *(_DWORD *)(v18 + 20);
    *a9 = v20;
  }
  return 0LL;
}
