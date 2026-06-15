/*
 * XREFs of ??1CUnknown@@UEAA@XZ @ 0x180039018
 * Callers:
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$0 @ 0x18003A1B4 (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$0.c)
 *     _CAudioStream::_CAudioStream_::_1_::dtor$0 @ 0x18003AAD0 (_CAudioStream--_CAudioStream_--_1_--dtor$0.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$0 @ 0x18003ABF0 (_CAudioStream--CAudioStream_--_1_--dtor$0.c)
 *     _CServerAudioSessionControl::CServerAudioSessionControl_::_1_::dtor$0 @ 0x18004F555 (_CServerAudioSessionControl--CServerAudioSessionControl_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CUnknown::~CUnknown(CUnknown *this)
{
  *(_QWORD *)this = &CUnknown::`vftable';
}
