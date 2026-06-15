/*
 * XREFs of ??_GTSSession@@QEAAPEAXI@Z @ 0x18009BE30
 * Callers:
 *     s_tsUnregisterAudioProtocolNotification @ 0x18002E450 (s_tsUnregisterAudioProtocolNotification.c)
 *     TS_AudioProtocolNotifyRundown @ 0x18003959C (TS_AudioProtocolNotifyRundown.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x18003AE84 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18003E748 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x180069810 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18009CED0 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18009B950 (--1TSSession@@QEAA@XZ.c)
 */

TSSession *__fastcall TSSession::`scalar deleting destructor'(TSSession *this)
{
  TSSession::~TSSession(this);
  operator delete(this);
  return this;
}
