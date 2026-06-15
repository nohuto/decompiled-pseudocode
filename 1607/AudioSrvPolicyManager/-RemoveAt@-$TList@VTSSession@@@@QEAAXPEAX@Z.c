/*
 * XREFs of ?RemoveAt@?$TList@VTSSession@@@@QEAAXPEAX@Z @ 0x18001EC1C
 * Callers:
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x18001C420 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001C6B4 (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18001CD34 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     TS_AudioProtocolNotifyRundown @ 0x18001E6B0 (TS_AudioProtocolNotifyRundown.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall TList<TSSession>::RemoveAt(__int64 a1, _QWORD *a2)
{
  HANDLE ProcessHeap; // rax

  if ( a2 == lpMem )
    lpMem = (LPVOID)*a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (_QWORD *)qword_180034CC8 )
    qword_180034CC8 = a2[1];
  else
    *(_QWORD *)(*a2 + 8LL) = a2[1];
  --dword_180034CD0;
  *a2 = 0LL;
  a2[1] = 0LL;
  ProcessHeap = GetProcessHeap();
  return HeapFree(ProcessHeap, 0, a2);
}
