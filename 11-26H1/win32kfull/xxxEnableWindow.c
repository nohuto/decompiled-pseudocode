/*
 * XREFs of xxxEnableWindow @ 0x14015E320
 * Callers:
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140042B60 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     NtUserEnableWindow @ 0x14015E250 (NtUserEnableWindow.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsImmersiveBand @ 0x14015E3C0 (IsImmersiveBand.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x14015E3EC (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1402A6DF8 (ExemptedFromImmersiveRestrictions.c)
 */

__int64 __fastcall xxxEnableWindow(struct tagWND *a1, int a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax

  v5 = 0;
  if ( !(unsigned int)IsImmersiveBand(a1) )
    goto LABEL_2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  v8 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v8 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)CurrentProcessWin32Process >> 64) & CurrentProcessWin32Process;
  if ( (unsigned int)IsDesktopApp(v8) && (v10 = PtiCurrent(v9), !(unsigned int)ExemptedFromImmersiveRestrictions(v10)) )
  {
    UserSetLastError(5);
    return (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 31LL) >> 3) & 1;
  }
  else
  {
LABEL_2:
    LOBYTE(v5) = a2 != 0;
    return xxxEnableWindowWorker(a1, v5);
  }
}
