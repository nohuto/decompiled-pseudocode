/*
 * XREFs of WPP_SF_qD @ 0x180048AE8
 * Callers:
 *     AUDIOSERVER_rundown @ 0x180002AF0 (AUDIOSERVER_rundown.c)
 *     ?DeleteVolumeClientNotification@CVolumeStrip@@QEAAJK@Z @ 0x18000F40C (-DeleteVolumeClientNotification@CVolumeStrip@@QEAAJK@Z.c)
 *     ?AddVolumeClientNotification@CVolumeStrip@@QEAAJK@Z @ 0x18000F45C (-AddVolumeClientNotification@CVolumeStrip@@QEAAJK@Z.c)
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x18000F5E0 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ?AddRef@CVolumeStrip@@UEAAKXZ @ 0x18000F650 (-AddRef@CVolumeStrip@@UEAAKXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180014FF0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x1800157B0 (-OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z.c)
 *     ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180015BA0 (-OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@.c)
 *     ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x180015D90 (-OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z.c)
 *     ?AddRef@CAudioSessionManager@@UEAAKXZ @ 0x1800162C0 (-AddRef@CAudioSessionManager@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180016770 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x18001CD00 (-CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18001FA60 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x18001FB90 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ?AddClientReference@CAudioStream@@UEAAKXZ @ 0x180020580 (-AddClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?SetAllVolumes@CVADServer@@UEAAJIPEBM@Z @ 0x180021E70 (-SetAllVolumes@CVADServer@@UEAAJIPEBM@Z.c)
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180022060 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x180024BE0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180026EA0 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x18003ABD0 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1800416D0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180041F08 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?GetMeteringChannelCount@CMeterControlBase@@UEAAJPEAI@Z @ 0x18006BA80 (-GetMeteringChannelCount@CMeterControlBase@@UEAAJPEAI@Z.c)
 *     ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18006C0F0 (-InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?SetMuteValue@CMuteHardware@@UEAAJH@Z @ 0x18006C9F0 (-SetMuteValue@CMuteHardware@@UEAAJH@Z.c)
 *     ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x18006CA90 (-SetMuteValue@CMuteSoftware@@UEAAJH@Z.c)
 *     ?GetChannelCount@CVolumeControlBase@@UEAAJPEAI@Z @ 0x18006CF00 (-GetChannelCount@CVolumeControlBase@@UEAAJPEAI@Z.c)
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18006D7F0 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x180078190 (-OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@.c)
 *     ?OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x180078400 (-OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800785E0 (-OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x18007A0D0 (-AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 *     ?DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x18007A390 (-DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x18007A7B0 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x18007B0F0 (-NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z.c)
 *     ?NotifySessionTerminate@CAudioSessionManager@@QEAAJK@Z @ 0x18007B214 (-NotifySessionTerminate@CAudioSessionManager@@QEAAJK@Z.c)
 *     ?GetStreamChannelVolume@CAudioStream@@QEAAJIPEAM@Z @ 0x18007D31C (-GetStreamChannelVolume@CAudioStream@@QEAAJIPEAM@Z.c)
 *     ?GetChannelVolume@CVADServer@@UEAAJIPEAM@Z @ 0x180087B30 (-GetChannelVolume@CVADServer@@UEAAJIPEAM@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x180095A64 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?ScheduleMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x180095D40 (-ScheduleMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x180096C4C (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 *     ?OnDeviceDescriptionChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x180098228 (-OnDeviceDescriptionChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnDeviceIconChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x1800983D4 (-OnDeviceIconChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x180098664 (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qD(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
