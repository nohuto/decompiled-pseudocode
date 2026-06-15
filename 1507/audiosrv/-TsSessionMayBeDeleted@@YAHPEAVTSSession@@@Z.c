/*
 * XREFs of ?TsSessionMayBeDeleted@@YAHPEAVTSSession@@@Z @ 0x180009954
 * Callers:
 *     TS_AudioProtocolNotifyRundown @ 0x180007298 (TS_AudioProtocolNotifyRundown.c)
 *     s_tsUnregisterAudioProtocolNotification @ 0x180009890 (s_tsUnregisterAudioProtocolNotification.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x1800383F8 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18009FD64 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TsSessionMayBeDeleted(struct TSSession *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_DWORD *)a1 + 12) && *((_DWORD *)a1 + 1) == 0xFFFF && !*((_DWORD *)a1 + 8) && !*((_QWORD *)a1 + 9) )
    return 1LL;
  return result;
}
