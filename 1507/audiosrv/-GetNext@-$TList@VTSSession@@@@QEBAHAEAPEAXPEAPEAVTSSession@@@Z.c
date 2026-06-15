/*
 * XREFs of ?GetNext@?$TList@VTSSession@@@@QEBAHAEAPEAXPEAPEAVTSSession@@@Z @ 0x180008EE0
 * Callers:
 *     TS_AudioProtocolNotifyRundown @ 0x180007298 (TS_AudioProtocolNotifyRundown.c)
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180040BD4 (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180040C70 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TList<TSSession>::GetNext(__int64 a1, _QWORD **a2, _QWORD *a3)
{
  _QWORD *v3; // rcx

  v3 = *a2;
  if ( !*a2 )
    return 0LL;
  *a2 = (_QWORD *)*v3;
  if ( a3 )
    *a3 = v3[2];
  return 1LL;
}
