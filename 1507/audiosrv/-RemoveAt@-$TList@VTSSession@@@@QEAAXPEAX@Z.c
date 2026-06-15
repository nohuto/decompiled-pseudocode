/*
 * XREFs of ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18009F9BC
 * Callers:
 *     TS_AudioProtocolNotifyRundown @ 0x180007298 (TS_AudioProtocolNotifyRundown.c)
 *     s_tsUnregisterAudioProtocolNotification @ 0x180009890 (s_tsUnregisterAudioProtocolNotification.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x1800383F8 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18009FD64 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall TList<TSSession>::RemoveAt(__int64 a1, _QWORD *a2)
{
  if ( a2 == qword_1800E88D0 )
    qword_1800E88D0 = (void *)*a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (_QWORD *)qword_1800E88D8 )
    qword_1800E88D8 = a2[1];
  else
    *(_QWORD *)(*a2 + 8LL) = a2[1];
  --dword_1800E88E0;
  *a2 = 0LL;
  a2[1] = 0LL;
  operator delete(a2);
}
