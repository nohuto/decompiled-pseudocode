/*
 * XREFs of _TlgKeywordOn @ 0x180004A28
 * Callers:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x180004AAC (Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE.c)
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x180007F90 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180015860 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x180017464 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018680 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x18001A1E0 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001EF80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 *     ?Fire@AudioSrvVolumeTelemetrySessionVolume@@EEAAX_KI@Z @ 0x18002D440 (-Fire@AudioSrvVolumeTelemetrySessionVolume@@EEAAX_KI@Z.c)
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18002DF50 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x1800308D0 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 *     ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@@Z @ 0x1800356B0 (-SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@@Z.c)
 *     ?Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z @ 0x180051AC0 (-Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x180051BE8 (-LogProductionAssert@@YAX_KPEBG@Z.c)
 *     ?ReportHang@CWatchdogTimer@@AEAAXXZ @ 0x180071E5C (-ReportHang@CWatchdogTimer@@AEAAXXZ.c)
 *     ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800848E0 (-OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N6@Z @ 0x18008BEB8 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK @ 0x18008E77C (Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  BOOLEAN v2; // r8

  v2 = 0;
  if ( !keyword
    || (keyword & *((_QWORD *)hProvider + 2)) != 0
    && (keyword & *((_QWORD *)hProvider + 3)) == *((_QWORD *)hProvider + 3) )
  {
    return 1;
  }
  return v2;
}
