/*
 * XREFs of ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x18003F0EC
 * Callers:
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18003AD7C (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18003EC70 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ??$QueueApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@YAJP8CApplicationManager@@EAAJPEAU_SESSIONMUTECHANGES@@@Z0@Z @ 0x18003F150 (--$QueueApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@YAJP8CApplicationManager@@EAAJPEAU_SE.c)
 */

__int64 __fastcall QueueSessionMuteUnmute(int a1, int a2)
{
  int v4; // edi
  _DWORD *v5; // rax
  __int64 v6; // rcx
  void *v7; // rbx

  v4 = -2147024882;
  v5 = operator new(8uLL);
  v7 = v5;
  if ( v5 )
  {
    v5[1] = a1;
    *v5 = a2;
    v4 = QueueApplicationManagerWorkItem<_SESSIONMUTECHANGES>(v6, v5);
    if ( v4 < 0 )
      operator delete(v7);
  }
  return (unsigned int)v4;
}
