/*
 * XREFs of ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180014328
 * Callers:
 *     ?FreeNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180013D00 (-FreeNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@.c)
 *     ??1CAudioSession@@MEAA@XZ @ 0x180027698 (--1CAudioSession@@MEAA@XZ.c)
 *     _CAudioSessionManager::OnStateChanged_::_1_::dtor$1 @ 0x18004A8C4 (_CAudioSessionManager--OnStateChanged_--_1_--dtor$1.c)
 *     _ATL::CComObject_CVADServer_::CreateInstance_::_1_::dtor$3 @ 0x18004A98C (_ATL--CComObject_CVADServer_--CreateInstance_--_1_--dtor$3.c)
 *     ??1CVADServer@@QEAA@XZ @ 0x1800650C4 (--1CVADServer@@QEAA@XZ.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x18007A7B0 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x18007B0F0 (-NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z.c)
 *     _CAudioSessionManager::NotifySessionAudioProtocol_::_1_::dtor$0 @ 0x18007B201 (_CAudioSessionManager--NotifySessionAudioProtocol_--_1_--dtor$0.c)
 *     ?NotifySessionTerminate@CAudioSessionManager@@QEAAJK@Z @ 0x18007B214 (-NotifySessionTerminate@CAudioSessionManager@@QEAAJK@Z.c)
 *     _CAudioSessionManager::NotifySessionTerminate_::_1_::dtor$0 @ 0x18007B3BE (_CAudioSessionManager--NotifySessionTerminate_--_1_--dtor$0.c)
 *     AudioSessionManagerGetExistingSession @ 0x18007BC80 (AudioSessionManagerGetExistingSession.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x18007BE10 (AudioSessionManagerGetSessionForStreamSwitch.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z @ 0x18007C690 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z.c)
 * Callees:
 *     ??1CAppAudioSessionId@@QEAA@XZ @ 0x180011CA0 (--1CAppAudioSessionId@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall CAudioSessionInstanceId::~CAudioSessionInstanceId(CAudioSessionInstanceId *this)
{
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 9) - 24LL));
  CAppAudioSessionId::~CAppAudioSessionId((CAudioSessionInstanceId *)((char *)this + 8));
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)this - 24LL));
}
