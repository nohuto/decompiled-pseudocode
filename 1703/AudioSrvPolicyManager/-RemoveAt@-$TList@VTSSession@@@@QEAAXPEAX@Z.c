/*
 * XREFs of ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18001C808
 * Callers:
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x18001A40C (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001A658 (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18001ABB4 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     TS_AudioProtocolNotifyRundown @ 0x18001C2F0 (TS_AudioProtocolNotifyRundown.c)
 * Callees:
 *     <none>
 */

void __fastcall TList<TSSession>::RemoveAt(__int64 a1, _QWORD *a2)
{
  if ( a2 == qword_180031D68 )
    qword_180031D68 = (void *)*a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (_QWORD *)qword_180031D70 )
    qword_180031D70 = a2[1];
  else
    *(_QWORD *)(*a2 + 8LL) = a2[1];
  --dword_180031D78;
  *a2 = 0LL;
  a2[1] = 0LL;
  operator delete(a2, 0x18uLL);
}
