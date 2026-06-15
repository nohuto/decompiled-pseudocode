/*
 * XREFs of WPP_SF_dg @ 0x180058F50
 * Callers:
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x1800029A0 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z.c)
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x1800163A0 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x1800257B8 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x18002D5F4 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?UpdateChannelVolumeLevel@CVolumeHardware@@MEAAJI@Z @ 0x180058860 (-UpdateChannelVolumeLevel@CVolumeHardware@@MEAAJI@Z.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18005E2E8 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x18005F6F0 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPo.c)
 *     ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x18006AF28 (-FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z.c)
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x18006C340 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x18007F77C (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_dg(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return EtwTraceMessage(a1, 43LL, a3, a2, &v5, 4LL, (__int64 *)va);
}
