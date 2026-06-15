/*
 * XREFs of ?TsSessionMayBeDeleted@@YAHPEAVTSSession@@@Z @ 0x18002E514
 * Callers:
 *     s_tsUnregisterAudioProtocolNotification @ 0x18002E450 (s_tsUnregisterAudioProtocolNotification.c)
 *     TS_AudioProtocolNotifyRundown @ 0x18003959C (TS_AudioProtocolNotifyRundown.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x18003AE84 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18009CED0 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
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
