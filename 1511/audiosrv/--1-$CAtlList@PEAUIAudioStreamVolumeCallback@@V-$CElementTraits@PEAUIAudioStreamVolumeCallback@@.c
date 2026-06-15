/*
 * XREFs of ??1?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAA@XZ @ 0x180065B2C
 * Callers:
 *     _CAudioStream::_CAudioStream_::_1_::dtor$8 @ 0x18004B1CF (_CAudioStream--_CAudioStream_--_1_--dtor$8.c)
 *     _CMonitor::CMonitor_::_1_::dtor$20 @ 0x180091C73 (_CMonitor--CMonitor_--_1_--dtor$20.c)
 *     _CMonitor::CMonitor_::_1_::dtor$21 @ 0x180091C86 (_CMonitor--CMonitor_--_1_--dtor$21.c)
 *     _TSSession::_TSSession_::_1_::dtor$1 @ 0x18009BC1A (_TSSession--_TSSession_--_1_--dtor$1.c)
 *     _TSSession::_TSSession_::_1_::dtor$3 @ 0x18009BC3D (_TSSession--_TSSession_--_1_--dtor$3.c)
 *     _CApplicationManager::_CApplicationManager_::_1_::dtor$2 @ 0x18009E45F (_CApplicationManager--_CApplicationManager_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::~CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>(
        __int64 a1)
{
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll(a1);
}
