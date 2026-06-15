/*
 * XREFs of ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x180019958
 * Callers:
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x1800199CC (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18001AC58 (-TsSessionIdConnect@@YAXK@Z.c)
 * Callees:
 *     ??$QueueApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@YAJP8CApplicationManager@@EAAJPEAU_SESSIONMUTECHANGES@@@Z0@Z @ 0x18001C860 (--$QueueApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@YAJP8CApplicationManager@@EAAJPEAU_SE.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall QueueSessionMuteUnmute(int a1, int a2)
{
  int v4; // edi
  HANDLE ProcessHeap; // rax
  _DWORD *v6; // rax
  __int64 v7; // rcx
  void *v8; // rbx

  v4 = -2147024882;
  ProcessHeap = GetProcessHeap();
  v6 = HeapAlloc(ProcessHeap, 0, 8uLL);
  v8 = v6;
  if ( v6 )
  {
    v6[1] = a1;
    *v6 = a2;
    v4 = QueueApplicationManagerWorkItem<_SESSIONMUTECHANGES>(v7, v6);
    if ( v4 < 0 )
      operator delete(v8, 8uLL);
  }
  return (unsigned int)v4;
}
