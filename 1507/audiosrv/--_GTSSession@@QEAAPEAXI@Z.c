/*
 * XREFs of ??_GTSSession@@QEAAPEAXI@Z @ 0x18009EFFC
 * Callers:
 *     TS_AudioProtocolNotifyRundown @ 0x180007298 (TS_AudioProtocolNotifyRundown.c)
 *     s_tsUnregisterAudioProtocolNotification @ 0x180009890 (s_tsUnregisterAudioProtocolNotification.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x1800383F8 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18004070C (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x18006AB00 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18009FD64 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18009EAD4 (--1TSSession@@QEAA@XZ.c)
 */

TSSession *__fastcall TSSession::`scalar deleting destructor'(TSSession *this)
{
  TSSession::~TSSession(this);
  operator delete(this);
  return this;
}
