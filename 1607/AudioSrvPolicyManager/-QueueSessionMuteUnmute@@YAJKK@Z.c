/*
 * XREFs of ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x18001BA2C
 * Callers:
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18001BAAC (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18001CE08 (-TsSessionIdConnect@@YAXK@Z.c)
 * Callees:
 *     ??$QueueApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@YAJP8CApplicationManager@@EAAJPEAU_SESSIONMUTECHANGES@@@Z0@Z @ 0x18001EC90 (--$QueueApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@YAJP8CApplicationManager@@EAAJPEAU_SE.c)
 */

__int64 __fastcall QueueSessionMuteUnmute(int a1, int a2)
{
  int v4; // edi
  HANDLE ProcessHeap; // rax
  _DWORD *v6; // rax
  __int64 v7; // rcx
  void *v8; // rbx
  HANDLE v9; // rax

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
    {
      v9 = GetProcessHeap();
      HeapFree(v9, 0, v8);
    }
  }
  return (unsigned int)v4;
}
