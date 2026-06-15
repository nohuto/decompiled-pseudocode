/*
 * XREFs of ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180011770
 * Callers:
 *     ?FreeNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18002BD98 (-FreeNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@.c)
 *     _CAudioSessionManager::OnStateChanged_::_1_::dtor$1 @ 0x18003A234 (_CAudioSessionManager--OnStateChanged_--_1_--dtor$1.c)
 *     _ATL::CComObject_CVADServer_::CreateInstance_::_1_::dtor$3 @ 0x18003A4DD (_ATL--CComObject_CVADServer_--CreateInstance_--_1_--dtor$3.c)
 *     ??1CVADServer@@QEAA@XZ @ 0x18004F858 (--1CVADServer@@QEAA@XZ.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180062150 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x180062938 (-NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z.c)
 *     _CAudioSessionManager::NotifySessionAudioProtocol_::_1_::dtor$0 @ 0x180062A45 (_CAudioSessionManager--NotifySessionAudioProtocol_--_1_--dtor$0.c)
 *     ?NotifySessionTerminate@CAudioSessionManager@@QEAAJK@Z @ 0x180062A64 (-NotifySessionTerminate@CAudioSessionManager@@QEAAJK@Z.c)
 *     _CAudioSessionManager::NotifySessionTerminate_::_1_::dtor$0 @ 0x180062BBF (_CAudioSessionManager--NotifySessionTerminate_--_1_--dtor$0.c)
 *     AudioSessionManagerGetExistingSession @ 0x180063440 (AudioSessionManagerGetExistingSession.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180063590 (AudioSessionManagerGetSessionForStreamSwitch.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x180063D80 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall CAudioSessionInstanceId::~CAudioSessionInstanceId(CAudioSessionInstanceId *this)
{
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 9) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 5) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 2) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 1) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)this - 24LL));
}
