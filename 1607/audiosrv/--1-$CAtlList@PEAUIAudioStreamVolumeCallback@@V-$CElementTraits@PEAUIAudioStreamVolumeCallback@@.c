/*
 * XREFs of ??1?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAA@XZ @ 0x1800503EC
 * Callers:
 *     _CAudioStream::_CAudioStream_::_1_::dtor$11 @ 0x18003AB95 (_CAudioStream--_CAudioStream_--_1_--dtor$11.c)
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$2 @ 0x18003BC92 (_CPolicyConfig--CPolicyConfig_--_1_--dtor$2.c)
 *     _CAudioSrv::_CAudioSrv_::_1_::dtor$2 @ 0x180051F85 (_CAudioSrv--_CAudioSrv_--_1_--dtor$2.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$2 @ 0x1800670E6 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$2.c)
 *     _CMonitor::CMonitor_::_1_::dtor$20 @ 0x18007AE27 (_CMonitor--CMonitor_--_1_--dtor$20.c)
 *     _CMonitor::CMonitor_::_1_::dtor$21 @ 0x18007AE3A (_CMonitor--CMonitor_--_1_--dtor$21.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::~CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>(
        __int64 a1)
{
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll(a1);
}
