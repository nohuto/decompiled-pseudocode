/*
 * XREFs of ??1CUnknown@@UEAA@XZ @ 0x180048D74
 * Callers:
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$0 @ 0x18004A845 (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$0.c)
 *     _CAudioStream::_CAudioStream_::_1_::dtor$0 @ 0x18004B140 (_CAudioStream--_CAudioStream_--_1_--dtor$0.c)
 *     _CProcess::_CProcess_::_1_::dtor$0 @ 0x18004B516 (_CProcess--_CProcess_--_1_--dtor$0.c)
 *     _CProcess::CProcess_::_1_::dtor$0 @ 0x18004B5CA (_CProcess--CProcess_--_1_--dtor$0.c)
 *     _CServerAudioSessionControl::CServerAudioSessionControl_::_1_::dtor$0 @ 0x18006478D (_CServerAudioSessionControl--CServerAudioSessionControl_--_1_--dtor$0.c)
 *     _CWindowsPolicyManager::_CWindowsPolicyManager_::_1_::dtor$0 @ 0x18009DB3F (_CWindowsPolicyManager--_CWindowsPolicyManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CUnknown::~CUnknown(CUnknown *this)
{
  *(_QWORD *)this = &CUnknown::`vftable';
}
