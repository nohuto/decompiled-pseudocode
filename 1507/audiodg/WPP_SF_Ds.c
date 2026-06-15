/*
 * XREFs of WPP_SF_Ds @ 0x1400297DC
 * Callers:
 *     ?GetProtectedOutputController@CSystemAudioDeviceOffload@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x140001830 (-GetProtectedOutputController@CSystemAudioDeviceOffload@@UEAAJIPEAPEAUIAudioProtectedOutputContr.c)
 *     ?CreateStream@CSystemAudioDeviceOffload@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400019F0 (-CreateStream@CSystemAudioDeviceOffload@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVI.c)
 *     ?Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140001C10 (-Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCal.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140010B68 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?GetOta@CStreamInstance@@QEAAJIPEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400295C4 (-GetOta@CStreamInstance@@QEAAJIPEAPEAUIAudioVirtualProtectedOutput@@@Z.c)
 *     ?AddStreamToList@CSystemAudioDeviceBase@@IEAAJPEAVCStreamInstance@@PEAH@Z @ 0x1400298C8 (-AddStreamToList@CSystemAudioDeviceBase@@IEAAJPEAVCStreamInstance@@PEAH@Z.c)
 *     ?RemoveStreamFromList@CSystemAudioDeviceBase@@IEAAJPEAVCStreamInstance@@PEAH@Z @ 0x140029C50 (-RemoveStreamFromList@CSystemAudioDeviceBase@@IEAAJPEAVCStreamInstance@@PEAH@Z.c)
 *     ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002B000 (-CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DE.c)
 *     ?GetFormat@CSystemAudioDeviceExclusive@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14002B2B0 (-GetFormat@CSystemAudioDeviceExclusive@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetLatency@CSystemAudioDeviceExclusive@@UEAAJ_KPEA_J@Z @ 0x14002B370 (-GetLatency@CSystemAudioDeviceExclusive@@UEAAJ_KPEA_J@Z.c)
 *     ?GetProtectedOutputController@CSystemAudioDeviceExclusive@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x14002B430 (-GetProtectedOutputController@CSystemAudioDeviceExclusive@@UEAAJIPEAPEAUIAudioProtectedOutputCon.c)
 *     ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002B520 (-Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 *     ?CreateStream@CSystemAudioDeviceShared@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002C340 (-CreateStream@CSystemAudioDeviceShared@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVIC.c)
 *     ?DestroyStream@CSystemAudioDeviceShared@@UEAAJ_K@Z @ 0x14002C520 (-DestroyStream@CSystemAudioDeviceShared@@UEAAJ_K@Z.c)
 *     ?GetActiveRenderStreamCount@CSystemAudioDeviceShared@@UEAAJPEAI@Z @ 0x14002C850 (-GetActiveRenderStreamCount@CSystemAudioDeviceShared@@UEAAJPEAI@Z.c)
 *     ?GetFormat@CSystemAudioDeviceShared@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14002C8E0 (-GetFormat@CSystemAudioDeviceShared@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetLatency@CSystemAudioDeviceShared@@UEAAJ_KPEA_J@Z @ 0x14002C9B0 (-GetLatency@CSystemAudioDeviceShared@@UEAAJ_KPEA_J@Z.c)
 *     ?GetProtectedOutputController@CSystemAudioDeviceShared@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x14002CA80 (-GetProtectedOutputController@CSystemAudioDeviceShared@@UEAAJIPEAPEAUIAudioProtectedOutputContro.c)
 *     ?GetStreamPlaybackProtectionApoPrivate@CSystemAudioDeviceShared@@UEAAJ_KPEAPEAUIAudioProcessingObject@@@Z @ 0x14002CB70 (-GetStreamPlaybackProtectionApoPrivate@CSystemAudioDeviceShared@@UEAAJ_KPEAPEAUIAudioProcessingO.c)
 *     ?Initialize@CSystemAudioDeviceShared@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002CC40 (-Initialize@CSystemAudioDeviceShared@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCall.c)
 *     ?InnerInitializeAPO@CSystemAudioDeviceShared@@MEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x14002CE10 (-InnerInitializeAPO@CSystemAudioDeviceShared@@MEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?NotifyStreamSuspensionStateChanged@CSystemAudioDeviceShared@@UEAAJH@Z @ 0x14002CF20 (-NotifyStreamSuspensionStateChanged@CSystemAudioDeviceShared@@UEAAJH@Z.c)
 *     ?PumpPaused@CSystemAudioDeviceShared@@UEAAJXZ @ 0x14002D0C0 (-PumpPaused@CSystemAudioDeviceShared@@UEAAJXZ.c)
 *     ?StartStream@CSystemAudioDeviceShared@@UEAAJ_K@Z @ 0x14002D370 (-StartStream@CSystemAudioDeviceShared@@UEAAJ_K@Z.c)
 *     ?StopStream@CSystemAudioDeviceShared@@UEAAJ_K@Z @ 0x14002D690 (-StopStream@CSystemAudioDeviceShared@@UEAAJ_K@Z.c)
 *     ?GetFormat@CSystemAudioDeviceOffload@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14002E8A0 (-GetFormat@CSystemAudioDeviceOffload@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetLatency@CSystemAudioDeviceOffload@@UEAAJ_KPEA_J@Z @ 0x14002E980 (-GetLatency@CSystemAudioDeviceOffload@@UEAAJ_KPEA_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Ds(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r9
  int v7; // [rsp+78h] [rbp+20h] BYREF

  v7 = a4;
  if ( a5 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_BYTE *)(a5 + v5) );
  }
  return EtwTraceMessage(a1, 43LL, a3, a2, &v7);
}
