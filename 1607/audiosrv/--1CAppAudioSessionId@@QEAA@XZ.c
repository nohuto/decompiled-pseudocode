/*
 * XREFs of ??1CAppAudioSessionId@@QEAA@XZ @ 0x18002A188
 * Callers:
 *     _CAudioSessionManager::OnStateChanged_::_1_::dtor$5 @ 0x18003A224 (_CAudioSessionManager--OnStateChanged_--_1_--dtor$5.c)
 *     _ATL::CAtlMap_CAudioSessionInstanceId_CAudioSession_____ptr64_CAudioSessionInstanceIdTraits_ATL::CElementTraits_CAudioSession_____ptr64___::NewNode_::_1_::dtor$4 @ 0x18003C610 (_ATL--CAtlMap_CAudioSessionInstanceId_CAudioSession_____ptr64_CAudioSessionInstance_ea_18003C610.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall CAppAudioSessionId::~CAppAudioSessionId(CAppAudioSessionId *this)
{
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 4) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 1) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)this - 24LL));
}
