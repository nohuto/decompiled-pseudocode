/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x18004FAD8
 * Callers:
 *     _CPerStreamVolumeAudioSession::CPerStreamVolumeAudioSession_::_1_::dtor$1 @ 0x180039D2C (_CPerStreamVolumeAudioSession--CPerStreamVolumeAudioSession_--_1_--dtor$1.c)
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$1 @ 0x18003A1C4 (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$1.c)
 *     _CAudioStream::_CAudioStream_::_1_::dtor$4 @ 0x18003AB10 (_CAudioStream--_CAudioStream_--_1_--dtor$4.c)
 *     _CAudioStream::_CAudioStream_::_1_::dtor$10 @ 0x18003AB82 (_CAudioStream--_CAudioStream_--_1_--dtor$10.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$4 @ 0x18003AC30 (_CAudioStream--CAudioStream_--_1_--dtor$4.c)
 *     _CDeviceGraphObjectsStore::CDeviceGraphObjectsStore_::_1_::dtor$1 @ 0x18003B11B (_CDeviceGraphObjectsStore--CDeviceGraphObjectsStore_--_1_--dtor$1.c)
 *     _CSaDeviceProxy::RuntimeClassInitialize_::_1_::dtor$3 @ 0x18003B27D (_CSaDeviceProxy--RuntimeClassInitialize_--_1_--dtor$3.c)
 *     _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$5 @ 0x18003B346 (_CBaseStreamGroupProxy--_CBaseStreamGroupProxy_--_1_--dtor$5.c)
 *     _CBaseStreamGroupProxy::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18003B385 (_CBaseStreamGroupProxy--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CAudioDGProcess::CAudioDGProcess_::_1_::dtor$0 @ 0x18003BB4D (_CAudioDGProcess--CAudioDGProcess_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::CDeviceGraphStore_::_1_::dtor$1 @ 0x18003BC2D (_CDeviceGraphStore--CDeviceGraphStore_--_1_--dtor$1.c)
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$1 @ 0x18003BC82 (_CPolicyConfig--CPolicyConfig_--_1_--dtor$1.c)
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$3 @ 0x18003BCA2 (_CPolicyConfig--CPolicyConfig_--_1_--dtor$3.c)
 *     _CAudioResourceManager::CAudioResourceManager_::_1_::dtor$1 @ 0x18003BD07 (_CAudioResourceManager--CAudioResourceManager_--_1_--dtor$1.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$0 @ 0x18003BD29 (_CMonitorManager--CMonitorManager_--_1_--dtor$0.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$2 @ 0x18003BD49 (_CMonitorManager--CMonitorManager_--_1_--dtor$2.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$4 @ 0x18003BD69 (_CMonitorManager--CMonitorManager_--_1_--dtor$4.c)
 *     _CAudioSrv::_CAudioSrv_::_1_::dtor$1 @ 0x180051F75 (_CAudioSrv--_CAudioSrv_--_1_--dtor$1.c)
 *     _CVolumeControlBase::_CVolumeControlBase_::_1_::dtor$0 @ 0x18005664C (_CVolumeControlBase--_CVolumeControlBase_--_1_--dtor$0.c)
 *     _CMuteSoftware::_CMuteSoftware_::_1_::dtor$2 @ 0x1800594A2 (_CMuteSoftware--_CMuteSoftware_--_1_--dtor$2.c)
 *     _CVolumeSoftware::_CVolumeSoftware_::_1_::dtor$2 @ 0x180059559 (_CVolumeSoftware--_CVolumeSoftware_--_1_--dtor$2.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$1 @ 0x1800670D6 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$1.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$3 @ 0x1800670F6 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$3.c)
 *     _CMonitor::CMonitor_::_1_::dtor$0 @ 0x18007ACC3 (_CMonitor--CMonitor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
