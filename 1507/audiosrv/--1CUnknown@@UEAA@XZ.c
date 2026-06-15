/*
 * XREFs of ??1CUnknown@@UEAA@XZ @ 0x180044B50
 * Callers:
 *     _CProcess::_CProcess_::_1_::dtor$0 @ 0x180046366 (_CProcess--_CProcess_--_1_--dtor$0.c)
 *     _CProcess::CProcess_::_1_::dtor$0 @ 0x18004641A (_CProcess--CProcess_--_1_--dtor$0.c)
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$0 @ 0x180046A17 (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$0.c)
 *     _CAudioSessionManager::CreateAudioSessionControl_::_1_::dtor$2 @ 0x180046AF8 (_CAudioSessionManager--CreateAudioSessionControl_--_1_--dtor$2.c)
 *     _CAudioStream::_CAudioStream_::_1_::dtor$0 @ 0x180046DF0 (_CAudioStream--_CAudioStream_--_1_--dtor$0.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$0 @ 0x180046EB0 (_CAudioStream--CAudioStream_--_1_--dtor$0.c)
 *     _CWindowsPolicyManager::_CWindowsPolicyManager_::_1_::dtor$0 @ 0x1800A0953 (_CWindowsPolicyManager--_CWindowsPolicyManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CUnknown::~CUnknown(CUnknown *this)
{
  *(_QWORD *)this = &CUnknown::`vftable';
}
