/*
 * XREFs of WPP_SF_dD @ 0x18007067C
 * Callers:
 *     ?IsProcessAllowed@@YAHKPEBG@Z @ 0x18000D670 (-IsProcessAllowed@@YAHKPEBG@Z.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180017008 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001CA10 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HH.c)
 *     ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x180056C00 (-GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z.c)
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x18005BC20 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005E2E8 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z @ 0x180062790 (-Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x18006A298 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x18006AF28 (-FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z.c)
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x18006C340 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 *     ?GetEndpointBufferSize@CVADServer@@UEAAJPEAIPEAM@Z @ 0x180071300 (-GetEndpointBufferSize@CVADServer@@UEAAJPEAIPEAM@Z.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z @ 0x18007C8A0 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUIMMDevice@@0@Z.c)
 *     ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x180081194 (-OnPowerStateChanged@CMonitor@@IEAAXE@Z.c)
 *     OnServiceShutdown @ 0x180082870 (OnServiceShutdown.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_dD(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return EtwTraceMessage(a1, 43LL, a3, a2, &v5, 4LL, (__int64 *)va);
}
