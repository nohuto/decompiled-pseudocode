/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180012D40
 * Callers:
 *     _dynamic_initializer_for__g_SessionManagerProviderLock__ @ 0x180001090 (_dynamic_initializer_for__g_SessionManagerProviderLock__.c)
 *     _dynamic_initializer_for__g_csVadList__ @ 0x1800010C0 (_dynamic_initializer_for__g_csVadList__.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x180003050 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 *     ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x180008B80 (--0CPerStreamVolumeAudioSession@@QEAA@XZ.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x18000FA94 (--0CAudioSessionManager@@QEAA@XZ.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x1800102F0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180012110 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x180014FD0 (--0CAudioSession@@IEAA@XZ.c)
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180017E40 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ??0CVolumeStrip@@QEAA@XZ @ 0x180018494 (--0CVolumeStrip@@QEAA@XZ.c)
 *     ??0CAudioStream@@QEAA@_N00KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001@@0W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x180019EF0 (--0CAudioStream@@QEAA@_N00KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001@@0W4SYSTEM_AUDIO_S.c)
 *     ??0CVolumeControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x180026E30 (--0CVolumeControlBase@@QEAA@PEAVCVolumeStrip@@@Z.c)
 *     ??0CAudioSrv@@QEAA@XZ @ 0x180030E64 (--0CAudioSrv@@QEAA@XZ.c)
 *     ??0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z @ 0x180031338 (--0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x180032E20 (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??0AudioEffectsWatcherFactory@@QEAA@XZ @ 0x18003301C (--0AudioEffectsWatcherFactory@@QEAA@XZ.c)
 *     ??0CMonitorManager@@QEAA@XZ @ 0x18003306C (--0CMonitorManager@@QEAA@XZ.c)
 *     ??0CVolumeProvider@@QEAA@XZ @ 0x180034088 (--0CVolumeProvider@@QEAA@XZ.c)
 *     ??0CServerAudioSessionControl@@IEAA@XZ @ 0x18004F4CC (--0CServerAudioSessionControl@@IEAA@XZ.c)
 *     ??0CVolumeSoftware@@QEAA@PEAVCVolumeStrip@@@Z @ 0x18005929C (--0CVolumeSoftware@@QEAA@PEAVCVolumeStrip@@@Z.c)
 *     ??0CMonitor@@QEAA@XZ @ 0x18007AB74 (--0CMonitor@@QEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
