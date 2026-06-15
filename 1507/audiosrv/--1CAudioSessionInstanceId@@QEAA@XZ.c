/*
 * XREFs of ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18000BB2C
 * Callers:
 *     ?FreeNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18000B5E0 (-FreeNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@.c)
 *     ??1CAudioSession@@MEAA@XZ @ 0x18000FB3C (--1CAudioSession@@MEAA@XZ.c)
 *     _CVADServer::CVADServer_::_1_::dtor$1 @ 0x1800467A0 (_CVADServer--CVADServer_--_1_--dtor$1.c)
 *     _CAudioSessionManager::OnStateChanged_::_1_::dtor$1 @ 0x180046A94 (_CAudioSessionManager--OnStateChanged_--_1_--dtor$1.c)
 *     ??1CVADServer@@QEAA@XZ @ 0x180066C78 (--1CVADServer@@QEAA@XZ.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x18007F590 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x18007FED0 (-NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z.c)
 *     _CAudioSessionManager::NotifySessionAudioProtocol_::_1_::dtor$0 @ 0x18007FFE1 (_CAudioSessionManager--NotifySessionAudioProtocol_--_1_--dtor$0.c)
 *     ?NotifySessionTerminate@CAudioSessionManager@@QEAAJK@Z @ 0x18007FFF4 (-NotifySessionTerminate@CAudioSessionManager@@QEAAJK@Z.c)
 *     _CAudioSessionManager::NotifySessionTerminate_::_1_::dtor$0 @ 0x18008019E (_CAudioSessionManager--NotifySessionTerminate_--_1_--dtor$0.c)
 *     AudioSessionManagerGetExistingSession @ 0x180080AF0 (AudioSessionManagerGetExistingSession.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180080C80 (AudioSessionManagerGetSessionForStreamSwitch.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z @ 0x1800813D0 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??1CAppAudioSessionId@@QEAA@XZ @ 0x18000CB5C (--1CAppAudioSessionId@@QEAA@XZ.c)
 */

void __fastcall CAudioSessionInstanceId::~CAudioSessionInstanceId(CAudioSessionInstanceId *this)
{
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 9) - 24LL));
  CAppAudioSessionId::~CAppAudioSessionId((CAudioSessionInstanceId *)((char *)this + 8));
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)this - 24LL));
}
