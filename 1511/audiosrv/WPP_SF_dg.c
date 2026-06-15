/*
 * XREFs of WPP_SF_dg @ 0x18006F8A4
 * Callers:
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18000E5B0 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x18001CBA0 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x1800367D0 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18003AAF4 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x18003ABD0 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?UpdateChannelVolumeLevel@CVolumeHardware@@MEAAJI@Z @ 0x18006F050 (-UpdateChannelVolumeLevel@CVolumeHardware@@MEAAJI@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x180074DC4 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x180077050 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPo.c)
 *     ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x1800821BC (-FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x180096C4C (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_dg(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, a3, a2, &v5);
}
