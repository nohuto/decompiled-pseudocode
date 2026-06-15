/*
 * XREFs of ??1?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAA@XZ @ 0x180067550
 * Callers:
 *     _CAudioStream::_CAudioStream_::_1_::dtor$8 @ 0x180046E7F (_CAudioStream--_CAudioStream_--_1_--dtor$8.c)
 *     _CSaDeviceInstance::CSaDeviceInstance_::_1_::dtor$0 @ 0x180073759 (_CSaDeviceInstance--CSaDeviceInstance_--_1_--dtor$0.c)
 *     _CSaDeviceInstance::_CSaDeviceInstance_::_1_::dtor$0 @ 0x180073978 (_CSaDeviceInstance--_CSaDeviceInstance_--_1_--dtor$0.c)
 *     _CMonitor::CMonitor_::_1_::dtor$20 @ 0x180094443 (_CMonitor--CMonitor_--_1_--dtor$20.c)
 *     _CMonitor::CMonitor_::_1_::dtor$21 @ 0x180094456 (_CMonitor--CMonitor_--_1_--dtor$21.c)
 *     _TSSession::_TSSession_::_1_::dtor$3 @ 0x18009EDC1 (_TSSession--_TSSession_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::~CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>(
        __int64 a1)
{
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll(a1);
}
