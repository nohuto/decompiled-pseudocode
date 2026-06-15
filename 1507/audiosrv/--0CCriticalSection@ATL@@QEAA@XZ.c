/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180013560
 * Callers:
 *     _dynamic_initializer_for__g_CritsSaProvider__ @ 0x180001050 (_dynamic_initializer_for__g_CritsSaProvider__.c)
 *     _dynamic_initializer_for__g_SessionManagerProviderLock__ @ 0x1800010A0 (_dynamic_initializer_for__g_SessionManagerProviderLock__.c)
 *     _dynamic_initializer_for__g_csVadList__ @ 0x1800010D0 (_dynamic_initializer_for__g_csVadList__.c)
 *     _dynamic_initializer_for__g_csApplicationManager__ @ 0x180001110 (_dynamic_initializer_for__g_csApplicationManager__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x180001160 (PickerHostContextManager--_dynamic_initializer_for__s_csPickerHostContextList__.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x18000D4F0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAE.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x180010090 (--0CAudioSession@@IEAA@XZ.c)
 *     ??0CProcess@@IEAA@XZ @ 0x180011F58 (--0CProcess@@IEAA@XZ.c)
 *     ??0CApplication@@IEAA@K@Z @ 0x1800126D4 (--0CApplication@@IEAA@K@Z.c)
 *     ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x1800137F0 (--0CPerStreamVolumeAudioSession@@QEAA@XZ.c)
 *     ??0CVADServer@@QEAA@XZ @ 0x180016DF0 (--0CVADServer@@QEAA@XZ.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x1800194B4 (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180019EA0 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     ??0CAudioStream@@QEAA@_N00K00W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18001E2A0 (--0CAudioStream@@QEAA@_N00K00W4SYSTEM_AUDIO_STREAM_TYPE@@@Z.c)
 *     ??0CSaProvider@@QEAA@XZ @ 0x18002E2E8 (--0CSaProvider@@QEAA@XZ.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x1800389A0 (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??0CAudioDGProcess@@QEAA@XZ @ 0x180039A20 (--0CAudioDGProcess@@QEAA@XZ.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003A328 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ??0CAudioSrv@@QEAA@XZ @ 0x18003ACA0 (--0CAudioSrv@@QEAA@XZ.c)
 *     ??0CVolumeStrip@@QEAA@XZ @ 0x18003D5CC (--0CVolumeStrip@@QEAA@XZ.c)
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18003D6A0 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ??0CApplicationManager@@IEAA@XZ @ 0x18003F9DC (--0CApplicationManager@@IEAA@XZ.c)
 *     ??0CMonitorManager@@QEAA@XZ @ 0x1800401C8 (--0CMonitorManager@@QEAA@XZ.c)
 *     ??0CHostedAppInteractivityManager@@QEAA@XZ @ 0x180041184 (--0CHostedAppInteractivityManager@@QEAA@XZ.c)
 *     ??0AudioEffectsWatcherFactory@@QEAA@XZ @ 0x18004125C (--0AudioEffectsWatcherFactory@@QEAA@XZ.c)
 *     ??0CDuckingManager@@AEAA@PEAUIAudioSessionManagerProviderInfo@@@Z @ 0x1800417D4 (--0CDuckingManager@@AEAA@PEAUIAudioSessionManagerProviderInfo@@@Z.c)
 *     ??0CStreamClassPolicyGainsWrapper@@QEAA@AEBV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@@Z @ 0x180068488 (--0CStreamClassPolicyGainsWrapper@@QEAA@AEBV-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTrait.c)
 *     ??0CSaDeviceInstance@@IEAA@PEBGW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HU_GUID@@K_KPEAJ@Z @ 0x18007365C (--0CSaDeviceInstance@@IEAA@PEBGW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x18007EBE0 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 *     ??0CMonitor@@QEAA@XZ @ 0x180094190 (--0CMonitor@@QEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
