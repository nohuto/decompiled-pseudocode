/*
 * XREFs of ?xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z @ 0x1401FDB80
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 *     _anonymous_namespace_::xxxUpdateTray @ 0x1401FD9F8 (_anonymous_namespace_--xxxUpdateTray.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

void __fastcall xxxSetTrayWindow(struct tagDESKTOP *a1, struct tagWND *a2)
{
  __int64 v2; // rdi
  int v3; // ebx
  __int64 v4; // rcx

  if ( a2 )
    v2 = *(_QWORD *)a2;
  else
    v2 = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)a1 + 1) + 184LL) )
    PostShellHookMessagesEx((LastWokenThread *)4, v2);
  v3 = *((_DWORD *)PtiCurrent((__int64)a1) + 178);
  if ( ((*(_DWORD *)(**((_QWORD **)PtiCurrent(v4) + 62) + 16LL) | v3) & 0x800) != 0 )
    xxxCallHook(4LL, v2, 0LL, 10);
}
