/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180019650
 * Callers:
 *     _dynamic_initializer_for__g_SessionManagerProviderLock__ @ 0x180001080 (_dynamic_initializer_for__g_SessionManagerProviderLock__.c)
 *     _dynamic_initializer_for__g_csVadList__ @ 0x1800010B0 (_dynamic_initializer_for__g_csVadList__.c)
 *     _dynamic_initializer_for__g_csApplicationManager__ @ 0x1800010F0 (_dynamic_initializer_for__g_csApplicationManager__.c)
 *     PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x180001140 (PickerHostContextManager--_dynamic_initializer_for__s_csPickerHostContextList__.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x1800167C4 (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180016FD0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180017B70 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ??0CApplication@@IEAA@K@Z @ 0x18001C434 (--0CApplication@@IEAA@K@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180022650 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x180027C70 (--0CAudioSession@@IEAA@XZ.c)
 *     ??0CProcess@@IEAA@XZ @ 0x180029F78 (--0CProcess@@IEAA@XZ.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x18002A9E0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAE.c)
 *     ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x1800357E0 (--0CPerStreamVolumeAudioSession@@QEAA@XZ.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003B888 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ??0CAudioSrv@@QEAA@XZ @ 0x18003C450 (--0CAudioSrv@@QEAA@XZ.c)
 *     ??0CMonitorManager@@QEAA@XZ @ 0x18003C7FC (--0CMonitorManager@@QEAA@XZ.c)
 *     ??0CDuckingManager@@AEAA@PEAUIAudioSessionManagerProviderInfo@@@Z @ 0x18003E41C (--0CDuckingManager@@AEAA@PEAUIAudioSessionManagerProviderInfo@@@Z.c)
 *     ??0CApplicationManager@@IEAA@XZ @ 0x18003F3EC (--0CApplicationManager@@IEAA@XZ.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x18004320C (--0CPolicyConfig@@QEAA@XZ.c)
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180043950 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ??0CVolumeStrip@@QEAA@XZ @ 0x180043EC0 (--0CVolumeStrip@@QEAA@XZ.c)
 *     ??0CAudioDGProcess@@QEAA@XZ @ 0x1800458EC (--0CAudioDGProcess@@QEAA@XZ.c)
 *     ??0CHostedAppInteractivityManager@@QEAA@XZ @ 0x180045A30 (--0CHostedAppInteractivityManager@@QEAA@XZ.c)
 *     ??0AudioEffectsWatcherFactory@@QEAA@XZ @ 0x180045A80 (--0AudioEffectsWatcherFactory@@QEAA@XZ.c)
 *     ??0CServerAudioSessionControl@@IEAA@XZ @ 0x180064704 (--0CServerAudioSessionControl@@IEAA@XZ.c)
 *     ??0CStreamClassPolicyGainsWrapper@@QEAA@AEBV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@@Z @ 0x180066AC8 (--0CStreamClassPolicyGainsWrapper@@QEAA@AEBV-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTrait.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x180079E00 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 *     ??0CMonitor@@QEAA@XZ @ 0x1800919C0 (--0CMonitor@@QEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
