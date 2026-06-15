/*
 * XREFs of ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18009C904
 * Callers:
 *     s_tsUnregisterAudioProtocolNotification @ 0x18002E450 (s_tsUnregisterAudioProtocolNotification.c)
 *     TS_AudioProtocolNotifyRundown @ 0x18003959C (TS_AudioProtocolNotifyRundown.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x18003AE84 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18009CED0 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall TList<TSSession>::RemoveAt(__int64 a1, _QWORD *a2)
{
  if ( a2 == qword_1800E68A0 )
    qword_1800E68A0 = (void *)*a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (_QWORD *)qword_1800E68A8 )
    qword_1800E68A8 = a2[1];
  else
    *(_QWORD *)(*a2 + 8LL) = a2[1];
  --dword_1800E68B0;
  *a2 = 0LL;
  a2[1] = 0LL;
  operator delete(a2);
}
